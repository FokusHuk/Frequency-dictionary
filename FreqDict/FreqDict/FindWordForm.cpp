#include "FindWordForm.h"
#include "DictionaryRedactorForm.h"

using namespace FreqDict;
using namespace std;

void FindWordForm::btn_cancel_Click(System::Object^  sender, System::EventArgs^  e)
{
	Close();
}

void FindWordForm::FindWordForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	if (parentForm_LogIn != nullptr)
		parentForm_LogIn->Enabled = true;
}

void FindWordForm::btn_findWord_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (tb_choosenWord->Text == "")
		return;
	((DictionaryRedactorForm^)parentForm_LogIn)->findWord(tb_choosenWord->Text);
	Close();
}