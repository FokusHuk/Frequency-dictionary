#include "ChangeDictionaryForm.h"
#include "DictionaryRedactorForm.h"

using namespace FreqDict;
using namespace std;

void ChangeDictionaryForm::ChangeDirectoryForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	if (parentForm_LogIn != nullptr)
		parentForm_LogIn->Enabled = true;
}

void ChangeDictionaryForm::btn_cancelWindow_Click(System::Object^  sender, System::EventArgs^  e)
{
	Close();
}

void ChangeDictionaryForm::ChangeDirectoryForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	String^ folder = Environment::CurrentDirectory;
	array<String^>^ file = Directory::GetFiles(folder, "*Dict.txt");
	for (int i = 0; i < file->Length; i++)
	{
	file[i] = file[i]->Remove(0, folder->Length + 1);
	file[i] = file[i]->Remove(file[i]->Length - 8);
	lb_DictionaryList->Items->Add(file[i]);
	}
	lb_DictionaryList->Sorted = true;
}

void ChangeDictionaryForm::btn_openDict_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (lb_DictionaryList->SelectedIndex == -1)
		return;
	DictionaryRedactorForm^ f = gcnew DictionaryRedactorForm(parentForm_LogIn, (String^)lb_DictionaryList->Items[lb_DictionaryList->SelectedIndex], false);
	f->Show();
	parentForm_LogIn->Hide();
	Close();
}