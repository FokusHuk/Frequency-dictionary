#include "DictWord.h"
#include "DictionaryRedactorForm.h"
#include "RenameDictionaryForm.h"
#include "CreateDictTextForm.h"
#include "ShowTextOfDictionaryForm.h"
#include "FindWordForm.h"


using namespace FreqDict;
using namespace std;


//.NET overriding Functions

void DictionaryRedactorForm::DictionaryRedactorForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	if (isNewDictionary)
		createNewDictionary();
	else
		readDictionaryFromFile();
}

void DictionaryRedactorForm::DictionaryRedactorForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	if (!isParentClosed)
	{
		if (parentForm_LogIn != nullptr)
			parentForm_LogIn->Show();
	}
}

void DictionaryRedactorForm::btn_exitToMenu_Click(System::Object^  sender, System::EventArgs^  e)
{
	Close();
}

void DictionaryRedactorForm::btn_deleteDictionary_Click(System::Object^  sender, System::EventArgs^  e)
{
	deleteDictionary();
}

void DictionaryRedactorForm::btn_renameDictionary_Click(System::Object^  sender, System::EventArgs^  e)
{
	renameDictionary();
}

void DictionaryRedactorForm::btn_exit_Click(System::Object^  sender, System::EventArgs^  e)
{
	isParentClosed = true;
	parentForm_LogIn->Close();
	Close();
}

void DictionaryRedactorForm::btn_writeNewText_Click(System::Object^  sender, System::EventArgs^  e)
{
	writeNewText();
}

void DictionaryRedactorForm::btn_showText_Click(System::Object^  sender, System::EventArgs^  e)
{
	showText();
}

void DictionaryRedactorForm::btn_findWord_Click(System::Object^  sender, System::EventArgs^  e)
{
	FindWordForm^ f = gcnew FindWordForm(this);
	f->Show();
	this->Enabled = false;
}

void DictionaryRedactorForm::btn_loadTextFromFile_Click(System::Object^  sender, System::EventArgs^  e)
{
	loadTextFromFile();
}

//My Functions

void DictionaryRedactorForm::readDictionaryFromFile()
{
	lbl_DictionaryName->Text = DictionaryFile;
	StreamReader^ reader = File::OpenText(Environment::CurrentDirectory + "\\" + DictionaryFile + "Dict.txt");
	String^ s;
	array<String^>^ str;
	while ((s = reader->ReadLine()) != nullptr)
	{
		str = s->Split(' ');
		lb_Dictionary->Items->Add(gcnew DictWord(str[0], Convert::ToInt32(str[1])));
	}
	reader->Close();

	sortDictionary();

	lbl_DictionarySize->Text += (lb_Dictionary->Items->Count).ToString();
}

void DictionaryRedactorForm::createNewDictionary()
{
	lbl_DictionaryName->Text = DictionaryFile;
	FileStream^ f;
	f = gcnew FileStream(Environment::CurrentDirectory + "\\" + DictionaryFile + "Dict.txt", FileMode::CreateNew);
	f->Close();
	f = gcnew FileStream(Environment::CurrentDirectory + "\\" + DictionaryFile + "DictText.txt", FileMode::CreateNew);
	f->Close();
	lbl_DictionarySize->Text += "0";
}

