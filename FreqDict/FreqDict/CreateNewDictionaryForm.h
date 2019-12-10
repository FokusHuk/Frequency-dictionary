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
	/// Сводка для CreateNewDictionaryForm
	/// </summary>
	public ref class CreateNewDictionaryForm : public System::Windows::Forms::Form
	{
	public:
		CreateNewDictionaryForm(System::Windows::Forms::Form^ _parentForm_LogIn)
		{
			parentForm_LogIn = _parentForm_LogIn;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CreateNewDictionaryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_fileName;
	protected:

	private: System::Windows::Forms::Button^  btn_continue;
	private: System::Windows::Forms::Button^  button_2;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateNewDictionaryForm::typeid));
			this->tb_fileName = (gcnew System::Windows::Forms::TextBox());
			this->btn_continue = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb_fileName
			// 
			this->tb_fileName->Location = System::Drawing::Point(21, 12);
			this->tb_fileName->Name = L"tb_fileName";
			this->tb_fileName->Size = System::Drawing::Size(195, 20);
			this->tb_fileName->TabIndex = 0;
			// 
			// btn_continue
			// 
			this->btn_continue->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_continue.BackgroundImage")));
			this->btn_continue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_continue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_continue->Location = System::Drawing::Point(21, 49);
			this->btn_continue->Name = L"btn_continue";
			this->btn_continue->Size = System::Drawing::Size(79, 30);
			this->btn_continue->TabIndex = 1;
			this->btn_continue->Text = L"Продолжить";
			this->btn_continue->UseVisualStyleBackColor = true;
			this->btn_continue->Click += gcnew System::EventHandler(this, &CreateNewDictionaryForm::btn_continue_Click);
			// 
			// button_2
			// 
			this->button_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_2.BackgroundImage")));
			this->button_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_2->Location = System::Drawing::Point(137, 49);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(79, 30);
			this->button_2->TabIndex = 2;
			this->button_2->TabStop = false;
			this->button_2->Text = L"Отмена";
			this->button_2->UseVisualStyleBackColor = true;
			this->button_2->Click += gcnew System::EventHandler(this, &CreateNewDictionaryForm::button2_Click);
			// 
			// CreateNewDictionaryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->ClientSize = System::Drawing::Size(238, 96);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->btn_continue);
			this->Controls->Add(this->tb_fileName);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(254, 135);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(254, 135);
			this->Name = L"CreateNewDictionaryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Создание словаря";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CreateNewDictionaryForm::CreateNewDictionaryForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Windows::Forms::Form^ parentForm_LogIn;
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_continue_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void CreateNewDictionaryForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
};
}
