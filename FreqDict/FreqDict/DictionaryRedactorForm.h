#pragma once

namespace FreqDict {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для DictionaryRedactorForm
	/// </summary>
	public ref class DictionaryRedactorForm : public System::Windows::Forms::Form
	{
	public:
		DictionaryRedactorForm(System::Windows::Forms::Form^ _parentForm_LogIn, String^ _DictionaryFile, bool _isNewDictionary)
		{
			DictionaryFile = _DictionaryFile;
			isNewDictionary = _isNewDictionary;
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
		~DictionaryRedactorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  lb_Dictionary;
	protected:

	protected:

	private: System::Windows::Forms::Label^  lbl_DictionaryName;
	private: System::Windows::Forms::Label^  lbl_DictionarySize;
	private: System::Windows::Forms::Button^  btn_writeNewText;
	private: System::Windows::Forms::Button^  btn_loadTextFromFile;
	private: System::Windows::Forms::Button^  btn_findWord;
	private: System::Windows::Forms::Button^  btn_exit;

	private: System::Windows::Forms::Button^  btn_showText;
	private: System::Windows::Forms::Button^  btn_renameDictionary;
	private: System::Windows::Forms::Button^  btn_deleteDictionary;
	private: System::Windows::Forms::Button^  btn_exitToMenu;












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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DictionaryRedactorForm::typeid));
			this->lb_Dictionary = (gcnew System::Windows::Forms::ListBox());
			this->lbl_DictionaryName = (gcnew System::Windows::Forms::Label());
			this->lbl_DictionarySize = (gcnew System::Windows::Forms::Label());
			this->btn_writeNewText = (gcnew System::Windows::Forms::Button());
			this->btn_loadTextFromFile = (gcnew System::Windows::Forms::Button());
			this->btn_findWord = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_showText = (gcnew System::Windows::Forms::Button());
			this->btn_renameDictionary = (gcnew System::Windows::Forms::Button());
			this->btn_deleteDictionary = (gcnew System::Windows::Forms::Button());
			this->btn_exitToMenu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lb_Dictionary
			// 
			this->lb_Dictionary->FormattingEnabled = true;
			this->lb_Dictionary->Location = System::Drawing::Point(12, 38);
			this->lb_Dictionary->Name = L"lb_Dictionary";
			this->lb_Dictionary->Size = System::Drawing::Size(250, 394);
			this->lb_Dictionary->TabIndex = 0;
			// 
			// lbl_DictionaryName
			// 
			this->lbl_DictionaryName->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_DictionaryName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_DictionaryName->Location = System::Drawing::Point(12, 9);
			this->lbl_DictionaryName->Name = L"lbl_DictionaryName";
			this->lbl_DictionaryName->Size = System::Drawing::Size(250, 23);
			this->lbl_DictionaryName->TabIndex = 1;
			this->lbl_DictionaryName->Text = L"Имя словаря: ";
			// 
			// lbl_DictionarySize
			// 
			this->lbl_DictionarySize->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_DictionarySize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_DictionarySize->Location = System::Drawing::Point(12, 444);
			this->lbl_DictionarySize->Name = L"lbl_DictionarySize";
			this->lbl_DictionarySize->Size = System::Drawing::Size(250, 23);
			this->lbl_DictionarySize->TabIndex = 2;
			this->lbl_DictionarySize->Text = L"Количество слов: ";
			// 
			// btn_writeNewText
			// 
			this->btn_writeNewText->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_writeNewText.BackgroundImage")));
			this->btn_writeNewText->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_writeNewText->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_writeNewText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_writeNewText->Location = System::Drawing::Point(306, 38);
			this->btn_writeNewText->Name = L"btn_writeNewText";
			this->btn_writeNewText->Size = System::Drawing::Size(137, 57);
			this->btn_writeNewText->TabIndex = 3;
			this->btn_writeNewText->TabStop = false;
			this->btn_writeNewText->Text = L"Ввести новый текст";
			this->btn_writeNewText->UseVisualStyleBackColor = true;
			this->btn_writeNewText->Click += gcnew System::EventHandler(this, &DictionaryRedactorForm::btn_writeNewText_Click);
			// 
			// btn_loadTextFromFile
			// 
			this->btn_loadTextFromFile->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_loadTextFromFile.BackgroundImage")));
			this->btn_loadTextFromFile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_loadTextFromFile->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_loadTextFromFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btn_loadTextFromFile->Location = System::Drawing::Point(487, 38);
			this->btn_loadTextFromFile->Name = L"btn_loadTextFromFile";
			this->btn_loadTextFromFile->Size = System::Drawing::Size(137, 57);
			this->btn_loadTextFromFile->TabIndex = 4;
			this->btn_loadTextFromFile->TabStop = false;
			this->btn_loadTextFromFile->Text = L"Загрузить текст из файла";
			this->btn_loadTextFromFile->UseVisualStyleBackColor = true;
			this->btn_loadTextFromFile->Click += gcnew System::EventHandler(this, &DictionaryRedactorForm::btn_loadTextFromFile_Click);
			// 
			// btn_findWord
			// 
			this->btn_findWord->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_findWord.BackgroundImage")));
			this->btn_findWord->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_findWord->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_findWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_findWord->Location = System::Drawing::Point(306, 152);
			this->btn_findWord->Name = L"btn_findWord";
			this->btn_findWord->Size = System::Drawing::Size(137, 57);
			this->btn_findWord->TabIndex = 5;
			this->btn_findWord->TabStop = false;
			this->btn_findWord->Text = L"Найти слово";
			this->btn_findWord->UseVisualStyleBackColor = true;
			this->btn_findWord->Click += gcnew System::EventHandler(this, &DictionaryRedactorForm::btn_findWord_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_exit.BackgroundImage")));
			this->btn_exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->Location = System::Drawing::Point(487, 375);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(137, 57);
			this->btn_exit->TabIndex = 6;
			this->btn_exit->TabStop = false;
			this->btn_exit->Text = L"Выйти";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &DictionaryRedactorForm::btn_exit_Click);
			// 
			// btn_showText
			// 
			this->btn_showText->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_showText.BackgroundImage")));
			this->btn_showText->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_showText->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_showText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_showText->Location = System::Drawing::Point(487, 152);
			this->btn_showText->Name = L"btn_showText";
			this->btn_showText->Size = System::Drawing::Size(137, 57);
			this->btn_showText->TabIndex = 7;
			this->btn_showText->TabStop = false;
			this->btn_showText->Text = L"Показать текст";
			this->btn_showText->UseVisualStyleBackColor = true;
			this->btn_showText->Click += gcnew System::EventHandler(this, &DictionaryRedactorForm::btn_showText_Click);
			// 
			// btn_renameDictionary
			// 
			this->btn_renameDictionary->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_renameDictionary.BackgroundImage")));
			this->btn_renameDictionary->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_renameDictionary->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_renameDictionary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btn_renameDictionary->Location = System::Drawing::Point(306, 266);
			this->btn_renameDictionary->Name = L"btn_renameDictionary";
			this->btn_renameDictionary->Size = System::Drawing::Size(137, 57);
			this->btn_renameDictionary->TabIndex = 8;
			this->btn_renameDictionary->TabStop = false;
			this->btn_renameDictionary->Text = L"Переименовать словарь";
			this->btn_renameDictionary->UseVisualStyleBackColor = true;
			this->btn_renameDictionary->Click += gcnew System::EventHandler(this, &DictionaryRedactorForm::btn_renameDictionary_Click);
			// 
			// btn_deleteDictionary
			// 
			this->btn_deleteDictionary->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_deleteDictionary.BackgroundImage")));
			this->btn_deleteDictionary->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_deleteDictionary->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_deleteDictionary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btn_deleteDictionary->Location = System::Drawing::Point(487, 266);
			this->btn_deleteDictionary->Name = L"btn_deleteDictionary";
			this->btn_deleteDictionary->Size = System::Drawing::Size(137, 57);
			this->btn_deleteDictionary->TabIndex = 9;
			this->btn_deleteDictionary->TabStop = false;
			this->btn_deleteDictionary->Text = L"Удалить словарь";
			this->btn_deleteDictionary->UseVisualStyleBackColor = true;
			this->btn_deleteDictionary->Click += gcnew System::EventHandler(this, &DictionaryRedactorForm::btn_deleteDictionary_Click);
			// 
			// btn_exitToMenu
			// 
			this->btn_exitToMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_exitToMenu.BackgroundImage")));
			this->btn_exitToMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_exitToMenu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_exitToMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exitToMenu->Location = System::Drawing::Point(306, 375);
			this->btn_exitToMenu->Name = L"btn_exitToMenu";
			this->btn_exitToMenu->Size = System::Drawing::Size(137, 57);
			this->btn_exitToMenu->TabIndex = 10;
			this->btn_exitToMenu->TabStop = false;
			this->btn_exitToMenu->Text = L"Выйти в меню";
			this->btn_exitToMenu->UseVisualStyleBackColor = true;
			this->btn_exitToMenu->Click += gcnew System::EventHandler(this, &DictionaryRedactorForm::btn_exitToMenu_Click);
			// 
			// DictionaryRedactorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->ClientSize = System::Drawing::Size(666, 479);
			this->Controls->Add(this->btn_exitToMenu);
			this->Controls->Add(this->btn_deleteDictionary);
			this->Controls->Add(this->btn_renameDictionary);
			this->Controls->Add(this->btn_showText);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_findWord);
			this->Controls->Add(this->btn_loadTextFromFile);
			this->Controls->Add(this->btn_writeNewText);
			this->Controls->Add(this->lbl_DictionarySize);
			this->Controls->Add(this->lbl_DictionaryName);
			this->Controls->Add(this->lb_Dictionary);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(682, 518);
			this->MinimumSize = System::Drawing::Size(682, 518);
			this->Name = L"DictionaryRedactorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редактор словаря";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DictionaryRedactorForm::DictionaryRedactorForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &DictionaryRedactorForm::DictionaryRedactorForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	public: System::Windows::Forms::Form^ parentForm_LogIn;
	private: String ^ DictionaryFile;
	private: bool isNewDictionary;
	private: bool isParentClosed = false;

	private: void readDictionaryFromFile();
	private: void createNewDictionary();
	private: void deleteDictionary();
	private: void renameDictionary();
	public:  void changeDictionaryNameOnForm(String^ arg);
	private: void writeNewText();
	public:  void generateDictionary();
	private: int  isDictionaryContains(String^ arg);
	private: void sortDictionary();
	private: void saveDictionary();
	private: void showText();
	public:  void findWord(String^ arg);
	private: void loadTextFromFile();

	private: System::Void DictionaryRedactorForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void DictionaryRedactorForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void btn_exitToMenu_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_deleteDictionary_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_renameDictionary_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_exit_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_writeNewText_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_showText_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_findWord_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_loadTextFromFile_Click(System::Object^  sender, System::EventArgs^  e);
};
}
