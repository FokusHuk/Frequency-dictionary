#include "FDict.h"
#include "ChangeDictionaryForm.h"
#include "CreateNewDictionaryForm.h"

using namespace FreqDict;
using namespace std;
[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FreqDict::FDict form;
	Application::Run(%form);
	return 0;
}

void FDict::FDict_Load(Object^ sender, EventArgs^ e)
{

}

void FDict::btn_createDictionary_Click(Object^ sender, EventArgs^ e)
{
	CreateNewDictionaryForm^ f = gcnew CreateNewDictionaryForm(this);
	f->Show();
	this->Enabled = false;
}

void FDict::btn_openDictionary_Click(Object^ sender, EventArgs^ e)
{
	ChangeDictionaryForm^ f = gcnew ChangeDictionaryForm(this);
	f->Show();
	this->Enabled = false;
}

void FDict::btn_exit_Click(Object^ sender, EventArgs^ e)
{
	Close();
}