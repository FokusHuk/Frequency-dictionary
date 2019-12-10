#include "RenameDictionaryForm.h"
#include "DictionaryRedactorForm.h"

using namespace FreqDict;
using namespace std;

void RenameDictionaryForm::RenameDictionaryForm_Load(System::Object^  sender, System::EventArgs^  e)
{

}

void RenameDictionaryForm::btn_cancel_Click(System::Object^  sender, System::EventArgs^  e)
{
	Close();
}

void RenameDictionaryForm::RenameDictionaryForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	if (parentForm_LogIn != nullptr)
		parentForm_LogIn->Enabled = true;
}

void RenameDictionaryForm::btn_renameDictionary_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (tb_newName->Text == "")
		return;
	File::Move(Environment::CurrentDirectory + "\\" + DictionaryFile + "Dict.txt", Environment::CurrentDirectory + "\\" + tb_newName->Text + "Dict.txt");
	File::Move(Environment::CurrentDirectory + "\\" + DictionaryFile + "DictText.txt", Environment::CurrentDirectory + "\\" + tb_newName->Text + "DictText.txt");

	((DictionaryRedactorForm^)parentForm_LogIn)->changeDictionaryNameOnForm(tb_newName->Text);
	Close();
}