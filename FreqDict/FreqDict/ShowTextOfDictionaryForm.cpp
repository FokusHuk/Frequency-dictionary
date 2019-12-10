#include "ShowTextOfDictionaryForm.h"

using namespace FreqDict;
using namespace std;

void ShowTextOfDictionaryForm::btn_close_Click(System::Object^  sender, System::EventArgs^  e)
{
	Close();
}

void ShowTextOfDictionaryForm::ShowTextOfDictionaryForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	if (parentForm_LogIn != nullptr)
		parentForm_LogIn->Enabled = true;
}

void ShowTextOfDictionaryForm::ShowTextOfDictionaryForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	lbl_dictText->Text = "";
	StreamReader^ reader = gcnew StreamReader(Environment::CurrentDirectory + "\\" + DictionaryFile + "DictText.txt");
	String^ str;
	while ((str = reader->ReadLine()) != nullptr)
	{
		lbl_dictText->Text += str;
		lbl_dictText->Text += "\r\n";
	}
	reader->Close();

	str = lbl_dictText->Text;
	str = str->Replace(".", " ");
	str = str->Replace(",", " ");
	int size = 0;
	array<String^>^ arr = str->Split(' ');
	for (int i = 0; i < arr->Length; i++)
		if (arr[i] != "") size++;
	lbl_wordCount->Text += size;
}