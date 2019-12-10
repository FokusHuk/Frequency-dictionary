#pragma once

namespace FreqDict {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FindWordForm
	/// </summary>
	public ref class FindWordForm : public System::Windows::Forms::Form
	{
	public:
		FindWordForm(System::Windows::Forms::Form^ _parentForm_LogIn)
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
		~FindWordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_choosenWord;
	private: System::Windows::Forms::Button^  btn_findWord;
	private: System::Windows::Forms::Button^  btn_cancel;
	protected:



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FindWordForm::typeid));
			this->tb_choosenWord = (gcnew System::Windows::Forms::TextBox());
			this->btn_findWord = (gcnew System::Windows::Forms::Button());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb_choosenWord
			// 
			this->tb_choosenWord->Location = System::Drawing::Point(12, 12);
			this->tb_choosenWord->Name = L"tb_choosenWord";
			this->tb_choosenWord->Size = System::Drawing::Size(227, 20);
			this->tb_choosenWord->TabIndex = 0;
			// 
			// btn_findWord
			// 
			this->btn_findWord->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_findWord.BackgroundImage")));
			this->btn_findWord->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_findWord->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_findWord->Location = System::Drawing::Point(12, 42);
			this->btn_findWord->Name = L"btn_findWord";
			this->btn_findWord->Size = System::Drawing::Size(82, 34);
			this->btn_findWord->TabIndex = 1;
			this->btn_findWord->Text = L"Найти";
			this->btn_findWord->UseVisualStyleBackColor = true;
			this->btn_findWord->Click += gcnew System::EventHandler(this, &FindWordForm::btn_findWord_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cancel.BackgroundImage")));
			this->btn_cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cancel->Location = System::Drawing::Point(158, 42);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(81, 34);
			this->btn_cancel->TabIndex = 2;
			this->btn_cancel->TabStop = false;
			this->btn_cancel->Text = L"Отмена";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &FindWordForm::btn_cancel_Click);
			// 
			// FindWordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->ClientSize = System::Drawing::Size(251, 87);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->btn_findWord);
			this->Controls->Add(this->tb_choosenWord);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(267, 126);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(267, 126);
			this->Name = L"FindWordForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поиск слова";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FindWordForm::FindWordForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Windows::Forms::Form^ parentForm_LogIn;
	private: System::Void btn_cancel_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void FindWordForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void btn_findWord_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
