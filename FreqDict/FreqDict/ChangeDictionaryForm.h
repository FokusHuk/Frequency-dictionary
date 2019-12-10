#pragma once

namespace FreqDict {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ ChangeDirectoryForm
	/// </summary>
	public ref class ChangeDictionaryForm : public System::Windows::Forms::Form
	{
	public:
		ChangeDictionaryForm(System::Windows::Forms::Form^ _parentForm_LogIn)
		{
			parentForm_LogIn = _parentForm_LogIn;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~ChangeDictionaryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  lb_DictionaryList;
	protected:
	private: System::Windows::Forms::Button^  btn_openDict;
	private: System::Windows::Forms::Button^  btn_cancelWindow;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangeDictionaryForm::typeid));
			this->lb_DictionaryList = (gcnew System::Windows::Forms::ListBox());
			this->btn_openDict = (gcnew System::Windows::Forms::Button());
			this->btn_cancelWindow = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lb_DictionaryList
			// 
			this->lb_DictionaryList->FormattingEnabled = true;
			this->lb_DictionaryList->Location = System::Drawing::Point(12, 12);
			this->lb_DictionaryList->Name = L"lb_DictionaryList";
			this->lb_DictionaryList->Size = System::Drawing::Size(159, 238);
			this->lb_DictionaryList->TabIndex = 0;
			// 
			// btn_openDict
			// 
			this->btn_openDict->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_openDict.BackgroundImage")));
			this->btn_openDict->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_openDict->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_openDict->Location = System::Drawing::Point(186, 12);
			this->btn_openDict->Name = L"btn_openDict";
			this->btn_openDict->Size = System::Drawing::Size(90, 34);
			this->btn_openDict->TabIndex = 1;
			this->btn_openDict->Text = L"ќткрыть";
			this->btn_openDict->UseVisualStyleBackColor = true;
			this->btn_openDict->Click += gcnew System::EventHandler(this, &ChangeDictionaryForm::btn_openDict_Click);
			// 
			// btn_cancelWindow
			// 
			this->btn_cancelWindow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cancelWindow.BackgroundImage")));
			this->btn_cancelWindow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_cancelWindow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cancelWindow->Location = System::Drawing::Point(186, 80);
			this->btn_cancelWindow->Name = L"btn_cancelWindow";
			this->btn_cancelWindow->Size = System::Drawing::Size(90, 34);
			this->btn_cancelWindow->TabIndex = 2;
			this->btn_cancelWindow->TabStop = false;
			this->btn_cancelWindow->Text = L"ќтмена";
			this->btn_cancelWindow->UseVisualStyleBackColor = true;
			this->btn_cancelWindow->Click += gcnew System::EventHandler(this, &ChangeDictionaryForm::btn_cancelWindow_Click);
			// 
			// ChangeDictionaryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->ClientSize = System::Drawing::Size(288, 263);
			this->Controls->Add(this->btn_cancelWindow);
			this->Controls->Add(this->btn_openDict);
			this->Controls->Add(this->lb_DictionaryList);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(304, 302);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(304, 302);
			this->Name = L"ChangeDictionaryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ќткрытие словар€";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ChangeDictionaryForm::ChangeDirectoryForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ChangeDictionaryForm::ChangeDirectoryForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	public: System::Windows::Forms::Form^ parentForm_LogIn;
	private: System::Void ChangeDirectoryForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void btn_cancelWindow_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void ChangeDirectoryForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_openDict_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
