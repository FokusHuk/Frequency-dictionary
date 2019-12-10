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
	/// Сводка для FDict
	/// </summary>
	public ref class FDict : public System::Windows::Forms::Form
	{
	public:
		FDict(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FDict()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_createDictionary;
	protected:
	private: System::Windows::Forms::Button^  btn_openDictionary;
	private: System::Windows::Forms::Button^  btn_exit;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FDict::typeid));
			this->btn_createDictionary = (gcnew System::Windows::Forms::Button());
			this->btn_openDictionary = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_createDictionary
			// 
			this->btn_createDictionary->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_createDictionary.BackgroundImage")));
			this->btn_createDictionary->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_createDictionary->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_createDictionary->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_createDictionary->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_createDictionary->Location = System::Drawing::Point(12, 12);
			this->btn_createDictionary->Name = L"btn_createDictionary";
			this->btn_createDictionary->Size = System::Drawing::Size(144, 113);
			this->btn_createDictionary->TabIndex = 0;
			this->btn_createDictionary->TabStop = false;
			this->btn_createDictionary->Text = L"Создать новый словарь";
			this->btn_createDictionary->UseVisualStyleBackColor = true;
			this->btn_createDictionary->Click += gcnew System::EventHandler(this, &FDict::btn_createDictionary_Click);
			// 
			// btn_openDictionary
			// 
			this->btn_openDictionary->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_openDictionary.BackgroundImage")));
			this->btn_openDictionary->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_openDictionary->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_openDictionary->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16));
			this->btn_openDictionary->Location = System::Drawing::Point(173, 134);
			this->btn_openDictionary->Name = L"btn_openDictionary";
			this->btn_openDictionary->Size = System::Drawing::Size(144, 113);
			this->btn_openDictionary->TabIndex = 1;
			this->btn_openDictionary->TabStop = false;
			this->btn_openDictionary->Text = L"Открыть словарь";
			this->btn_openDictionary->UseVisualStyleBackColor = true;
			this->btn_openDictionary->Click += gcnew System::EventHandler(this, &FDict::btn_openDictionary_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_exit.BackgroundImage")));
			this->btn_exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16));
			this->btn_exit->Location = System::Drawing::Point(335, 261);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(144, 113);
			this->btn_exit->TabIndex = 2;
			this->btn_exit->TabStop = false;
			this->btn_exit->Text = L"Выйти";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &FDict::btn_exit_Click);
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 22, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(280, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 90);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Частотный словарь";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FDict
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->ClientSize = System::Drawing::Size(494, 385);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_openDictionary);
			this->Controls->Add(this->btn_createDictionary);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(510, 424);
			this->MinimumSize = System::Drawing::Size(510, 424);
			this->Name = L"FDict";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Частотный словарь";
			this->Load += gcnew System::EventHandler(this, &FDict::FDict_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void FDict_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_createDictionary_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_openDictionary_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_exit_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
