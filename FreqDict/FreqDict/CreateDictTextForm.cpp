#include "CreateDictTextForm.h"
#include "DictionaryRedactorForm.h"

using namespace FreqDict;
using namespace std;

void CreateDictTextForm::btn_cancel_Click(System::Object^  sender, System::EventArgs^  e)
{
	Close();
}

void CreateDictTextForm::CreateDictTextForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	if (parentForm_LogIn != nullptr)
		parentForm_LogIn->Enabled = true;
}

void CreateDictTextForm::btn_confirm_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (tb_dictText->Text == "")
		return;
	String^ str = tb_dictText->Text;
	str = str->Replace("\n", " ");

	StreamWriter^ writer = gcnew StreamWriter(Environment::CurrentDirectory + "\\" + DictionaryFile + "DictText.txt");
	writer->Write(str);
	writer->Close();
	((DictionaryRedactorForm^)parentForm_LogIn)->generateDictionary();
	Close();
}

void CreateDictTextForm::tb_dictText_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	String^ str = tb_dictText->Text;
	str = str->Replace("\n", " ");
	array<String^>^ arr = str->Split(' ');
	int size = arr->Length;
	for (int i = 0; i < arr->Length; i++)
		if (arr[i] == "" || arr[i] == " ") size--;
	tssl_wordsCount->Text = "Количество слов: " + size;
}