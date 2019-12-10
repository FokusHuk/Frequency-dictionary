#include "CreateNewDictionaryForm.h"
#include "DictionaryRedactorForm.h"

using namespace FreqDict;
using namespace std;

void CreateNewDictionaryForm::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	Close();
}

void CreateNewDictionaryForm::CreateNewDictionaryForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	if (parentForm_LogIn != nullptr)
		parentForm_LogIn->Enabled = true;
}

void CreateNewDictionaryForm::btn_continue_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (tb_fileName->Text == "")
		return;
	String^ folder = Environment::CurrentDirectory;
	array<String^>^ file = Directory::GetFiles(folder, "*Dict.txt");
	for (int i = 0; i < file->Length; i++)
	{
		file[i] = file[i]->Remove(0, folder->Length + 1);
		file[i] = file[i]->Remove(file[i]->Length - 8);
		if (tb_fileName->Text == file[i])
		{
			MessageBox::Show("Словарь с таким именем уже существует.", "Ошибка создания словаря", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
	}
	DictionaryRedactorForm^ f = gcnew DictionaryRedactorForm(parentForm_LogIn, tb_fileName->Text, true);
	f->Show();
	parentForm_LogIn->Hide();
	Close();
}