void DictionaryRedactorForm::deleteDictionary()
{
	System::Windows::Forms::DialogResult result = MessageBox::Show("Вы действительно хотите удалить этот словарь?", "Удаление словаря", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (result == ::DialogResult::No)
		return;
	File::Delete(Environment::CurrentDirectory + "\\" + DictionaryFile + "Dict.txt");
	File::Delete(Environment::CurrentDirectory + "\\" + DictionaryFile + "DictText.txt");
	MessageBox::Show("Словарь успешно удалён", "Удаление словаря", MessageBoxButtons::OK, MessageBoxIcon::Information);
	Close();
}

void DictionaryRedactorForm::renameDictionary()
{
	RenameDictionaryForm^ f = gcnew RenameDictionaryForm(this, DictionaryFile);
	f->Show();
	this->Enabled = false;
}

void DictionaryRedactorForm::changeDictionaryNameOnForm(String^ arg)
{
	DictionaryFile = arg;
	lbl_DictionaryName->Text = arg;
}

void DictionaryRedactorForm::writeNewText()
{
	CreateDictTextForm^ f = gcnew CreateDictTextForm(this, DictionaryFile);
	f->Show();
	this->Enabled = false;
}

void DictionaryRedactorForm::generateDictionary()
{
	lb_Dictionary->Items->Clear();
	StreamReader^ reader = gcnew StreamReader(Environment::CurrentDirectory + "\\" + DictionaryFile + "DictText.txt");
	String^ str = "";
	array<String^>^ arr;
	int ret, i;
	while((str = reader->ReadLine()) != nullptr)
	{
		str = str->Replace(",", " ");
		str = str->Replace(".", " ");
		arr = str->Split(' ');
		for (i = 0; i < arr->Length; i++)
		{
			if (arr[i] != "")
			{
				arr[i] = arr[i]->ToLower();
				ret = isDictionaryContains(arr[i]);
				if (ret == -1)
				{
					lb_Dictionary->Items->Add(gcnew DictWord(arr[i]));
				}
				else
				{
					((DictWord^)lb_Dictionary->Items[ret])->incFreq();
				}
			}
		}
	}
	reader->Close();

	sortDictionary();

	saveDictionary();

	lbl_DictionarySize->Text = "Количество слов: " + (lb_Dictionary->Items->Count).ToString();
}

int DictionaryRedactorForm::isDictionaryContains(String^ arg)
{
	for (int i = 0; i < lb_Dictionary->Items->Count; i++)
		if (((DictWord^)lb_Dictionary->Items[i])->getWord() == arg)
			return i;
	return -1;
}

void DictionaryRedactorForm::sortDictionary()
{
	for(int i = 0; i < lb_Dictionary->Items->Count; i ++)
		for (int j = 0; j < lb_Dictionary->Items->Count - 1; j++)
		{
			if (((DictWord^)lb_Dictionary->Items[j])->CompareTo((DictWord^)lb_Dictionary->Items[j + 1]))
			{
				Object^ dw = lb_Dictionary->Items[j];
				lb_Dictionary->Items[j] = lb_Dictionary->Items[j + 1];
				lb_Dictionary->Items[j + 1] = dw;
			}
		}
}

void DictionaryRedactorForm::saveDictionary()
{
	StreamWriter^ writer = gcnew StreamWriter(Environment::CurrentDirectory + "\\" + DictionaryFile + "Dict.txt");
	for (int i = 0; i < lb_Dictionary->Items->Count; i++)
	{
		writer->WriteLine(((DictWord^)lb_Dictionary->Items[i])->getWord() + " " + ((DictWord^)lb_Dictionary->Items[i])->getFreq());
	}
	writer->Close();
}

void DictionaryRedactorForm::showText()
{
	ShowTextOfDictionaryForm^ f = gcnew ShowTextOfDictionaryForm(this, DictionaryFile);
	f->Show();
	this->Enabled = false;
}

void DictionaryRedactorForm::findWord(String^ arg)
{
	for (int i = 0; i < lb_Dictionary->Items->Count; i++)
	{
		if (((DictWord^)lb_Dictionary->Items[i])->getWord() == arg)
		{
			lb_Dictionary->SetSelected(i, true);
			return;
		}
	}
	MessageBox::Show("Слово не найдено.", "Поиск слова", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

void DictionaryRedactorForm::loadTextFromFile()
{
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	String^ str = "";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		StreamReader^ reader = gcnew StreamReader(ofd->FileName);
		StreamWriter^ writer = gcnew StreamWriter(Environment::CurrentDirectory + "\\" + DictionaryFile + "DictText.txt");
		while ((str = reader->ReadLine()) != nullptr)
		{
			writer->WriteLine(str);
		}
		reader->Close();
		writer->Close();
	}
	generateDictionary();
}