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
	/// Сводка для ShowTextOfDictionaryForm
	/// </summary>
	public ref class ShowTextOfDictionaryForm : public System::Windows::Forms::Form
	{
	public:
		ShowTextOfDictionaryForm(System::Windows::Forms::Form^ _parentForm_LogIn, String^ _DictionaryFile)
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
		~ShowTextOfDictionaryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_dictText;
	protected:

	private: System::Windows::Forms::Button^  btn_close;
	private: System::Windows::Forms::Label^  lbl_wordCount;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ShowTextOfDictionaryForm::typeid));
			this->lbl_dictText = (gcnew System::Windows::Forms::Label());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->lbl_wordCount = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_dictText
			// 
			this->lbl_dictText->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbl_dictText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_dictText->Location = System::Drawing::Point(12, 9);
			this->lbl_dictText->Name = L"lbl_dictText";
			this->lbl_dictText->Size = System::Drawing::Size(556, 302);
			this->lbl_dictText->TabIndex = 0;
			// 
			// btn_close
			// 
			this->btn_close->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_close.BackgroundImage")));
			this->btn_close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_close->Location = System::Drawing::Point(480, 322);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(88, 33);
			this->btn_close->TabIndex = 1;
			this->btn_close->TabStop = false;
			this->btn_close->Text = L"Закрыть";
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &ShowTextOfDictionaryForm::btn_close_Click);
			// 
			// lbl_wordCount
			// 
			this->lbl_wordCount->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_wordCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_wordCount->Location = System::Drawing::Point(12, 322);
			this->lbl_wordCount->Name = L"lbl_wordCount";
			this->lbl_wordCount->Size = System::Drawing::Size(159, 32);
			this->lbl_wordCount->TabIndex = 2;
			this->lbl_wordCount->Text = L"Количество слов: ";
			this->lbl_wordCount->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ShowTextOfDictionaryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->ClientSize = System::Drawing::Size(580, 363);
			this->Controls->Add(this->lbl_wordCount);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->lbl_dictText);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(596, 402);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(596, 402);
			this->Name = L"ShowTextOfDictionaryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Исходный текст";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ShowTextOfDictionaryForm::ShowTextOfDictionaryForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ShowTextOfDictionaryForm::ShowTextOfDictionaryForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: System::Windows::Forms::Form^ parentForm_LogIn;
	private: String ^ DictionaryFile;
	private: System::Void btn_close_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void ShowTextOfDictionaryForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void ShowTextOfDictionaryForm_Load(System::Object^  sender, System::EventArgs^  e);
};
}
