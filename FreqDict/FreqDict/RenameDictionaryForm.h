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
	/// Сводка для RenameDictionaryForm
	/// </summary>
	public ref class RenameDictionaryForm : public System::Windows::Forms::Form
	{
	public:
		RenameDictionaryForm(System::Windows::Forms::Form^ _parentForm_LogIn, String^ _DictionaryFile)
		{
			parentForm_LogIn = _parentForm_LogIn;
			DictionaryFile = _DictionaryFile;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RenameDictionaryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_newName;
	protected:

	protected:

	private: System::Windows::Forms::Button^  btn_renameDictionary;
	private: System::Windows::Forms::Button^  btn_cancel;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RenameDictionaryForm::typeid));
			this->tb_newName = (gcnew System::Windows::Forms::TextBox());
			this->btn_renameDictionary = (gcnew System::Windows::Forms::Button());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb_newName
			// 
			this->tb_newName->Location = System::Drawing::Point(21, 12);
			this->tb_newName->Name = L"tb_newName";
			this->tb_newName->Size = System::Drawing::Size(198, 20);
			this->tb_newName->TabIndex = 0;
			// 
			// btn_renameDictionary
			// 
			this->btn_renameDictionary->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_renameDictionary.BackgroundImage")));
			this->btn_renameDictionary->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_renameDictionary->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_renameDictionary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btn_renameDictionary->Location = System::Drawing::Point(21, 49);
			this->btn_renameDictionary->Name = L"btn_renameDictionary";
			this->btn_renameDictionary->Size = System::Drawing::Size(81, 30);
			this->btn_renameDictionary->TabIndex = 1;
			this->btn_renameDictionary->Text = L"Подтвердить";
			this->btn_renameDictionary->UseVisualStyleBackColor = true;
			this->btn_renameDictionary->Click += gcnew System::EventHandler(this, &RenameDictionaryForm::btn_renameDictionary_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cancel.BackgroundImage")));
			this->btn_cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cancel->Location = System::Drawing::Point(138, 49);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(81, 30);
			this->btn_cancel->TabIndex = 2;
			this->btn_cancel->TabStop = false;
			this->btn_cancel->Text = L"Отмена";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &RenameDictionaryForm::btn_cancel_Click);
			// 
			// RenameDictionaryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->ClientSize = System::Drawing::Size(238, 96);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->btn_renameDictionary);
			this->Controls->Add(this->tb_newName);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(254, 135);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(254, 135);
			this->Name = L"RenameDictionaryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Переименование  словаря";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &RenameDictionaryForm::RenameDictionaryForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &RenameDictionaryForm::RenameDictionaryForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Windows::Forms::Form^ parentForm_LogIn;
	private: String ^ DictionaryFile;

	private: System::Void RenameDictionaryForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_cancel_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void RenameDictionaryForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void btn_renameDictionary_Click(System::Object^  sender, System::EventArgs^  e);
};
}
