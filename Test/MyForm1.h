#pragma once
#include "Story.h"
namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ TitleBar;
	private: System::Windows::Forms::Button^ Minimize;
	private: System::Windows::Forms::Button^ Maximize;
	private: System::Windows::Forms::Button^ CLose;
	private: System::Windows::Forms::Label^ AppTitle;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ StatusList;
	private: System::Windows::Forms::Panel^ TItleBar_border;
	private: System::Windows::Forms::Button^ TextStory;



	private: System::Windows::Forms::Button^ ImageStory;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::FlowLayoutPanel^ StoriesPn;


	private: Card::MyUserControl^ myUserControl1;
	private: System::Windows::Forms::Panel^ StoriesContainer;
	public: System::Windows::Forms::Panel^ storyText;

	private: System::Windows::Forms::RichTextBox^ Description;
	private: System::Windows::Forms::Button^ Edit;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Panel^ PicStory;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ StoryPic;

	private: System::Windows::Forms::Label^ label7;






	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->StoriesContainer = (gcnew System::Windows::Forms::Panel());
			this->PicStory = (gcnew System::Windows::Forms::Panel());
			this->StoryPic = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->storyText = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Edit = (gcnew System::Windows::Forms::Button());
			this->Description = (gcnew System::Windows::Forms::RichTextBox());
			this->StatusList = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->StoriesPn = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->myUserControl1 = (gcnew Card::MyUserControl());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->ImageStory = (gcnew System::Windows::Forms::Button());
			this->TextStory = (gcnew System::Windows::Forms::Button());
			this->TitleBar = (gcnew System::Windows::Forms::Panel());
			this->TItleBar_border = (gcnew System::Windows::Forms::Panel());
			this->Minimize = (gcnew System::Windows::Forms::Button());
			this->Maximize = (gcnew System::Windows::Forms::Button());
			this->CLose = (gcnew System::Windows::Forms::Button());
			this->AppTitle = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->StoriesContainer->SuspendLayout();
			this->PicStory->SuspendLayout();
			this->storyText->SuspendLayout();
			this->StatusList->SuspendLayout();
			this->TitleBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->TitleBar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1191, 670);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panel2->Controls->Add(this->StoriesContainer);
			this->panel2->Controls->Add(this->StatusList);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 41);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1191, 629);
			this->panel2->TabIndex = 2;
			// 
			// StoriesContainer
			// 
			this->StoriesContainer->Controls->Add(this->PicStory);
			this->StoriesContainer->Controls->Add(this->storyText);
			this->StoriesContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StoriesContainer->Location = System::Drawing::Point(295, 0);
			this->StoriesContainer->Name = L"StoriesContainer";
			this->StoriesContainer->Size = System::Drawing::Size(896, 629);
			this->StoriesContainer->TabIndex = 13;
			// 
			// PicStory
			// 
			this->PicStory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->PicStory->Controls->Add(this->StoryPic);
			this->PicStory->Controls->Add(this->button2);
			this->PicStory->Controls->Add(this->button6);
			this->PicStory->Location = System::Drawing::Point(66, 111);
			this->PicStory->Name = L"PicStory";
			this->PicStory->Size = System::Drawing::Size(0, 0);
			this->PicStory->TabIndex = 1;
			// 
			// StoryPic
			// 
			this->StoryPic->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->StoryPic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->StoryPic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"StoryPic.BackgroundImage")));
			this->StoryPic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->StoryPic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StoryPic->FlatAppearance->BorderSize = 0;
			this->StoryPic->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StoryPic->Location = System::Drawing::Point(-91, -161);
			this->StoryPic->Name = L"StoryPic";
			this->StoryPic->Size = System::Drawing::Size(183, 112);
			this->StoryPic->TabIndex = 19;
			this->StoryPic->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(317, 270);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 48);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::Edit_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(208, 188);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(341, 48);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Choose Picture";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// storyText
			// 
			this->storyText->Controls->Add(this->label3);
			this->storyText->Controls->Add(this->Edit);
			this->storyText->Controls->Add(this->Description);
			this->storyText->Location = System::Drawing::Point(66, 84);
			this->storyText->Name = L"storyText";
			this->storyText->Size = System::Drawing::Size(0, 0);
			this->storyText->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(257, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(243, 41);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Write Your Story";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Edit
			// 
			this->Edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Edit->FlatAppearance->BorderSize = 0;
			this->Edit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Edit->ForeColor = System::Drawing::Color::White;
			this->Edit->Location = System::Drawing::Point(317, 380);
			this->Edit->Name = L"Edit";
			this->Edit->Size = System::Drawing::Size(123, 48);
			this->Edit->TabIndex = 7;
			this->Edit->Text = L"Add";
			this->Edit->UseVisualStyleBackColor = false;
			this->Edit->Click += gcnew System::EventHandler(this, &MyForm1::Edit_Click);
			// 
			// Description
			// 
			this->Description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Description->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Description->ForeColor = System::Drawing::Color::White;
			this->Description->Location = System::Drawing::Point(22, 106);
			this->Description->MaxLength = 200;
			this->Description->Name = L"Description";
			this->Description->Size = System::Drawing::Size(705, 240);
			this->Description->TabIndex = 2;
			this->Description->Text = L"";
			// 
			// StatusList
			// 
			this->StatusList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->StatusList->Controls->Add(this->label7);
			this->StatusList->Controls->Add(this->StoriesPn);
			this->StatusList->Controls->Add(this->myUserControl1);
			this->StatusList->Controls->Add(this->button3);
			this->StatusList->Controls->Add(this->ImageStory);
			this->StatusList->Controls->Add(this->TextStory);
			this->StatusList->Dock = System::Windows::Forms::DockStyle::Left;
			this->StatusList->Location = System::Drawing::Point(0, 0);
			this->StatusList->Name = L"StatusList";
			this->StatusList->Size = System::Drawing::Size(295, 629);
			this->StatusList->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(94, 88);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 41);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Stories";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// StoriesPn
			// 
			this->StoriesPn->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->StoriesPn->Location = System::Drawing::Point(3, 145);
			this->StoriesPn->Name = L"StoriesPn";
			this->StoriesPn->Size = System::Drawing::Size(289, 481);
			this->StoriesPn->TabIndex = 23;
			// 
			// myUserControl1
			// 
			this->myUserControl1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->myUserControl1->Location = System::Drawing::Point(2, 7);
			this->myUserControl1->Name = L"myUserControl1";
			this->myUserControl1->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->myUserControl1->Size = System::Drawing::Size(290, 66);
			this->myUserControl1->TabIndex = 21;
			this->myUserControl1->Username = L"My Stories";
			this->myUserControl1->Load += gcnew System::EventHandler(this, &MyForm1::myUserControl1_Load);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(3, 121);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(289, 44);
			this->button3->TabIndex = 20;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// ImageStory
			// 
			this->ImageStory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ImageStory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->ImageStory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ImageStory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ImageStory->FlatAppearance->BorderSize = 0;
			this->ImageStory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ImageStory->Location = System::Drawing::Point(157, 71);
			this->ImageStory->Name = L"ImageStory";
			this->ImageStory->Size = System::Drawing::Size(44, 41);
			this->ImageStory->TabIndex = 18;
			this->ImageStory->UseVisualStyleBackColor = false;
			// 
			// TextStory
			// 
			this->TextStory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->TextStory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->TextStory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TextStory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TextStory->FlatAppearance->BorderSize = 0;
			this->TextStory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TextStory->Location = System::Drawing::Point(9, 72);
			this->TextStory->Name = L"TextStory";
			this->TextStory->Size = System::Drawing::Size(44, 41);
			this->TextStory->TabIndex = 14;
			this->TextStory->UseVisualStyleBackColor = false;
			// 
			// TitleBar
			// 
			this->TitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->TitleBar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->TitleBar->Controls->Add(this->TItleBar_border);
			this->TitleBar->Controls->Add(this->Minimize);
			this->TitleBar->Controls->Add(this->Maximize);
			this->TitleBar->Controls->Add(this->CLose);
			this->TitleBar->Controls->Add(this->AppTitle);
			this->TitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->TitleBar->Location = System::Drawing::Point(0, 0);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(1191, 41);
			this->TitleBar->TabIndex = 1;
			// 
			// TItleBar_border
			// 
			this->TItleBar_border->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->TItleBar_border->Location = System::Drawing::Point(-902, 38);
			this->TItleBar_border->Name = L"TItleBar_border";
			this->TItleBar_border->Size = System::Drawing::Size(3000, 10);
			this->TItleBar_border->TabIndex = 13;
			// 
			// Minimize
			// 
			this->Minimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Minimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Minimize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Minimize.BackgroundImage")));
			this->Minimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Minimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Minimize->FlatAppearance->BorderSize = 0;
			this->Minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Minimize->Location = System::Drawing::Point(973, 9);
			this->Minimize->Name = L"Minimize";
			this->Minimize->Size = System::Drawing::Size(62, 26);
			this->Minimize->TabIndex = 10;
			this->Minimize->UseVisualStyleBackColor = false;
			this->Minimize->Click += gcnew System::EventHandler(this, &MyForm1::Minimize_Click);
			// 
			// Maximize
			// 
			this->Maximize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Maximize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Maximize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Maximize.BackgroundImage")));
			this->Maximize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Maximize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Maximize->FlatAppearance->BorderSize = 0;
			this->Maximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Maximize->Location = System::Drawing::Point(1049, 9);
			this->Maximize->Name = L"Maximize";
			this->Maximize->Size = System::Drawing::Size(62, 26);
			this->Maximize->TabIndex = 9;
			this->Maximize->UseVisualStyleBackColor = false;
			this->Maximize->Click += gcnew System::EventHandler(this, &MyForm1::Maximize_Click);
			// 
			// CLose
			// 
			this->CLose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->CLose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->CLose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CLose.BackgroundImage")));
			this->CLose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->CLose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CLose->FlatAppearance->BorderSize = 0;
			this->CLose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CLose->Location = System::Drawing::Point(1117, 9);
			this->CLose->Name = L"CLose";
			this->CLose->Size = System::Drawing::Size(62, 26);
			this->CLose->TabIndex = 8;
			this->CLose->UseVisualStyleBackColor = false;
			this->CLose->Click += gcnew System::EventHandler(this, &MyForm1::CLose_Click);
			// 
			// AppTitle
			// 
			this->AppTitle->AutoSize = true;
			this->AppTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AppTitle->ForeColor = System::Drawing::Color::White;
			this->AppTitle->Location = System::Drawing::Point(12, 9);
			this->AppTitle->Name = L"AppTitle";
			this->AppTitle->Size = System::Drawing::Size(126, 26);
			this->AppTitle->TabIndex = 4;
			this->AppTitle->Text = L"Nesr Scene";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(1191, 670);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->StoriesContainer->ResumeLayout(false);
			this->PicStory->ResumeLayout(false);
			this->storyText->ResumeLayout(false);
			this->storyText->PerformLayout();
			this->StatusList->ResumeLayout(false);
			this->StatusList->PerformLayout();
			this->TitleBar->ResumeLayout(false);
			this->TitleBar->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void Minimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;

	}
	private: System::Void Maximize_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->WindowState == FormWindowState::Maximized) {
			this->WindowState = FormWindowState::Normal;
			this->StartPosition = FormStartPosition::CenterScreen;
		}
		else
			this->WindowState = FormWindowState::Maximized;
	}
	private: System::Void CLose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Edit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void myUserControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
