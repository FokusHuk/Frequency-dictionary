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
	/// Сводка для CreateDictTextForm
	/// </summary>
	public ref class CreateDictTextForm : public System::Windows::Forms::Form
	{
	public:
		CreateDictTextForm(System::Windows::Forms::Form^ _parentForm_LogIn, String^ _DictionaryFile)
		{
			DictionaryFile = _DictionaryFile;
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
		~CreateDictTextForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_dictText;
	private: System::Windows::Forms::StatusStrip^  ss_infoBar;
	protected:


	private: System::Windows::Forms::ToolStripStatusLabel^  tssl_wordsCount;
	private: System::Windows::Forms::Button^  btn_confirm;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateDictTextForm::typeid));
			this->tb_dictText = (gcnew System::Windows::Forms::TextBox());
			this->ss_infoBar = (gcnew System::Windows::Forms::StatusStrip());
			this->tssl_wordsCount = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->btn_confirm = (gcnew System::Windows::Forms::Button());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->ss_infoBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// tb_dictText
			// 
			this->tb_dictText->Location = System::Drawing::Point(12, 12);
			this->tb_dictText->Multiline = true;
			this->tb_dictText->Name = L"tb_dictText";
			this->tb_dictText->Size = System::Drawing::Size(556, 281);
			this->tb_dictText->TabIndex = 0;
			this->tb_dictText->TextChanged += gcnew System::EventHandler(this, &CreateDictTextForm::tb_dictText_TextChanged);
			// 
			// ss_infoBar
			// 
			this->ss_infoBar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tssl_wordsCount });
			this->ss_infoBar->Location = System::Drawing::Point(0, 341);
			this->ss_infoBar->Name = L"ss_infoBar";
			this->ss_infoBar->Size = System::Drawing::Size(580, 22);
			this->ss_infoBar->TabIndex = 1;
			this->ss_infoBar->Text = L"statusStrip1";
			// 
			// tssl_wordsCount
			// 
			this->tssl_wordsCount->Name = L"tssl_wordsCount";
			this->tssl_wordsCount->Size = System::Drawing::Size(107, 17);
			this->tssl_wordsCount->Text = L"Количество слов: ";
			// 
			// btn_confirm
			// 
			this->btn_confirm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_confirm.BackgroundImage")));
			this->btn_confirm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_confirm->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_confirm->Location = System::Drawing::Point(12, 299);
			this->btn_confirm->Name = L"btn_confirm";
			this->btn_confirm->Size = System::Drawing::Size(104, 35);
			this->btn_confirm->TabIndex = 2;
			this->btn_confirm->Text = L"Подтвердить";
			this->btn_confirm->UseVisualStyleBackColor = true;
			this->btn_confirm->Click += gcnew System::EventHandler(this, &CreateDictTextForm::btn_confirm_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cancel.BackgroundImage")));
			this->btn_cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cancel->Location = System::Drawing::Point(464, 299);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(104, 35);
			this->btn_cancel->TabIndex = 3;
			this->btn_cancel->TabStop = false;
			this->btn_cancel->Text = L"Отмена";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &CreateDictTextForm::btn_cancel_Click);
			// 
			// CreateDictTextForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->ClientSize = System::Drawing::Size(580, 363);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->btn_confirm);
			this->Controls->Add(this->ss_infoBar);
			this->Controls->Add(this->tb_dictText);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(596, 402);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(596, 402);
			this->Name = L"CreateDictTextForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Создание текста для словаря";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CreateDictTextForm::CreateDictTextForm_FormClosing);
			this->ss_infoBar->ResumeLayout(false);
			this->ss_infoBar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Windows::Forms::Form^ parentForm_LogIn;
	private: String ^ DictionaryFile;
	private: System::Void btn_cancel_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void CreateDictTextForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void btn_confirm_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tb_dictText_TextChanged(System::Object^  sender, System::EventArgs^  e);
};
}
