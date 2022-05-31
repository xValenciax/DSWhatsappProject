#pragma once
#include <iostream>
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "User.h"
#include "msg.h"
#include "msgStatus.h"
#include "Profile.h"
#include "ChatInfo.h"
#include "ChatRoom.h"
#include "UserChatRoom.h"
#include "Story.h"
#include "Group.h"
#include <cliext/queue>
#include <cliext/stack>

namespace Test {

	using namespace System;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;
	using namespace System::IO;
	using namespace cliext;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	[System::Runtime::InteropServices::DllImport("winmm.dll")]
	static long mciSendString(String^ MciCommand, String^ MciReturn, int MciReturnLength, IntPtr^ CallBack);
	private: System::Windows::Forms::Panel^ RecPn;

	private: System::Windows::Forms::Label^ RecLbl;
	private: System::Windows::Forms::Button^ AddGroupMembers;
	private: System::Windows::Forms::FlowLayoutPanel^ GroupMembers;






		   String^ record = "";
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			// 
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ TitleBar;
	protected:





	private: System::Windows::Forms::Button^ ButtonTest;
	private: System::Windows::Forms::Label^ AppTitle;







	private: System::Windows::Forms::Button^ CLose;
	private: System::Windows::Forms::Button^ Minimize;

	private: System::Windows::Forms::Button^ Maximize;




















	private: System::Windows::Forms::Panel^ TItleBar_border;
	private: System::Windows::Forms::Panel^ MainContainer;

	public: System::Windows::Forms::Panel^ LoggedIn;

	private: System::Windows::Forms::Panel^ ChatContainer;
	private: System::Windows::Forms::Panel^ Messages;
	private: System::Windows::Forms::Panel^ TextBottom;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ ChatTopBar;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ UserName;

	private: System::Windows::Forms::Panel^ ChatBar;
	private: System::Windows::Forms::Panel^ MoreList;
	private: System::Windows::Forms::Button^ CreateGroup_btn;
	private: System::Windows::Forms::Button^ Profile_btn;
	private: System::Windows::Forms::Label^ CreateGroup_lb;
	private: System::Windows::Forms::Label^ Profile_lb;


























	private: System::Windows::Forms::Panel^ userSettings;
	private: System::Windows::Forms::Panel^ VerticalBorder;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ More;
	private: System::Windows::Forms::Button^ NewChat;
	private: System::Windows::Forms::Button^ Status;
	private: System::Windows::Forms::Panel^ UnLogged;
	private: System::Windows::Forms::Panel^ UlChatContainer;



	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Panel^ UlChatBar;

	private: System::Windows::Forms::Panel^ UlMoreList;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ UlUserSettings;

























	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Button^ UlCredentials;
	private: System::Windows::Forms::Button^ UlContacts;


	private: System::Windows::Forms::Button^ UlStory;


















	private: System::Windows::Forms::Panel^ LoginBox;






	private: System::Windows::Forms::Panel^ RegBox;
	private: System::Windows::Forms::Panel^ FormReg;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::RichTextBox^ richTextBox7;
private: System::Windows::Forms::Button^ LogOutBtn;

private: System::Windows::Forms::Label^ LogOutLb;


private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ login_btn;


private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ Test;
private: System::Windows::Forms::Panel^ UserProfile;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::RichTextBox^ Description;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::Button^ Edit;



private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::TextBox^ richTextBox2;
private: System::Windows::Forms::Button^ button6;

private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Button^ ProfilePic;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
private: System::Windows::Forms::Label^ seenlast;
private: System::Windows::Forms::Panel^ contactDesc;
private: System::Windows::Forms::Label^ DescPhone;
private: System::Windows::Forms::Label^ DescName;
private: System::Windows::Forms::PictureBox^ DescPic;
private: System::Windows::Forms::RichTextBox^ DescText;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ ImageStory;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ TextStory;
private: System::Windows::Forms::Panel^ StoryPanel;

private: System::Windows::Forms::Panel^ StoriesContainer;
public: System::Windows::Forms::Panel^ PicStory;
private:
private: System::Windows::Forms::Button^ StoryPic;
public:
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
public: System::Windows::Forms::Panel^ storyText;
private:
private: System::Windows::Forms::Label^ label8;
public:
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::RichTextBox^ richTextBox8;
private: System::Windows::Forms::Panel^ StatusList;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::FlowLayoutPanel^ StoriesPn;
private: Card::MyUserControl^ userStories;

private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Panel^ panel4;



private: System::Windows::Forms::PictureBox^ pictureBox2;

private: System::Windows::Forms::RichTextBox^ richTextBox9;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ StoryTime;
private: System::Windows::Forms::TextBox^ textBox1;


private: System::Windows::Forms::FlowLayoutPanel^ emojeList;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::FlowLayoutPanel^ storySeen;
private: System::Windows::Forms::ToolTip^ LoginPhone;
private: System::Windows::Forms::Button^ voice_rec;


private: System::ComponentModel::IContainer^ components;

























































































































































































































































	protected:












	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->TitleBar = (gcnew System::Windows::Forms::Panel());
			this->TItleBar_border = (gcnew System::Windows::Forms::Panel());
			this->Minimize = (gcnew System::Windows::Forms::Button());
			this->Maximize = (gcnew System::Windows::Forms::Button());
			this->CLose = (gcnew System::Windows::Forms::Button());
			this->AppTitle = (gcnew System::Windows::Forms::Label());
			this->MainContainer = (gcnew System::Windows::Forms::Panel());
			this->GroupMembers = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->LoggedIn = (gcnew System::Windows::Forms::Panel());
			this->ChatContainer = (gcnew System::Windows::Forms::Panel());
			this->Messages = (gcnew System::Windows::Forms::Panel());
			this->RecPn = (gcnew System::Windows::Forms::Panel());
			this->RecLbl = (gcnew System::Windows::Forms::Label());
			this->emojeList = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->TextBottom = (gcnew System::Windows::Forms::Panel());
			this->voice_rec = (gcnew System::Windows::Forms::Button());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ChatTopBar = (gcnew System::Windows::Forms::Panel());
			this->AddGroupMembers = (gcnew System::Windows::Forms::Button());
			this->seenlast = (gcnew System::Windows::Forms::Label());
			this->ProfilePic = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->UserName = (gcnew System::Windows::Forms::Label());
			this->ChatBar = (gcnew System::Windows::Forms::Panel());
			this->MoreList = (gcnew System::Windows::Forms::Panel());
			this->LogOutBtn = (gcnew System::Windows::Forms::Button());
			this->LogOutLb = (gcnew System::Windows::Forms::Label());
			this->CreateGroup_btn = (gcnew System::Windows::Forms::Button());
			this->Profile_btn = (gcnew System::Windows::Forms::Button());
			this->CreateGroup_lb = (gcnew System::Windows::Forms::Label());
			this->Profile_lb = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->userSettings = (gcnew System::Windows::Forms::Panel());
			this->VerticalBorder = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->More = (gcnew System::Windows::Forms::Button());
			this->NewChat = (gcnew System::Windows::Forms::Button());
			this->Status = (gcnew System::Windows::Forms::Button());
			this->UserProfile = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ImageStory = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TextStory = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Edit = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Description = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StoryPanel = (gcnew System::Windows::Forms::Panel());
			this->StoriesContainer = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->StoryTime = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox9 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->PicStory = (gcnew System::Windows::Forms::Panel());
			this->StoryPic = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->storyText = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->storySeen = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->StatusList = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->StoriesPn = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->userStories = (gcnew Card::MyUserControl());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->UnLogged = (gcnew System::Windows::Forms::Panel());
			this->UlChatContainer = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->LoginBox = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Test = (gcnew System::Windows::Forms::Label());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->RegBox = (gcnew System::Windows::Forms::Panel());
			this->FormReg = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->UlChatBar = (gcnew System::Windows::Forms::Panel());
			this->UlMoreList = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->UlUserSettings = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->UlCredentials = (gcnew System::Windows::Forms::Button());
			this->UlContacts = (gcnew System::Windows::Forms::Button());
			this->UlStory = (gcnew System::Windows::Forms::Button());
			this->contactDesc = (gcnew System::Windows::Forms::Panel());
			this->DescPhone = (gcnew System::Windows::Forms::Label());
			this->DescName = (gcnew System::Windows::Forms::Label());
			this->DescPic = (gcnew System::Windows::Forms::PictureBox());
			this->DescText = (gcnew System::Windows::Forms::RichTextBox());
			this->LoginPhone = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->TitleBar->SuspendLayout();
			this->MainContainer->SuspendLayout();
			this->LoggedIn->SuspendLayout();
			this->ChatContainer->SuspendLayout();
			this->Messages->SuspendLayout();
			this->RecPn->SuspendLayout();
			this->TextBottom->SuspendLayout();
			this->ChatTopBar->SuspendLayout();
			this->ChatBar->SuspendLayout();
			this->MoreList->SuspendLayout();
			this->userSettings->SuspendLayout();
			this->UserProfile->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->StoryPanel->SuspendLayout();
			this->StoriesContainer->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->PicStory->SuspendLayout();
			this->storyText->SuspendLayout();
			this->StatusList->SuspendLayout();
			this->UnLogged->SuspendLayout();
			this->UlChatContainer->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->LoginBox->SuspendLayout();
			this->panel3->SuspendLayout();
			this->RegBox->SuspendLayout();
			this->FormReg->SuspendLayout();
			this->UlChatBar->SuspendLayout();
			this->UlMoreList->SuspendLayout();
			this->UlUserSettings->SuspendLayout();
			this->contactDesc->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DescPic))->BeginInit();
			this->SuspendLayout();
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
			this->TitleBar->Size = System::Drawing::Size(1230, 41);
			this->TitleBar->TabIndex = 0;
			// 
			// TItleBar_border
			// 
			this->TItleBar_border->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->TItleBar_border->Location = System::Drawing::Point(3, 40);
			this->TItleBar_border->Name = L"TItleBar_border";
			this->TItleBar_border->Size = System::Drawing::Size(3000, 10);
			this->TItleBar_border->TabIndex = 12;
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
			this->Minimize->Location = System::Drawing::Point(1012, 9);
			this->Minimize->Name = L"Minimize";
			this->Minimize->Size = System::Drawing::Size(62, 26);
			this->Minimize->TabIndex = 10;
			this->Minimize->UseVisualStyleBackColor = false;
			this->Minimize->Click += gcnew System::EventHandler(this, &MyForm::Minimize_Click);
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
			this->Maximize->Location = System::Drawing::Point(1088, 9);
			this->Maximize->Name = L"Maximize";
			this->Maximize->Size = System::Drawing::Size(62, 26);
			this->Maximize->TabIndex = 9;
			this->Maximize->UseVisualStyleBackColor = false;
			this->Maximize->Click += gcnew System::EventHandler(this, &MyForm::Maximize_Click);
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
			this->CLose->Location = System::Drawing::Point(1156, 9);
			this->CLose->Name = L"CLose";
			this->CLose->Size = System::Drawing::Size(62, 26);
			this->CLose->TabIndex = 8;
			this->CLose->UseVisualStyleBackColor = false;
			this->CLose->Click += gcnew System::EventHandler(this, &MyForm::CLose_Click);
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
			// MainContainer
			// 
			this->MainContainer->Controls->Add(this->GroupMembers);
			this->MainContainer->Controls->Add(this->LoggedIn);
			this->MainContainer->Controls->Add(this->UserProfile);
			this->MainContainer->Controls->Add(this->StoryPanel);
			this->MainContainer->Controls->Add(this->UnLogged);
			this->MainContainer->Controls->Add(this->contactDesc);
			this->MainContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainContainer->Location = System::Drawing::Point(0, 41);
			this->MainContainer->Name = L"MainContainer";
			this->MainContainer->Size = System::Drawing::Size(1230, 697);
			this->MainContainer->TabIndex = 0;
			// 
			// GroupMembers
			// 
			this->GroupMembers->AutoScroll = true;
			this->GroupMembers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->GroupMembers->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->GroupMembers->Location = System::Drawing::Point(859, 68);
			this->GroupMembers->Name = L"GroupMembers";
			this->GroupMembers->Size = System::Drawing::Size(0, 0);
			this->GroupMembers->TabIndex = 9;
			// 
			// LoggedIn
			// 
			this->LoggedIn->Controls->Add(this->ChatContainer);
			this->LoggedIn->Controls->Add(this->ChatBar);
			this->LoggedIn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LoggedIn->Location = System::Drawing::Point(0, 0);
			this->LoggedIn->Name = L"LoggedIn";
			this->LoggedIn->Size = System::Drawing::Size(1230, 697);
			this->LoggedIn->TabIndex = 2;
			// 
			// ChatContainer
			// 
			this->ChatContainer->Controls->Add(this->Messages);
			this->ChatContainer->Controls->Add(this->TextBottom);
			this->ChatContainer->Controls->Add(this->ChatTopBar);
			this->ChatContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ChatContainer->Location = System::Drawing::Point(239, 0);
			this->ChatContainer->Name = L"ChatContainer";
			this->ChatContainer->Size = System::Drawing::Size(991, 697);
			this->ChatContainer->TabIndex = 1;
			// 
			// Messages
			// 
			this->Messages->Controls->Add(this->RecPn);
			this->Messages->Controls->Add(this->emojeList);
			this->Messages->Controls->Add(this->flowLayoutPanel2);
			this->Messages->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Messages->Location = System::Drawing::Point(0, 66);
			this->Messages->Name = L"Messages";
			this->Messages->Size = System::Drawing::Size(991, 543);
			this->Messages->TabIndex = 2;
			// 
			// RecPn
			// 
			this->RecPn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->RecPn->Controls->Add(this->RecLbl);
			this->RecPn->Location = System::Drawing::Point(817, 516);
			this->RecPn->Name = L"RecPn";
			this->RecPn->Size = System::Drawing::Size(0, 0);
			this->RecPn->TabIndex = 19;
			// 
			// RecLbl
			// 
			this->RecLbl->AutoSize = true;
			this->RecLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RecLbl->ForeColor = System::Drawing::Color::White;
			this->RecLbl->Location = System::Drawing::Point(11, 4);
			this->RecLbl->Name = L"RecLbl";
			this->RecLbl->Size = System::Drawing::Size(97, 20);
			this->RecLbl->TabIndex = 0;
			this->RecLbl->Text = L"Recording...";
			// 
			// emojeList
			// 
			this->emojeList->AutoScroll = true;
			this->emojeList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->emojeList->Location = System::Drawing::Point(26, 296);
			this->emojeList->Name = L"emojeList";
			this->emojeList->Size = System::Drawing::Size(0, 0);
			this->emojeList->TabIndex = 18;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel2->Location = System::Drawing::Point(7, 5);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->flowLayoutPanel2->Size = System::Drawing::Size(977, 533);
			this->flowLayoutPanel2->TabIndex = 0;
			this->flowLayoutPanel2->WrapContents = false;
			// 
			// TextBottom
			// 
			this->TextBottom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->TextBottom->Controls->Add(this->voice_rec);
			this->TextBottom->Controls->Add(this->richTextBox7);
			this->TextBottom->Controls->Add(this->panel2);
			this->TextBottom->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->TextBottom->Location = System::Drawing::Point(0, 609);
			this->TextBottom->Name = L"TextBottom";
			this->TextBottom->Size = System::Drawing::Size(991, 88);
			this->TextBottom->TabIndex = 1;
			// 
			// voice_rec
			// 
			this->voice_rec->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->voice_rec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->voice_rec->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"voice_rec.BackgroundImage")));
			this->voice_rec->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->voice_rec->Cursor = System::Windows::Forms::Cursors::Hand;
			this->voice_rec->FlatAppearance->BorderSize = 0;
			this->voice_rec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->voice_rec->Location = System::Drawing::Point(875, 17);
			this->voice_rec->Name = L"voice_rec";
			this->voice_rec->Size = System::Drawing::Size(67, 54);
			this->voice_rec->TabIndex = 18;
			this->voice_rec->UseVisualStyleBackColor = false;
			this->voice_rec->Click += gcnew System::EventHandler(this, &MyForm::record_voice);
			// 
			// richTextBox7
			// 
			this->richTextBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->richTextBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox7->DetectUrls = false;
			this->richTextBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox7->ForeColor = System::Drawing::Color::White;
			this->richTextBox7->Location = System::Drawing::Point(54, 17);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox7->Size = System::Drawing::Size(782, 51);
			this->richTextBox7->TabIndex = 0;
			this->richTextBox7->Text = L"Enter Your message";
			this->richTextBox7->ZoomFactor = 1.5F;
			this->richTextBox7->Enter += gcnew System::EventHandler(this, &MyForm::richTextBox7_Enter);
			this->richTextBox7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::richTextBox7_KeyDown);
			this->richTextBox7->Leave += gcnew System::EventHandler(this, &MyForm::richTextBox7_Leave);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panel2->Location = System::Drawing::Point(-2, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(5, 500);
			this->panel2->TabIndex = 13;
			// 
			// ChatTopBar
			// 
			this->ChatTopBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->ChatTopBar->Controls->Add(this->AddGroupMembers);
			this->ChatTopBar->Controls->Add(this->seenlast);
			this->ChatTopBar->Controls->Add(this->ProfilePic);
			this->ChatTopBar->Controls->Add(this->button1);
			this->ChatTopBar->Controls->Add(this->UserName);
			this->ChatTopBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->ChatTopBar->Location = System::Drawing::Point(0, 0);
			this->ChatTopBar->Name = L"ChatTopBar";
			this->ChatTopBar->Size = System::Drawing::Size(991, 66);
			this->ChatTopBar->TabIndex = 0;
			// 
			// AddGroupMembers
			// 
			this->AddGroupMembers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AddGroupMembers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->AddGroupMembers->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddGroupMembers.BackgroundImage")));
			this->AddGroupMembers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->AddGroupMembers->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddGroupMembers->FlatAppearance->BorderSize = 0;
			this->AddGroupMembers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddGroupMembers->Location = System::Drawing::Point(832, 11);
			this->AddGroupMembers->Name = L"AddGroupMembers";
			this->AddGroupMembers->Size = System::Drawing::Size(71, 45);
			this->AddGroupMembers->TabIndex = 20;
			this->AddGroupMembers->UseVisualStyleBackColor = false;
			this->AddGroupMembers->Visible = false;
			this->AddGroupMembers->Click += gcnew System::EventHandler(this, &MyForm::AddGroupMembers_Click);
			// 
			// seenlast
			// 
			this->seenlast->AutoSize = true;
			this->seenlast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seenlast->ForeColor = System::Drawing::Color::White;
			this->seenlast->Location = System::Drawing::Point(666, 28);
			this->seenlast->Name = L"seenlast";
			this->seenlast->Size = System::Drawing::Size(0, 20);
			this->seenlast->TabIndex = 19;
			// 
			// ProfilePic
			// 
			this->ProfilePic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ProfilePic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->ProfilePic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ProfilePic.BackgroundImage")));
			this->ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ProfilePic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfilePic->FlatAppearance->BorderSize = 0;
			this->ProfilePic->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ProfilePic->Location = System::Drawing::Point(8, 4);
			this->ProfilePic->Name = L"ProfilePic";
			this->ProfilePic->Size = System::Drawing::Size(100, 60);
			this->ProfilePic->TabIndex = 15;
			this->ProfilePic->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(917, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 45);
			this->button1->TabIndex = 18;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// UserName
			// 
			this->UserName->AutoSize = true;
			this->UserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserName->ForeColor = System::Drawing::Color::White;
			this->UserName->Location = System::Drawing::Point(138, 13);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(125, 39);
			this->UserName->TabIndex = 17;
			this->UserName->Text = L"Ahmed";
			// 
			// ChatBar
			// 
			this->ChatBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->ChatBar->Controls->Add(this->MoreList);
			this->ChatBar->Controls->Add(this->flowLayoutPanel1);
			this->ChatBar->Controls->Add(this->userSettings);
			this->ChatBar->Dock = System::Windows::Forms::DockStyle::Left;
			this->ChatBar->Location = System::Drawing::Point(0, 0);
			this->ChatBar->Name = L"ChatBar";
			this->ChatBar->Size = System::Drawing::Size(239, 697);
			this->ChatBar->TabIndex = 0;
			// 
			// MoreList
			// 
			this->MoreList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->MoreList->Controls->Add(this->LogOutBtn);
			this->MoreList->Controls->Add(this->LogOutLb);
			this->MoreList->Controls->Add(this->CreateGroup_btn);
			this->MoreList->Controls->Add(this->Profile_btn);
			this->MoreList->Controls->Add(this->CreateGroup_lb);
			this->MoreList->Controls->Add(this->Profile_lb);
			this->MoreList->Location = System::Drawing::Point(0, 69);
			this->MoreList->Name = L"MoreList";
			this->MoreList->Size = System::Drawing::Size(0, 0);
			this->MoreList->TabIndex = 14;
			// 
			// LogOutBtn
			// 
			this->LogOutBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->LogOutBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->LogOutBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogOutBtn.BackgroundImage")));
			this->LogOutBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->LogOutBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LogOutBtn->FlatAppearance->BorderSize = 0;
			this->LogOutBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogOutBtn->Location = System::Drawing::Point(-221, 139);
			this->LogOutBtn->Name = L"LogOutBtn";
			this->LogOutBtn->Size = System::Drawing::Size(71, 45);
			this->LogOutBtn->TabIndex = 24;
			this->LogOutBtn->UseVisualStyleBackColor = false;
			this->LogOutBtn->Click += gcnew System::EventHandler(this, &MyForm::LogOutBtn_Click);
			// 
			// LogOutLb
			// 
			this->LogOutLb->AutoSize = true;
			this->LogOutLb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogOutLb->ForeColor = System::Drawing::Color::White;
			this->LogOutLb->Location = System::Drawing::Point(116, 149);
			this->LogOutLb->Name = L"LogOutLb";
			this->LogOutLb->Size = System::Drawing::Size(82, 25);
			this->LogOutLb->TabIndex = 23;
			this->LogOutLb->Text = L"Log Out";
			this->LogOutLb->Click += gcnew System::EventHandler(this, &MyForm::LogOutLb_Click);
			// 
			// CreateGroup_btn
			// 
			this->CreateGroup_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->CreateGroup_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->CreateGroup_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CreateGroup_btn.BackgroundImage")));
			this->CreateGroup_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->CreateGroup_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CreateGroup_btn->FlatAppearance->BorderSize = 0;
			this->CreateGroup_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CreateGroup_btn->Location = System::Drawing::Point(-222, 78);
			this->CreateGroup_btn->Name = L"CreateGroup_btn";
			this->CreateGroup_btn->Size = System::Drawing::Size(71, 45);
			this->CreateGroup_btn->TabIndex = 22;
			this->CreateGroup_btn->UseVisualStyleBackColor = false;
			this->CreateGroup_btn->Click += gcnew System::EventHandler(this, &MyForm::CreateGroup_btn_Click);
			// 
			// Profile_btn
			// 
			this->Profile_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Profile_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->Profile_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Profile_btn.BackgroundImage")));
			this->Profile_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Profile_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Profile_btn->FlatAppearance->BorderSize = 0;
			this->Profile_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Profile_btn->Location = System::Drawing::Point(-221, 6);
			this->Profile_btn->Name = L"Profile_btn";
			this->Profile_btn->Size = System::Drawing::Size(71, 45);
			this->Profile_btn->TabIndex = 15;
			this->Profile_btn->UseVisualStyleBackColor = false;
			this->Profile_btn->Click += gcnew System::EventHandler(this, &MyForm::Profile_btn_Click);
			// 
			// CreateGroup_lb
			// 
			this->CreateGroup_lb->AutoSize = true;
			this->CreateGroup_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateGroup_lb->ForeColor = System::Drawing::Color::White;
			this->CreateGroup_lb->Location = System::Drawing::Point(94, 88);
			this->CreateGroup_lb->Name = L"CreateGroup_lb";
			this->CreateGroup_lb->Size = System::Drawing::Size(130, 25);
			this->CreateGroup_lb->TabIndex = 21;
			this->CreateGroup_lb->Text = L"Create Group";
			this->CreateGroup_lb->Click += gcnew System::EventHandler(this, &MyForm::CreateGroup_btn_Click);
			// 
			// Profile_lb
			// 
			this->Profile_lb->AutoSize = true;
			this->Profile_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Profile_lb->ForeColor = System::Drawing::Color::White;
			this->Profile_lb->Location = System::Drawing::Point(98, 14);
			this->Profile_lb->Name = L"Profile_lb";
			this->Profile_lb->Size = System::Drawing::Size(120, 29);
			this->Profile_lb->TabIndex = 19;
			this->Profile_lb->Text = L"My Profile";
			this->Profile_lb->Click += gcnew System::EventHandler(this, &MyForm::Profile_btn_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 66);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(239, 631);
			this->flowLayoutPanel1->TabIndex = 15;
			this->flowLayoutPanel1->WrapContents = false;
			// 
			// userSettings
			// 
			this->userSettings->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->userSettings->Controls->Add(this->VerticalBorder);
			this->userSettings->Controls->Add(this->panel1);
			this->userSettings->Controls->Add(this->More);
			this->userSettings->Controls->Add(this->NewChat);
			this->userSettings->Controls->Add(this->Status);
			this->userSettings->Dock = System::Windows::Forms::DockStyle::Top;
			this->userSettings->Location = System::Drawing::Point(0, 0);
			this->userSettings->Name = L"userSettings";
			this->userSettings->Size = System::Drawing::Size(239, 66);
			this->userSettings->TabIndex = 0;
			// 
			// VerticalBorder
			// 
			this->VerticalBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->VerticalBorder->Location = System::Drawing::Point(236, -10);
			this->VerticalBorder->Name = L"VerticalBorder";
			this->VerticalBorder->Size = System::Drawing::Size(5, 150);
			this->VerticalBorder->TabIndex = 12;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panel1->Location = System::Drawing::Point(0, 65);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(239, 16);
			this->panel1->TabIndex = 11;
			// 
			// More
			// 
			this->More->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->More->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->More->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"More.BackgroundImage")));
			this->More->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->More->Cursor = System::Windows::Forms::Cursors::Hand;
			this->More->FlatAppearance->BorderSize = 0;
			this->More->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->More->Location = System::Drawing::Point(12, 10);
			this->More->Name = L"More";
			this->More->Size = System::Drawing::Size(49, 45);
			this->More->TabIndex = 14;
			this->More->UseVisualStyleBackColor = false;
			this->More->Click += gcnew System::EventHandler(this, &MyForm::More_Click_1);
			// 
			// NewChat
			// 
			this->NewChat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->NewChat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->NewChat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NewChat.BackgroundImage")));
			this->NewChat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->NewChat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NewChat->FlatAppearance->BorderSize = 0;
			this->NewChat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NewChat->Location = System::Drawing::Point(82, 12);
			this->NewChat->Name = L"NewChat";
			this->NewChat->Size = System::Drawing::Size(65, 41);
			this->NewChat->TabIndex = 13;
			this->NewChat->UseVisualStyleBackColor = false;
			this->NewChat->Click += gcnew System::EventHandler(this, &MyForm::NewChat_Click);
			// 
			// Status
			// 
			this->Status->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Status->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Status.BackgroundImage")));
			this->Status->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Status->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Status->FlatAppearance->BorderSize = 0;
			this->Status->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Status->Location = System::Drawing::Point(165, 10);
			this->Status->Name = L"Status";
			this->Status->Size = System::Drawing::Size(71, 45);
			this->Status->TabIndex = 12;
			this->Status->UseVisualStyleBackColor = false;
			this->Status->Click += gcnew System::EventHandler(this, &MyForm::Status_Click);
			// 
			// UserProfile
			// 
			this->UserProfile->Controls->Add(this->button7);
			this->UserProfile->Controls->Add(this->label5);
			this->UserProfile->Controls->Add(this->ImageStory);
			this->UserProfile->Controls->Add(this->button8);
			this->UserProfile->Controls->Add(this->label6);
			this->UserProfile->Controls->Add(this->label7);
			this->UserProfile->Controls->Add(this->TextStory);
			this->UserProfile->Controls->Add(this->label3);
			this->UserProfile->Controls->Add(this->button6);
			this->UserProfile->Controls->Add(this->Edit);
			this->UserProfile->Controls->Add(this->groupBox1);
			this->UserProfile->Controls->Add(this->label2);
			this->UserProfile->Controls->Add(this->Description);
			this->UserProfile->Controls->Add(this->label1);
			this->UserProfile->Location = System::Drawing::Point(240, 65);
			this->UserProfile->Name = L"UserProfile";
			this->UserProfile->Size = System::Drawing::Size(990, 629);
			this->UserProfile->TabIndex = 4;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Enabled = false;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(-1, 406);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(988, 44);
			this->button7->TabIndex = 27;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(561, 543);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 29);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Image";
			// 
			// ImageStory
			// 
			this->ImageStory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ImageStory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->ImageStory->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImageStory.BackgroundImage")));
			this->ImageStory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ImageStory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ImageStory->FlatAppearance->BorderSize = 0;
			this->ImageStory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ImageStory->Location = System::Drawing::Point(508, 535);
			this->ImageStory->Name = L"ImageStory";
			this->ImageStory->Size = System::Drawing::Size(44, 41);
			this->ImageStory->TabIndex = 25;
			this->ImageStory->UseVisualStyleBackColor = false;
			this->ImageStory->Click += gcnew System::EventHandler(this, &MyForm::ImageStory_Click);
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(465, 519);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(44, 78);
			this->button8->TabIndex = 24;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(408, 545);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 29);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Text";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(423, 474);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 41);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Add Story";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TextStory
			// 
			this->TextStory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->TextStory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->TextStory->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TextStory.BackgroundImage")));
			this->TextStory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TextStory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TextStory->FlatAppearance->BorderSize = 0;
			this->TextStory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TextStory->Location = System::Drawing::Point(360, 536);
			this->TextStory->Name = L"TextStory";
			this->TextStory->Size = System::Drawing::Size(44, 41);
			this->TextStory->TabIndex = 21;
			this->TextStory->UseVisualStyleBackColor = false;
			this->TextStory->Click += gcnew System::EventHandler(this, &MyForm::TextStory_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(135, 570);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 29);
			this->label3->TabIndex = 8;
			this->label3->Visible = false;
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
			this->button6->Location = System::Drawing::Point(324, 352);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(341, 48);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Change Profile Photo";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
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
			this->Edit->Location = System::Drawing::Point(433, 274);
			this->Edit->Name = L"Edit";
			this->Edit->Size = System::Drawing::Size(123, 48);
			this->Edit->TabIndex = 6;
			this->Edit->Text = L"Edit";
			this->Edit->UseVisualStyleBackColor = false;
			this->Edit->Click += gcnew System::EventHandler(this, &MyForm::Edit_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(393, 159);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(437, 77);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(234, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(178, 43);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Unvisible";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(30, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(140, 43);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Visible";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(156, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 39);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Visibility :";
			// 
			// Description
			// 
			this->Description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Description->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Description->ForeColor = System::Drawing::Color::White;
			this->Description->Location = System::Drawing::Point(393, 27);
			this->Description->MaxLength = 200;
			this->Description->Name = L"Description";
			this->Description->ReadOnly = true;
			this->Description->Size = System::Drawing::Size(442, 96);
			this->Description->TabIndex = 1;
			this->Description->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(156, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Description :";
			// 
			// StoryPanel
			// 
			this->StoryPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->StoryPanel->Controls->Add(this->StoriesContainer);
			this->StoryPanel->Controls->Add(this->StatusList);
			this->StoryPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StoryPanel->Location = System::Drawing::Point(0, 0);
			this->StoryPanel->Name = L"StoryPanel";
			this->StoryPanel->Size = System::Drawing::Size(1230, 697);
			this->StoryPanel->TabIndex = 8;
			// 
			// StoriesContainer
			// 
			this->StoriesContainer->Controls->Add(this->button18);
			this->StoriesContainer->Controls->Add(this->panel4);
			this->StoriesContainer->Controls->Add(this->button15);
			this->StoriesContainer->Controls->Add(this->PicStory);
			this->StoriesContainer->Controls->Add(this->storyText);
			this->StoriesContainer->Controls->Add(this->storySeen);
			this->StoriesContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StoriesContainer->Location = System::Drawing::Point(295, 0);
			this->StoriesContainer->Name = L"StoriesContainer";
			this->StoriesContainer->Size = System::Drawing::Size(935, 697);
			this->StoriesContainer->TabIndex = 13;
			// 
			// button18
			// 
			this->button18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(409, 635);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(116, 42);
			this->button18->TabIndex = 16;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->StoryTime);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->richTextBox9);
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Location = System::Drawing::Point(99, 92);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(780, 500);
			this->panel4->TabIndex = 15;
			// 
			// StoryTime
			// 
			this->StoryTime->AutoSize = true;
			this->StoryTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StoryTime->ForeColor = System::Drawing::Color::White;
			this->StoryTime->Location = System::Drawing::Point(68, 43);
			this->StoryTime->Name = L"StoryTime";
			this->StoryTime->Size = System::Drawing::Size(0, 29);
			this->StoryTime->TabIndex = 21;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(3, 225);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(62, 51);
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// richTextBox9
			// 
			this->richTextBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->richTextBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox9->ForeColor = System::Drawing::Color::White;
			this->richTextBox9->ImeMode = System::Windows::Forms::ImeMode::KatakanaHalf;
			this->richTextBox9->Location = System::Drawing::Point(158, 127);
			this->richTextBox9->MaxLength = 200;
			this->richTextBox9->Name = L"richTextBox9";
			this->richTextBox9->ReadOnly = true;
			this->richTextBox9->Size = System::Drawing::Size(480, 247);
			this->richTextBox9->TabIndex = 19;
			this->richTextBox9->Text = L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(161, 126);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(0, 0);
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(715, 225);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(62, 51);
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(866, 21);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(62, 26);
			this->button15->TabIndex = 14;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// PicStory
			// 
			this->PicStory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->PicStory->Controls->Add(this->StoryPic);
			this->PicStory->Controls->Add(this->button9);
			this->PicStory->Controls->Add(this->button10);
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
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(317, 270);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(123, 48);
			this->button9->TabIndex = 18;
			this->button9->Text = L"Add";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(208, 188);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(341, 48);
			this->button10->TabIndex = 17;
			this->button10->Text = L"Choose Picture";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// storyText
			// 
			this->storyText->Controls->Add(this->label8);
			this->storyText->Controls->Add(this->button11);
			this->storyText->Controls->Add(this->richTextBox8);
			this->storyText->Location = System::Drawing::Point(66, 84);
			this->storyText->Name = L"storyText";
			this->storyText->Size = System::Drawing::Size(0, 0);
			this->storyText->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(257, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(243, 41);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Write Your Story";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(317, 380);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(123, 48);
			this->button11->TabIndex = 7;
			this->button11->Text = L"Add";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// richTextBox8
			// 
			this->richTextBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->richTextBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox8->ForeColor = System::Drawing::Color::White;
			this->richTextBox8->Location = System::Drawing::Point(22, 106);
			this->richTextBox8->MaxLength = 200;
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->Size = System::Drawing::Size(705, 240);
			this->richTextBox8->TabIndex = 2;
			this->richTextBox8->Text = L"";
			// 
			// storySeen
			// 
			this->storySeen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->storySeen->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->storySeen->Location = System::Drawing::Point(264, 97);
			this->storySeen->Name = L"storySeen";
			this->storySeen->Size = System::Drawing::Size(406, 502);
			this->storySeen->TabIndex = 17;
			// 
			// StatusList
			// 
			this->StatusList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->StatusList->Controls->Add(this->label20);
			this->StatusList->Controls->Add(this->StoriesPn);
			this->StatusList->Controls->Add(this->userStories);
			this->StatusList->Controls->Add(this->button12);
			this->StatusList->Controls->Add(this->button13);
			this->StatusList->Controls->Add(this->button14);
			this->StatusList->Dock = System::Windows::Forms::DockStyle::Left;
			this->StatusList->Location = System::Drawing::Point(0, 0);
			this->StatusList->Name = L"StatusList";
			this->StatusList->Size = System::Drawing::Size(295, 697);
			this->StatusList->TabIndex = 12;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(94, 88);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(107, 41);
			this->label20->TabIndex = 23;
			this->label20->Text = L"Stories";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// StoriesPn
			// 
			this->StoriesPn->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->StoriesPn->Location = System::Drawing::Point(3, 145);
			this->StoriesPn->Name = L"StoriesPn";
			this->StoriesPn->Size = System::Drawing::Size(289, 552);
			this->StoriesPn->TabIndex = 23;
			// 
			// userStories
			// 
			this->userStories->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->userStories->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->userStories->Location = System::Drawing::Point(2, 7);
			this->userStories->Name = L"userStories";
			this->userStories->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->userStories->Size = System::Drawing::Size(290, 66);
			this->userStories->TabIndex = 21;
			this->userStories->Username = L"My Stories";
			this->userStories->Click += gcnew System::EventHandler(this, &MyForm::userStories_Click);
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Enabled = false;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(3, 121);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(289, 44);
			this->button12->TabIndex = 20;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(157, 71);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(44, 41);
			this->button13->TabIndex = 18;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(9, 72);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(44, 41);
			this->button14->TabIndex = 14;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// UnLogged
			// 
			this->UnLogged->Controls->Add(this->UlChatContainer);
			this->UnLogged->Controls->Add(this->UlChatBar);
			this->UnLogged->Dock = System::Windows::Forms::DockStyle::Fill;
			this->UnLogged->Location = System::Drawing::Point(0, 0);
			this->UnLogged->Name = L"UnLogged";
			this->UnLogged->Size = System::Drawing::Size(1230, 697);
			this->UnLogged->TabIndex = 3;
			// 
			// UlChatContainer
			// 
			this->UlChatContainer->Controls->Add(this->panel12);
			this->UlChatContainer->Controls->Add(this->panel14);
			this->UlChatContainer->Controls->Add(this->LoginBox);
			this->UlChatContainer->Controls->Add(this->RegBox);
			this->UlChatContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->UlChatContainer->Location = System::Drawing::Point(239, 0);
			this->UlChatContainer->Name = L"UlChatContainer";
			this->UlChatContainer->Size = System::Drawing::Size(991, 697);
			this->UlChatContainer->TabIndex = 1;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->panel12->Controls->Add(this->panel13);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel12->Location = System::Drawing::Point(0, 609);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(991, 88);
			this->panel12->TabIndex = 1;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panel13->Location = System::Drawing::Point(-2, 0);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(5, 500);
			this->panel13->TabIndex = 13;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->panel14->Controls->Add(this->button2);
			this->panel14->Controls->Add(this->label9);
			this->panel14->Controls->Add(this->pictureBox9);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel14->Location = System::Drawing::Point(0, 0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(991, 66);
			this->panel14->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(1903, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 45);
			this->button2->TabIndex = 18;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(148, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 39);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Guest";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(0, 0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(100, 66);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 16;
			this->pictureBox9->TabStop = false;
			// 
			// LoginBox
			// 
			this->LoginBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->LoginBox->Controls->Add(this->panel3);
			this->LoginBox->Location = System::Drawing::Point(1, 66);
			this->LoginBox->Name = L"LoginBox";
			this->LoginBox->Size = System::Drawing::Size(987, 543);
			this->LoginBox->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->panel3->Controls->Add(this->richTextBox2);
			this->panel3->Controls->Add(this->Test);
			this->panel3->Controls->Add(this->login_btn);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->richTextBox1);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Location = System::Drawing::Point(208, 60);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(570, 423);
			this->panel3->TabIndex = 0;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(278, 234);
			this->richTextBox2->MaxLength = 20;
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->PasswordChar = '*';
			this->richTextBox2->Size = System::Drawing::Size(225, 34);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Enter += gcnew System::EventHandler(this, &MyForm::richTextBox2_Enter);
			// 
			// Test
			// 
			this->Test->AutoSize = true;
			this->Test->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Test->ForeColor = System::Drawing::Color::White;
			this->Test->Location = System::Drawing::Point(243, 297);
			this->Test->Name = L"Test";
			this->Test->Size = System::Drawing::Size(0, 29);
			this->Test->TabIndex = 17;
			// 
			// login_btn
			// 
			this->login_btn->AutoEllipsis = true;
			this->login_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->login_btn->FlatAppearance->BorderSize = 0;
			this->login_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login_btn->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Bold));
			this->login_btn->ForeColor = System::Drawing::Color::White;
			this->login_btn->Location = System::Drawing::Point(187, 345);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(196, 49);
			this->login_btn->TabIndex = 16;
			this->login_btn->Text = L"Log in";
			this->login_btn->UseVisualStyleBackColor = false;
			this->login_btn->Click += gcnew System::EventHandler(this, &MyForm::Login_btn_Click_1);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(11, 232);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(135, 32);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Password :";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(278, 158);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(225, 30);
			this->richTextBox1->TabIndex = 13;
			this->richTextBox1->Text = L"+20";
			this->LoginPhone->SetToolTip(this->richTextBox1, L"Only Numbers Allowed");
			this->richTextBox1->Enter += gcnew System::EventHandler(this, &MyForm::richTextBox1_Enter);
			this->richTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::richTextBox1_KeyDown);
			this->richTextBox1->Leave += gcnew System::EventHandler(this, &MyForm::richTextBox1_Leave);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(11, 155);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(201, 32);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Phone Number :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(212, 35);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(146, 60);
			this->label14->TabIndex = 11;
			this->label14->Text = L"Log in";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RegBox
			// 
			this->RegBox->Controls->Add(this->FormReg);
			this->RegBox->Location = System::Drawing::Point(0, 69);
			this->RegBox->Name = L"RegBox";
			this->RegBox->Size = System::Drawing::Size(991, 551);
			this->RegBox->TabIndex = 4;
			// 
			// FormReg
			// 
			this->FormReg->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FormReg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->FormReg->Controls->Add(this->label4);
			this->FormReg->Controls->Add(this->button5);
			this->FormReg->Controls->Add(this->richTextBox3);
			this->FormReg->Controls->Add(this->richTextBox5);
			this->FormReg->Controls->Add(this->richTextBox6);
			this->FormReg->Controls->Add(this->label15);
			this->FormReg->Controls->Add(this->label16);
			this->FormReg->Controls->Add(this->label17);
			this->FormReg->Controls->Add(this->label18);
			this->FormReg->Controls->Add(this->label19);
			this->FormReg->Controls->Add(this->textBox1);
			this->FormReg->Location = System::Drawing::Point(198, 21);
			this->FormReg->Name = L"FormReg";
			this->FormReg->Size = System::Drawing::Size(598, 497);
			this->FormReg->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(152, 408);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 29);
			this->label4->TabIndex = 18;
			// 
			// button5
			// 
			this->button5->AutoEllipsis = true;
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(225, 444);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(196, 49);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Register";
			this->button5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(288, 272);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(284, 30);
			this->richTextBox3->TabIndex = 7;
			this->richTextBox3->Text = L"+20";
			this->richTextBox3->Enter += gcnew System::EventHandler(this, &MyForm::richTextBox3_Enter);
			this->richTextBox3->Leave += gcnew System::EventHandler(this, &MyForm::richTextBox3_Leave);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox5->Location = System::Drawing::Point(288, 180);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(284, 30);
			this->richTextBox5->TabIndex = 6;
			this->richTextBox5->Text = L"Last Name";
			this->richTextBox5->Enter += gcnew System::EventHandler(this, &MyForm::richTextBox5_Enter);
			this->richTextBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::richTextBox6_KeyDown);
			this->richTextBox5->Leave += gcnew System::EventHandler(this, &MyForm::richTextBox5_Leave);
			// 
			// richTextBox6
			// 
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox6->Location = System::Drawing::Point(288, 85);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(284, 30);
			this->richTextBox6->TabIndex = 5;
			this->richTextBox6->Text = L"First Name";
			this->richTextBox6->Enter += gcnew System::EventHandler(this, &MyForm::richTextBox6_Enter);
			this->richTextBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::richTextBox6_KeyDown);
			this->richTextBox6->Leave += gcnew System::EventHandler(this, &MyForm::richTextBox6_Leave);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(3, 362);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(166, 41);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Password :";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(3, 266);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(249, 41);
			this->label16->TabIndex = 3;
			this->label16->Text = L"Phone Number :";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(3, 171);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(182, 41);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Last Name :";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(3, 76);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(186, 41);
			this->label18->TabIndex = 1;
			this->label18->Text = L"First Name :";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(211, 4);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(176, 60);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Register";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(288, 369);
			this->textBox1->MaxLength = 20;
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(284, 34);
			this->textBox1->TabIndex = 19;
			// 
			// UlChatBar
			// 
			this->UlChatBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->UlChatBar->Controls->Add(this->UlMoreList);
			this->UlChatBar->Controls->Add(this->UlUserSettings);
			this->UlChatBar->Dock = System::Windows::Forms::DockStyle::Left;
			this->UlChatBar->Location = System::Drawing::Point(0, 0);
			this->UlChatBar->Name = L"UlChatBar";
			this->UlChatBar->Size = System::Drawing::Size(239, 697);
			this->UlChatBar->TabIndex = 0;
			// 
			// UlMoreList
			// 
			this->UlMoreList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->UlMoreList->Controls->Add(this->button3);
			this->UlMoreList->Controls->Add(this->button4);
			this->UlMoreList->Controls->Add(this->label10);
			this->UlMoreList->Controls->Add(this->label11);
			this->UlMoreList->Location = System::Drawing::Point(-7, 69);
			this->UlMoreList->Name = L"UlMoreList";
			this->UlMoreList->Size = System::Drawing::Size(235, 133);
			this->UlMoreList->TabIndex = 14;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(13, 78);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(71, 45);
			this->button3->TabIndex = 22;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(14, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(71, 45);
			this->button4->TabIndex = 15;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(97, 85);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 29);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Register";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(107, 15);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 29);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Log in";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// UlUserSettings
			// 
			this->UlUserSettings->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->UlUserSettings->Controls->Add(this->panel26);
			this->UlUserSettings->Controls->Add(this->panel27);
			this->UlUserSettings->Controls->Add(this->UlCredentials);
			this->UlUserSettings->Controls->Add(this->UlContacts);
			this->UlUserSettings->Controls->Add(this->UlStory);
			this->UlUserSettings->Dock = System::Windows::Forms::DockStyle::Top;
			this->UlUserSettings->Location = System::Drawing::Point(0, 0);
			this->UlUserSettings->Name = L"UlUserSettings";
			this->UlUserSettings->Size = System::Drawing::Size(239, 66);
			this->UlUserSettings->TabIndex = 0;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panel26->Location = System::Drawing::Point(236, -10);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(5, 150);
			this->panel26->TabIndex = 12;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panel27->Location = System::Drawing::Point(0, 65);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(239, 16);
			this->panel27->TabIndex = 11;
			// 
			// UlCredentials
			// 
			this->UlCredentials->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->UlCredentials->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->UlCredentials->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UlCredentials.BackgroundImage")));
			this->UlCredentials->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->UlCredentials->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UlCredentials->FlatAppearance->BorderSize = 0;
			this->UlCredentials->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UlCredentials->Location = System::Drawing::Point(11, 10);
			this->UlCredentials->Name = L"UlCredentials";
			this->UlCredentials->Size = System::Drawing::Size(49, 45);
			this->UlCredentials->TabIndex = 14;
			this->UlCredentials->UseVisualStyleBackColor = false;
			this->UlCredentials->Click += gcnew System::EventHandler(this, &MyForm::More_Click_1);
			// 
			// UlContacts
			// 
			this->UlContacts->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->UlContacts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->UlContacts->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UlContacts.BackgroundImage")));
			this->UlContacts->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->UlContacts->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UlContacts->FlatAppearance->BorderSize = 0;
			this->UlContacts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UlContacts->Location = System::Drawing::Point(78, 13);
			this->UlContacts->Name = L"UlContacts";
			this->UlContacts->Size = System::Drawing::Size(65, 41);
			this->UlContacts->TabIndex = 13;
			this->UlContacts->UseVisualStyleBackColor = false;
			this->UlContacts->Click += gcnew System::EventHandler(this, &MyForm::NewChat_Click);
			// 
			// UlStory
			// 
			this->UlStory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->UlStory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->UlStory->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UlStory.BackgroundImage")));
			this->UlStory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->UlStory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UlStory->FlatAppearance->BorderSize = 0;
			this->UlStory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UlStory->Location = System::Drawing::Point(165, 10);
			this->UlStory->Name = L"UlStory";
			this->UlStory->Size = System::Drawing::Size(71, 45);
			this->UlStory->TabIndex = 12;
			this->UlStory->UseVisualStyleBackColor = false;
			this->UlStory->Click += gcnew System::EventHandler(this, &MyForm::Status_Click);
			// 
			// contactDesc
			// 
			this->contactDesc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->contactDesc->Controls->Add(this->DescPhone);
			this->contactDesc->Controls->Add(this->DescName);
			this->contactDesc->Controls->Add(this->DescPic);
			this->contactDesc->Controls->Add(this->DescText);
			this->contactDesc->Location = System::Drawing::Point(811, 80);
			this->contactDesc->Name = L"contactDesc";
			this->contactDesc->Size = System::Drawing::Size(0, 0);
			this->contactDesc->TabIndex = 7;
			// 
			// DescPhone
			// 
			this->DescPhone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->DescPhone->AutoSize = true;
			this->DescPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DescPhone->ForeColor = System::Drawing::Color::White;
			this->DescPhone->Location = System::Drawing::Point(-137, 29);
			this->DescPhone->Name = L"DescPhone";
			this->DescPhone->Size = System::Drawing::Size(133, 25);
			this->DescPhone->TabIndex = 3;
			this->DescPhone->Text = L"01112866119";
			// 
			// DescName
			// 
			this->DescName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->DescName->AutoSize = true;
			this->DescName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DescName->ForeColor = System::Drawing::Color::White;
			this->DescName->Location = System::Drawing::Point(-156, -16);
			this->DescName->Name = L"DescName";
			this->DescName->Size = System::Drawing::Size(192, 25);
			this->DescName->TabIndex = 2;
			this->DescName->Text = L"Mahmoud mohamed";
			// 
			// DescPic
			// 
			this->DescPic->Location = System::Drawing::Point(162, 68);
			this->DescPic->Name = L"DescPic";
			this->DescPic->Size = System::Drawing::Size(91, 79);
			this->DescPic->TabIndex = 1;
			this->DescPic->TabStop = false;
			// 
			// DescText
			// 
			this->DescText->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->DescText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DescText->ForeColor = System::Drawing::Color::White;
			this->DescText->Location = System::Drawing::Point(20, 277);
			this->DescText->Name = L"DescText";
			this->DescText->ReadOnly = true;
			this->DescText->Size = System::Drawing::Size(373, 64);
			this->DescText->TabIndex = 0;
			this->DescText->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->ClientSize = System::Drawing::Size(1230, 738);
			this->Controls->Add(this->MainContainer);
			this->Controls->Add(this->TitleBar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Whatsapp";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->TitleBar->ResumeLayout(false);
			this->TitleBar->PerformLayout();
			this->MainContainer->ResumeLayout(false);
			this->LoggedIn->ResumeLayout(false);
			this->ChatContainer->ResumeLayout(false);
			this->Messages->ResumeLayout(false);
			this->RecPn->ResumeLayout(false);
			this->RecPn->PerformLayout();
			this->TextBottom->ResumeLayout(false);
			this->ChatTopBar->ResumeLayout(false);
			this->ChatTopBar->PerformLayout();
			this->ChatBar->ResumeLayout(false);
			this->MoreList->ResumeLayout(false);
			this->MoreList->PerformLayout();
			this->userSettings->ResumeLayout(false);
			this->UserProfile->ResumeLayout(false);
			this->UserProfile->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->StoryPanel->ResumeLayout(false);
			this->StoriesContainer->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->PicStory->ResumeLayout(false);
			this->storyText->ResumeLayout(false);
			this->storyText->PerformLayout();
			this->StatusList->ResumeLayout(false);
			this->StatusList->PerformLayout();
			this->UnLogged->ResumeLayout(false);
			this->UlChatContainer->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->LoginBox->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->RegBox->ResumeLayout(false);
			this->FormReg->ResumeLayout(false);
			this->FormReg->PerformLayout();
			this->UlChatBar->ResumeLayout(false);
			this->UlMoreList->ResumeLayout(false);
			this->UlMoreList->PerformLayout();
			this->UlUserSettings->ResumeLayout(false);
			this->contactDesc->ResumeLayout(false);
			this->contactDesc->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DescPic))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	// all global variables
	private: int msg_user_id;
	private: int msg_chat_id;
	private: int msg_chat_type;
	private: int userLoggedIn;
	private: String^ userLoggedInName;
	private: String^ userLoggedInPic;
	private: vector<int> seenlist;
	private: vector<int> contacts;
	private: vector<User^> users;
	private: vector<User^> usersRuntime;
	private: vector<Profile^> profiles;
	private: vector<Profile^> profilesRuntime;
	private: vector<UserChatRoom^> user_chatroom;
	private: vector<ChatInfo^> infoRuntime;
	private: vector<ChatRoom^> chat;
	private: vector<ChatInfo^> info;
	private: vector<Group^> groupChats;
	private: vector<msg^> msgsRuntime;
	private: vector<msgStatus^> statusRuntime;
	private: vector<msgStatus^> status;
	private: vector<Story^> stories;
	private: vector<Story^> storiesRuntime;
	private: MyForm1^ form1 = gcnew MyForm1;
	private: SQLiteConnection^ db = gcnew SQLiteConnection("Data Source = DataBase.db;Version = 3;");
	private: SQLiteCommand^ cmd = gcnew SQLiteCommand(db);
	

	//store status into DataBase
	private: void storeStatusIntoDB() {
		if(statusRuntime.size() != 0) {
			db->Open();
			for each(msgStatus^ state in statusRuntime){
				if(state->getSeen() == 1){
					cmd->CommandText = "UPDATE Status set Seen=1 WHERE TRUE";
					cmd->ExecuteNonQuery();
				}
			}
			db->Close();
		}
	}
	//store Users into DataBase
	private: void storeUsersIntoDB() {
		if(usersRuntime.size() != 0){
			db->Open();
			for each(User^ user in usersRuntime){
				if (find(users.begin(), users.end(), user) != users.end())
					continue;
				cmd->CommandText = "INSERT INTO User(Password, Phone_Number, First_Name, Last_Name, Last_Logged) VALUES(@pass, @phone, @first, @last, @lg)";
				cmd->Parameters->AddWithValue("@pass", user->getPass());
				cmd->Parameters->AddWithValue("@phone", user->getPhone());
				cmd->Parameters->AddWithValue("@first", user->getFirst());
				cmd->Parameters->AddWithValue("@last", user->getLast());
				cmd->Parameters->AddWithValue("@lg", user->getLogged());
				cmd->ExecuteNonQuery();
			}
			db->Close();
		}
	}
	//store stories into DataBase
	private: void storestoriesIntoDB() {
		if(storiesRuntime.size() != 0){
			db->Open();
			for each(Story^ story in storiesRuntime){
				if (find(stories.begin(), stories.end(), story) != stories.end())
					continue;
				cmd->CommandText = "INSERT INTO Story(Time_Of_Story, Image, Story_Text, User_ID_FK, Real_Time) VALUES(@time, @image, @text, @id, @real)";
				cmd->Parameters->AddWithValue("@time", story->getTime());
				cmd->Parameters->AddWithValue("@image", story->getImage());
				cmd->Parameters->AddWithValue("@text", story->getText());
				cmd->Parameters->AddWithValue("@id", story->getID());
				cmd->Parameters->AddWithValue("@real", story->getRealTime()->ToString());
				cmd->ExecuteNonQuery();
			}
			db->Close();
		}
	}
	 //store profile into DataBase
	private: void storeProfilesIntoDB() {
		if(profilesRuntime.size() != 0){
			db->Open();
			if(profiles.size() < profilesRuntime.size()){
					for each (Profile ^ pro in profilesRuntime) {
						if (find(profiles.begin(), profiles.end(), pro) != profiles.end())
							continue;
						cmd->CommandText = "INSERT INTO User_Profile VALUES(@desc, @id, @vis, @photo)";
						cmd->Parameters->AddWithValue("@id", pro->getID());
						cmd->Parameters->AddWithValue("@desc", pro->getDesc());
						cmd->Parameters->AddWithValue("@vis", pro->getVis());
						cmd->Parameters->AddWithValue("@photo", pro->getPhoto());
						cmd->ExecuteNonQuery();
					}
			}
			else {
				for each (Profile ^ pro in profilesRuntime) {
					if(pro->getLogged() == 1){
						cmd->CommandText = "UPDATE User_Profile set Description=@desc, Visibility=@vis, Photo=@photo WHERE User_ID_FK=@id";
						cmd->Parameters->AddWithValue("@id", pro->getID());
						cmd->Parameters->AddWithValue("@desc", pro->getDesc());
						cmd->Parameters->AddWithValue("@vis", pro->getVis());
						cmd->Parameters->AddWithValue("@photo", pro->getPhoto());
						cmd->ExecuteNonQuery();
					}
				}
			}
			db->Close();
		}
	}
	//load seen list
	private: void loadSeenList(int story) {
		db->Open();
		cmd->CommandText = "SELECT User_ID_FK, Time FROM StorySeen WHERE Story_ID_FK=@story";
		cmd->Parameters->AddWithValue("@story", story);
		SQLiteDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			seenlist.push_back(dr->GetInt32(0));
		}
		dr->Close();
		db->Close();
	}
	//load chats
	private: void loadChatRooms() {
		db->Open();
		cmd->CommandText = "SELECT * FROM ChatRoom";
		SQLiteDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			ChatRoom^ ch = gcnew ChatRoom;
			ch->setCHID(dr->GetInt32(0));
			ch->setCHType(dr->GetInt32(1));
			chat.push_back(ch);
		}
		dr->Close();
		db->Close();
	}
	//load stories
	private: void loadstories() {
		db->Open();
		cmd->CommandText = "SELECT * FROM Story";
		SQLiteDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			Story^ story = gcnew Story;
			story->setStoryID(dr->GetInt32(0));
			story->setTime(dr->GetString(1));
			story->setImage(dr->GetString(2));
			story->setText(dr->GetString(3));
			story->setID(dr->GetInt32(4));
			story->setrealTime(System::DateTime::Parse(dr->GetString(5)));
			stories.push_back(story);
		}
		storiesRuntime.assign(stories.begin(), stories.end());
		dr->Close();
		db->Close();
	}
	//load Contacts
	private: void loadContacts(int id) {
		db->Open();
		cmd->CommandText = "SELECT Contact_ID_FK FROM UserContacts WHERE User_ID_FK=@id";
		cmd->Parameters->AddWithValue("@id", id);
		SQLiteDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			contacts.push_back(dr->GetInt32(0));
		}
		dr->Close();
		db->Close();
	}
	//load users from database
	private: void loadUsersFromDB() {
		db->Open();
		cmd->CommandText = "SELECT * FROM User";
		SQLiteDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			User^ user = gcnew User();
			Profile^ profile = gcnew Profile();
			user->setID(dr->GetInt32(0));
			user->setPass(dr->GetString(1));
			user->setPhone(dr->GetString(2));
			user->setLast(dr->GetString(4));
			user->setFirst(dr->GetString(3));
			user->setLogged(dr->GetInt32(5));
			users.push_back(user);
		}
		usersRuntime.assign(users.begin(), users.end());
		dr->Close();
		db->Close();
	}
	//load users profile from database
	private: void loadProfilesFromDB() {
		db->Open();
		cmd->CommandText = "SELECT * FROM User_Profile";
		SQLiteDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			User^ user = gcnew User();
			Profile^ profile = gcnew Profile();
			profile->setDesc(dr->GetString(0));
			profile->setID(dr->GetInt32(1));
			profile->setVis(dr->GetInt32(2));
			profile->setPhoto(dr->GetString(3));
			profiles.push_back(profile);
		};
		profilesRuntime.assign(profiles.begin(), profiles.end());
		dr->Close();
		db->Close();
	}
	//load messages from database
	private: void loadMessagesFromDB(int chat) {
		msgsRuntime.clear();
		db->Open();
		cmd->CommandText = "SELECT * FROM Message WHERE CH_ID_FK=@chat";
		cmd->Parameters->AddWithValue("@chat", chat);
		SQLiteDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			msg^ message = gcnew msg();
			message->setMsgID(dr->GetInt32(0));
			message->setMsg(dr->GetString(1));
			message->setChatID(dr->GetInt32(2));
			message->setUserID(dr->GetInt32(3));
			message->setAudio(dr->GetString(4));
			msgsRuntime.push_back(message);
		};
		dr->Close();
		db->Close();
	}
	//load status from database
	private: void loadStatusFromDB() {
		db->Open();
		cmd->CommandText = "SELECT * FROM Status";
		SQLiteDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			msgStatus^ state = gcnew msgStatus();
			state->setDate(dr->GetString(0));
			state->setTime(dr->GetString(1));
			state->setSeen(dr->GetInt32(2));
			state->setMsg_ID(dr->GetInt32(3));
			status.push_back(state);
		};
		statusRuntime.assign(status.begin(), status.end());
		dr->Close();
		db->Close();
	}
	//load chat info for each user from database
	private: void loadChatInfoFromDB() {
		infoRuntime.clear();
		db->Open();
		cmd->CommandText = "SELECT * FROM ChatRoomInfo";
		SQLiteDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			ChatInfo^ info = gcnew ChatInfo();
			info->setLastSeen(dr->GetString(0));
			info->setUserID(dr->GetInt32(1));
			info->setCHID(dr->GetInt32(2));
			info->setLastOpened(dr->GetString(3));
			infoRuntime.push_back(info);
		}
		dr->Close();
		db->Close();
	}
	//load chatroom for each user from database
	private: void loaduserchatFromDB() {
		user_chatroom.clear();
		db->Open();
		cmd->CommandText = "SELECT * FROM User_ChatRoom";
		SQLiteDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			UserChatRoom^ us = gcnew UserChatRoom();
			us->setUserID(dr->GetInt32(0));
			us->setCHID(dr->GetInt32(1));
			user_chatroom.push_back(us);
		}
		dr->Close();
		db->Close();
	}
	//load  groups chat database
	private: void loaduserGroupFromDB() {
		groupChats.clear();
		db->Open();
		cmd->CommandText = "SELECT * FROM GroupChat";
		SQLiteDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			Group^ gp = gcnew Group();
			gp->setName(dr->GetString(0));
			gp->setDesc(dr->GetString(1));
			gp->setPic(dr->GetString(2));
			gp->setID(dr->GetInt32(3));
			groupChats.push_back(gp);
		}
		dr->Close();
		db->Close();
	}
	//form Load
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		/*Loading all information from database once GUI has loaded*/
		loadUsersFromDB();
		loadProfilesFromDB();
		loadChatRooms();
		loadStatusFromDB();
		loadChatInfoFromDB();
		loaduserGroupFromDB();
		loadstories();
		loaduserchatFromDB();

		/*loging in to the last user who has been logged in and hasn't logged out*/
		for (int i = 0; i < usersRuntime.size(); i++) {
			//if logged in state is true -> log the user in
			if (usersRuntime[i]->getLogged() == 1) {
				//checks whether the user is setting visibilty to visible or not
				if (profilesRuntime[i]->getVis() == 0)
					radioButton2->Checked = true;
				userLoggedIn = i;
				//clearing the panel that contains the contacts and then loading all user's contacts from database
				this->contacts.clear();
				this->loadContacts(usersRuntime[i]->getID());
				for (int j = 0; j < contacts.size(); j++) {
					if (contacts.size() == 0)
						continue;
					//creating the component card for each contact in the user's contact list
					ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
					Card::MyUserControl^ contact = gcnew Card::MyUserControl();
					contact->Username = usersRuntime[contacts[j] - 1]->getFirst() + " " + usersRuntime[contacts[j] - 1]->getLast();
					if (profilesRuntime[contacts[j] - 1]->getPhoto() == "" || profilesRuntime[contacts[j] - 1]->getVis() == 0)
						contact->pictureBox9->BackgroundImage = contact->pictureBox9->BackgroundImage;
					else
						contact->pictureBox9->BackgroundImage = gcnew Bitmap(profilesRuntime[contacts[j] - 1]->getPhoto());
					contact->userID->Text = usersRuntime[contacts[j] - 1]->getID().ToString();
					//loading every chat room between the user and his contacts
					for each (UserChatRoom ^ uchat in user_chatroom) {
						if (uchat->getUserID() == usersRuntime[userLoggedIn]->getID() && uchat->getTaken() == 0) {
							contact->chatID->Text = uchat->getCHID().ToString();
							contact->chatType->Text = chat[uchat->getCHID() - 1]->getCHType().ToString();
							//an indicator if a chat room has been created before between the same users
							uchat->setTaken(1);
							break;
						}
					}
					//adding a click even for each contact card then inserting the card into the panel
					contact->Click += gcnew System::EventHandler(this, &MyForm::Contact_Click);
					flowLayoutPanel1->Controls->Add(contact);
					profilesRuntime[i]->setLogged(1);
				}
				//loading any group chat that exist
				for (int k = 0; k < groupChats.size(); k++) {
					for each (ChatInfo ^ info in infoRuntime) {
						//checkin' if the groupchat id exists in the chat information table then creating a card for the group
						if (groupChats[k]->getID() == info->getID()) {
							if (info->getUserID() == usersRuntime[userLoggedIn]->getID()) {
								Card::MyUserControl^ contact = gcnew Card::MyUserControl();
								contact->Username = groupChats[k]->getName();
								if (groupChats[k]->getPic() == "")
									contact->pictureBox9->BackgroundImage = contact->pictureBox9->BackgroundImage;
								else
									contact->pictureBox9->BackgroundImage = gcnew Bitmap(groupChats[k]->getPic());
								contact->chatID->Text = groupChats[k]->getID().ToString();
								contact->Click += gcnew System::EventHandler(this, &MyForm::Group_Click);
								flowLayoutPanel1->Controls->Add(contact);
							}
						}
					}
				}
				//setting the user information to his profile
				UserName->Text = usersRuntime[i]->getFirst() + " " + usersRuntime[i]->getLast();
				Description->Text = profilesRuntime[i]->getDesc();
				if (profilesRuntime[i]->getPhoto() != "") {
					userLoggedInPic = profilesRuntime[i]->getPhoto();
					ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
					ProfilePic->BackgroundImage = gcnew Bitmap(profilesRuntime[i]->getPhoto());
				}
				userLoggedInName = UserName->Text;
				LoggedIn->BringToFront();
				UserProfile->BringToFront();
				return;
			}
		}
		UnLogged->BringToFront();
	}
	//options menu
	private: System::Void More_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (MoreList->Width == 175 && MoreList->Height == 170) {
			MoreList->Width = 0;
			MoreList->Height = 0;
		}
		else {
			MoreList->Width = 175;
			MoreList->Height = 170;
		}
	}

	//a flag that indicates whether the contact is a chat or a group (1 for chat, 2 for group)
	private: int ContactCLicked;

	//click contact card
	private: System::Void Contact_Click(System::Object^ sender, System::EventArgs^ e) {
		ContactCLicked = 1;
		flowLayoutPanel2->Controls->Clear();
		LoggedIn->BringToFront();

		/*Loading the whole chat room including the messages and each user's information*/
		if(sender != nullptr){
			Card::MyUserControl^ tempCard = dynamic_cast<Card::MyUserControl^>(sender);
			AddGroupMembers->Visible = false;
			if(tempCard->Username != UserName->Text)
				UserName->Text = tempCard->Username;
			if(ProfilePic->BackgroundImage != tempCard->pictureBox9->BackgroundImage){
				ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				ProfilePic->BackgroundImage = tempCard->pictureBox9->BackgroundImage;
			}
			//storing the contact id and chat room id 
			msg_user_id = System::Int16::Parse(tempCard->userID->Text);
			msg_chat_id = System::Int16::Parse(tempCard->chatID->Text);
			db->Open();
			for each (ChatInfo ^ inf in infoRuntime) {
				if (inf->getUserID() == msg_user_id) {
					if (inf->getLast() != "0")
						seenlast->Text = "Last Seen: " + inf->getLast();
					else
						seenlast->Text = "";
					DateTime^ local = DateTime::Now;
					//storing the time of the last time the user has opened the chat room (required for group chat)
					cmd->CommandText = "UPDATE ChatRoomInfo set Last_Opened=@time WHERE User_ID_FK=@id";
					cmd->Parameters->AddWithValue("@time", local);
					cmd->Parameters->AddWithValue("@id", usersRuntime[userLoggedIn]->getID());
					cmd->ExecuteNonQuery();
					break;
				}
			}
			db->Close();
			
		}
		loadMessagesFromDB(msg_chat_id);
		
		for each (msg ^ message in msgsRuntime) {
			if(msgsRuntime.size() > 0){
				//checks if current message belongs to the logged in user or the other contact
				if (message->getUserIDFK() == usersRuntime[userLoggedIn]->getID()) {
					if (profilesRuntime[userLoggedIn]->getLogged() == 0) {
						//checks if current message is a text message
						if(message->getRec() == ""){
							MessageComponent::MyUserControl^ msgBox = gcnew MessageComponent::MyUserControl;
							msgBox->timelbl->Text = statusRuntime[message->getMsgID() -1]->getTime();
							msgBox->mssg->Text = message->getMsg();
							msgBox->seenicon->Visible = true;
							msgBox->user->Text = usersRuntime[userLoggedIn]->getFirst();
							msgBox->more->Click += gcnew System::EventHandler(this, &MyForm::msg_Menu);
							msgBox->msg_id->Text = message->getMsgID().ToString();
							//checking if message has been seen
							for each (msgStatus ^ state in statusRuntime) {
								if (state->getMsg_ID() == message->getMsgID()) {
									if (state->getSeen() == 1) {
										msgBox->seenicon->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\seen.png");
									}
								}
							}
							if (msgBox->Text->Length <= richTextBox7->Width)
								richTextBox7->Multiline = false;
							else
								richTextBox7->Multiline = true;
							flowLayoutPanel2->Controls->Add(msgBox);
							richTextBox7->Clear();
						}
						//if current message is a voice record
						else {
							RecAudioComponent::AudioControl^ Rec = gcnew RecAudioComponent::AudioControl;
							Rec->timelbl->Text = statusRuntime[message->getMsgID() - 1]->getTime();
							Rec->seenicon->Visible = true;
							Rec->user->Text = usersRuntime[userLoggedIn]->getFirst();
							Rec->more->Click += gcnew System::EventHandler(this, &MyForm::msg_Menu);
							Rec->PlayBtn->Click += gcnew System::EventHandler(this, &MyForm::Play_Rec);
							Rec->msg_id->Text = message->getMsgID().ToString();
							//checkin' record is seen or not
							for each (msgStatus ^ state in statusRuntime) {
								if (state->getMsg_ID() == message->getMsgID()) {
									if (state->getSeen() == 1) {
										Rec->seenicon->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\seen.png");
									}
								}
							}
							flowLayoutPanel2->Controls->Add(Rec);
							//loading each record's path
							db->Open();
							cmd->CommandText = "SELECT Msg_Record FROM Message WHERE Msg_ID=@id";
							cmd->Parameters->AddWithValue("@id", Rec->msg_id->Text);
							SQLiteDataReader^ dr = cmd->ExecuteReader();
							if (dr->Read()) {
								Rec->rec_path->Text = dr->GetString(0);
							}
							dr->Close();
							db->Close();
						}
					}
					else if (message->getUserIDFK() == msg_user_id) {
						if (message->getRec() == "") {
							MessageComponent::MyUserControl^ msgBox = gcnew MessageComponent::MyUserControl;
							for each (msgStatus ^ state in statusRuntime) {
								if (state->getMsg_ID() == message->getMsgID()) {
									state->setSeen(1);
								}
							}
							msgBox->timelbl->Text = statusRuntime[message->getMsgID() - 1]->getTime();
							msgBox->mssg->Text = message->getMsg();
							msgBox->user->Text = usersRuntime[msg_user_id - 1]->getFirst();
							msgBox->seenicon->Visible = false;
							msgBox->more->Click += gcnew System::EventHandler(this, &MyForm::msg_Menu);
							msgBox->msg_id->Text = message->getMsgID().ToString();
							if (msgBox->Text->Length <= richTextBox7->Width)
								richTextBox7->Multiline = false;
							else
								richTextBox7->Multiline = true;
							flowLayoutPanel2->Controls->Add(msgBox);
							richTextBox7->Clear();
						}
						else {
							RecAudioComponent::AudioControl^ Rec = gcnew RecAudioComponent::AudioControl;
							Rec->timelbl->Text = statusRuntime[message->getMsgID() - 1]->getTime();
							Rec->seenicon->Visible = true;
							Rec->user->Text = usersRuntime[userLoggedIn]->getFirst();
							Rec->more->Click += gcnew System::EventHandler(this, &MyForm::msg_Menu);
							Rec->PlayBtn->Click += gcnew System::EventHandler(this, &MyForm::Play_Rec);
							Rec->msg_id->Text = message->getMsgID().ToString();
							for each (msgStatus ^ state in statusRuntime) {
								if (state->getMsg_ID() == message->getMsgID()) {
									if (state->getSeen() == 1) {
										Rec->seenicon->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\seen.png");
									}
								}
							}
							flowLayoutPanel2->Controls->Add(Rec);
							db->Open();
							cmd->CommandText = "SELECT Msg_Record FROM Message WHERE Msg_ID=@id";
							cmd->Parameters->AddWithValue("@id", Rec->msg_id->Text);
							SQLiteDataReader^ dr = cmd->ExecuteReader();
							if (dr->Read()) {
								Rec->rec_path->Text = dr->GetString(0);
							}
							dr->Close();
							db->Close();
							profilesRuntime[userLoggedIn]->setLogged(1);
						}
					}
				}
			}
		}
	}
	//add new contact
	private: System::Void NewChat_Click(System::Object^ sender, System::EventArgs^ e) {
		db->Open();
		ChatRoom^ ch = gcnew ChatRoom;
		MyForm2^ frm2 = gcnew MyForm2();
		frm2->StartPosition = FormStartPosition::CenterScreen;
		frm2->ShowDialog();
		for (int i = 0; i < usersRuntime.size(); i++) {
			if (usersRuntime[i]->getPhone() == frm2->getContact()) {
				ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				Card::MyUserControl^ contact = gcnew Card::MyUserControl();
				contact->Username = usersRuntime[i]->getFirst() + " " + usersRuntime[i]->getLast();
				if (profilesRuntime[i]->getPhoto() == "" || profilesRuntime[i]->getVis() == 0)
					contact->pictureBox9->BackgroundImage = contact->pictureBox9->BackgroundImage;
				else
					contact->pictureBox9->BackgroundImage = gcnew Bitmap(profilesRuntime[i]->getPhoto());
				contact->userID->Text = usersRuntime[i]->getID().ToString();
				contact->Click += gcnew System::EventHandler(this, &MyForm::Contact_Click);
				ch->setCHID(chat.size() + 1);
				ch->setCHType(2);
				chat.push_back(ch);
				contact->chatID->Text = ch->getCHID().ToString();
				contact->chatType->Text = ch->getCHType().ToString();
				flowLayoutPanel1->Controls->Add(contact);
				cmd->CommandText = "INSERT INTO UserContacts VALUES(@user, @contact)";
				cmd->Parameters->AddWithValue("@user", usersRuntime[userLoggedIn]->getID());
				cmd->Parameters->AddWithValue("@contact", usersRuntime[i]->getID());
				cmd->ExecuteNonQuery();
				cmd->CommandText = "INSERT INTO UserContacts VALUES(@user, @contact)";
				cmd->Parameters->AddWithValue("@user", usersRuntime[i]->getID());
				cmd->Parameters->AddWithValue("@contact", usersRuntime[userLoggedIn]->getID());
				cmd->ExecuteNonQuery();
				cmd->CommandText = "INSERT INTO ChatRoom VALUES(@CH_ID, @CH_Type)";
				cmd->Parameters->AddWithValue("@CH_ID", ch->getCHID());
				cmd->Parameters->AddWithValue("@CH_Type", ch->getCHType());
				cmd->ExecuteNonQuery();
				cmd->CommandText = "INSERT INTO ChatRoomInfo VALUES(0, @User_ID_FK, @CH_ID_FK, 0)";
				cmd->Parameters->AddWithValue("@CH_ID_FK", ch->getCHID());
				cmd->Parameters->AddWithValue("@User_ID_FK", usersRuntime[userLoggedIn]->getID());
				cmd->ExecuteNonQuery();
				cmd->CommandText = "INSERT INTO ChatRoomInfo VALUES(0, @User_ID_FK, @CH_ID_FK, 0)";
				cmd->Parameters->AddWithValue("@CH_ID_FK", ch->getCHID());
				cmd->Parameters->AddWithValue("@User_ID_FK", usersRuntime[i]->getID());
				cmd->ExecuteNonQuery();
				cmd->CommandText = "INSERT INTO User_ChatRoom VALUES(@User_ID_FK, @CH_ID_FK)";
				cmd->Parameters->AddWithValue("@CH_ID_FK", ch->getCHID());
				cmd->Parameters->AddWithValue("@User_ID_FK", usersRuntime[userLoggedIn]->getID());
				cmd->ExecuteNonQuery();
				cmd->CommandText = "INSERT INTO User_ChatRoom VALUES(@User_ID_FK, @CH_ID_FK)";
				cmd->Parameters->AddWithValue("@CH_ID_FK", ch->getCHID());
				cmd->Parameters->AddWithValue("@User_ID_FK", usersRuntime[i]->getID());
				cmd->ExecuteNonQuery();
				MessageBox::Show(contact->Username + " Added Successfully!");
				db->Close();;
				return;
			}
		}
		db->Close();
		for each (User ^ us in usersRuntime) {
			if (us->getPhone() == frm2->getContact())
				return;
		}
		MessageBox::Show("Contact Doesn't Exist!");
	}

	//register form
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		User^ user = gcnew User();
		Profile^ profile = gcnew Profile();
		user->setID(usersRuntime.size()+1);
		user->setFirst(richTextBox6->Text);
		user->setLast(richTextBox5->Text);
		user->setPhone(richTextBox3->Text);
		user->setPass(textBox1->Text);
		if (find(users.begin(), users.end(), user) != users.end())
			MessageBox::Show("This User Already Exists, Try Logging in");
		else{
			usersRuntime.push_back(user);
			LoginBox->BringToFront();
			profile->setID(usersRuntime.size());
			profile->setDesc("");
			profile->setLogged(0);
			profile->setPhoto("");
			profile->setVis(1);
			profilesRuntime.push_back(profile);
		}
		richTextBox6->Clear();
		richTextBox5->Clear();
		textBox1->Clear();
		richTextBox3->Clear();
		MessageBox::Show("Account Created Successfully!");
 	}
	private: System::Void setLogged(int id, int lg) {
		db->Open();
		cmd->CommandText = "UPDATE User set Last_Logged=@lg where User_ID=@id";
		cmd->Parameters->AddWithValue("@id", id);
		cmd->Parameters->AddWithValue("@lg", lg);
		cmd->ExecuteNonQuery();
		db->Close();
	}
	//login button
	private: System::Void Login_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {
		for(int i = 0; i < usersRuntime.size(); i++) {
			if (usersRuntime[i]->getPhone() == richTextBox1->Text && usersRuntime[i]->getPass() == richTextBox2->Text) {
				if(profilesRuntime[i]->getLogged() == 0){
					setLogged(usersRuntime[i]->getID(), 1);
					if (profilesRuntime[i]->getVis() == 0)
						radioButton2->Checked = true;
					userLoggedIn = i;
					this->contacts.clear();
					this->loadContacts(usersRuntime[i]->getID());
					for (int j = 0; j < contacts.size(); j++) {
						if (contacts.size() == 0)
							continue;
						ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
						Card::MyUserControl^ contact = gcnew Card::MyUserControl();
						contact->Username = usersRuntime[contacts[j]-1]->getFirst() + " " + usersRuntime[contacts[j]-1]->getLast();
						if (profilesRuntime[contacts[j]-1]->getPhoto() == "" || profilesRuntime[contacts[j]-1]->getVis() == 0)
							contact->pictureBox9->BackgroundImage = contact->pictureBox9->BackgroundImage;
						else
							contact->pictureBox9->BackgroundImage = gcnew Bitmap(profilesRuntime[contacts[j]-1]->getPhoto());
						contact->userID->Text = usersRuntime[contacts[j]-1]->getID().ToString();
						for each (UserChatRoom^ uchat in user_chatroom) {
							if (uchat->getUserID() == usersRuntime[userLoggedIn]->getID() && uchat->getTaken()==0) {
								contact->chatID->Text = uchat->getCHID().ToString();
								contact->chatType->Text = chat[uchat->getCHID() - 1]->getCHType().ToString();
								uchat->setTaken(1);
								break;
							}
						}
						contact->Click += gcnew System::EventHandler(this, &MyForm::Contact_Click);
						flowLayoutPanel1->Controls->Add(contact);
						profilesRuntime[i]->setLogged(1);
					}
					for (int k = 0; k < groupChats.size(); k++) {
						for each (ChatInfo ^ info in infoRuntime) {
							if (groupChats[k]->getID() == info->getID()) {
								if (info->getUserID() == usersRuntime[userLoggedIn]->getID()) {
									Card::MyUserControl^ contact = gcnew Card::MyUserControl();
									contact->Username = groupChats[k]->getName();
									if (groupChats[k]->getPic() == "")
										contact->pictureBox9->BackgroundImage = contact->pictureBox9->BackgroundImage;
									else
										contact->pictureBox9->BackgroundImage = gcnew Bitmap(groupChats[k]->getPic());
									contact->chatID->Text = groupChats[k]->getID().ToString();
									contact->Click += gcnew System::EventHandler(this, &MyForm::Group_Click);
									flowLayoutPanel1->Controls->Add(contact);
								}
							}
						}
					}
				}
				UserName->Text = usersRuntime[i]->getFirst() + " " + usersRuntime[i]->getLast();
				Description->Text = profilesRuntime[i]->getDesc();
				if(profilesRuntime[i]->getPhoto() != ""){ 
					userLoggedInPic = profilesRuntime[i]->getPhoto();
					ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
					ProfilePic->BackgroundImage = gcnew Bitmap(profilesRuntime[i]->getPhoto());
	 			}
				userLoggedInName = UserName->Text;
				LoggedIn->BringToFront();
				UserProfile->BringToFront();
				return;
			}
		}
		MessageBox::Show("Login Failed, Erorr!");
	}
	//set last seen
	private: System::Void Lastseen() {
		int Hour, Seconds;
		String^ zone;
		String^ Minutes;
		DateTime localDate = DateTime::Now;
		Hour = localDate.Hour;
		Minutes = localDate.Minute.ToString();
		Seconds = localDate.Second;
		if (localDate.Hour == 0) {
			Hour = 12;
			zone = "AM";
		}
		else if (localDate.Hour >= 1 && localDate.Hour < 12) {
			Hour = localDate.Hour;
			zone = "AM";
		}
		else if (localDate.Hour >= 13 && localDate.Hour <= 23) {
			Hour = localDate.Hour - 12;
			zone = "PM";
		}
		if (localDate.Minute >= 0 && localDate.Minute <= 9)
			Minutes = "0" + localDate.Minute.ToString();
		for each (ChatInfo ^ inf in infoRuntime) {
			if (inf->getUserID() == usersRuntime[userLoggedIn]->getID()) {
				inf->setLastSeen(Hour.ToString() + ":" + Minutes + ":" + Seconds + zone);
			}
		}
		db->Open();
		cmd->CommandText = "UPDATE ChatRoomInfo set Last_Seen=@time WHERE User_ID_FK=@id";
		cmd->Parameters->AddWithValue("@time", Hour.ToString() + ":" + Minutes + ":" + Seconds + zone);
		cmd->Parameters->AddWithValue("@id", usersRuntime[userLoggedIn]->getID());
		cmd->ExecuteNonQuery();
		db->Close();
	}
	//log out from this user
	private: System::Void LogOutBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		storeStatusIntoDB();
		storeUsersIntoDB();
		storeProfilesIntoDB();
		storestoriesIntoDB();
		Lastseen();
		setLogged(usersRuntime[userLoggedIn]->getID(), 0);
		Application::Restart();
		UnLogged->BringToFront();
	}
	private: System::Void LogOutLb_Click(System::Object^ sender, System::EventArgs^ e) {
		LogOutBtn_Click(sender, e);
	}
	//Edit Profile and save changes
	bool isEdited = false;
	private: System::Void Edit_Click(System::Object^ sender, System::EventArgs^ e) {
		int vis;
		if (!isEdited) {
			Edit->Text = "Save";
			isEdited = true;
			Description->ReadOnly = false;
			Description->BackColor = System::Drawing::Color::White;
			Description->Width += 60;
			Description->Height += 30;
			Description->ForeColor = System::Drawing::Color::Black;
		}
		else {
			Description->Text = Description->Text;
			Description->Width -= 60;
			Description->Height -= 30;
			Description->BackColor = System::Drawing::Color::FromArgb(29, 47, 47);
			Description->ReadOnly = true;
			Description->ForeColor = System::Drawing::Color::White;
			isEdited = false;
			Edit->Text = "Edit";
			if (radioButton1->Checked == true)
				vis = 1;
			else
				vis = 0;
			profilesRuntime[userLoggedIn]->setDesc(Description->Text);
			profilesRuntime[userLoggedIn]->setVis(vis);
		}
	}
	//hover effects for all register text boxes
	private: System::Void richTextBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		if(richTextBox1->Text == "+20")
			richTextBox1->Text = "";
	}
	private: System::Void richTextBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		if(richTextBox2->Text == "At Least 8 Characters")
			richTextBox2->Text = "";
	}
	private: System::Void richTextBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->Text == "") {
			richTextBox1->Text = "+20";
		}
	}
	private: System::Void richTextBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox2->Text == "") {
			richTextBox2->Text = "At Least 8 Characters";
		}
	}
	private: System::Void richTextBox6_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox6->Text == "First Name")
			richTextBox6->Text = "";
	}
	private: System::Void richTextBox5_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox5->Text == "Last Name")
			richTextBox5->Text = "";
	}
	private: System::Void richTextBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox3->Text == "+20")
			richTextBox3->Text = "";
	}
	private: System::Void richTextBox6_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox6->Text == "") {
			richTextBox6->Text = "First Name";
		}
	}
	private: System::Void richTextBox5_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox5->Text == "") {
			richTextBox5->Text = "Last Name";
		}
	}
	private: System::Void richTextBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox3->Text == "") {
			richTextBox3->Text = "+20";
		}
	}
	private: System::Void richTextBox7_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox7->Text == "Enter Your message")
			richTextBox7->Text = "";
	}
	private: System::Void richTextBox7_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox7->Text == "") {
			richTextBox7->Text = "Enter Your message";
		}
	}
	//Button to go to Profile
	private: System::Void Profile_btn_Click(System::Object^ sender, System::EventArgs^ e) { 
		seenlast->Text = "";
		UserName->Text = userLoggedInName;
		if (profilesRuntime[userLoggedIn]->getPhoto() == "")
			ProfilePic->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\account.png");
		else
			ProfilePic->BackgroundImage = gcnew Bitmap(userLoggedInPic);
		MoreList->Width = 0;
		MoreList->Height = 0;
		UserProfile->BringToFront();
	}
	//change user profile picture
	bool isSaved = false;
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ open = gcnew OpenFileDialog();

		open->InitialDirectory = "C://";
		open->Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.bmp";
		open->FilterIndex = 2;
		open->RestoreDirectory = true;
		if(!isSaved){
			if (open->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				ProfilePic->BackgroundImage = gcnew Bitmap(open->FileName);
				button6->Text = "Save Photo To Profile";
				label3->Text = open->FileName->ToString();
				userLoggedInPic = open->FileName;
				isSaved = true;
			}
		}
		else {
			profilesRuntime[userLoggedIn]->setPhoto(label3->Text);
			button6->Text = "Edit Profile Photo";
			isSaved = false;
		}
	}
	//closes entire app
	private: System::Void CLose_Click(System::Object^ sender, System::EventArgs^ e) {
		storeUsersIntoDB();
		storeProfilesIntoDB();
		storeStatusIntoDB();
		storestoriesIntoDB();
		Lastseen();
		profilesRuntime.clear();
		usersRuntime.clear();
		Environment::Exit(0);
	}
	//maximize entire app to full screen
	private: System::Void Maximize_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->WindowState == FormWindowState::Maximized) {
			this->WindowState = FormWindowState::Normal;
			this->StartPosition = FormStartPosition::CenterScreen;
		}
		else {
			this->WindowState = FormWindowState::Maximized;
		}
	}
	//minimizes entire app
	public: System::Void Minimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	//switch to login form label
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
		LoginBox->BringToFront();
	}
	//switch to login form button
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		LoginBox->BringToFront();
	}
	//switch to register form label
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
		RegBox->BringToFront();
	}
	//switch to register form button
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		RegBox->BringToFront();
	}
	//create messages
	private: System::Void richTextBox7_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		int Hour, Seconds;
		String^ zone;
		String^ Minutes;
		if (e->KeyCode == Keys::Enter && richTextBox7->Text != "") {
			MessageComponent::MyUserControl^ msgBox = gcnew MessageComponent::MyUserControl;
			DateTime localDate = DateTime::Now;
			Hour = localDate.Hour;
			Minutes = localDate.Minute.ToString();
			Seconds = localDate.Second;
			if (localDate.Hour == 0){
				Hour = 12;
				zone = "AM";
			}
			else if (localDate.Hour >= 1 && localDate.Hour < 12){
				Hour = localDate.Hour;
				zone = "AM";
			}
			else if (localDate.Hour >= 13 && localDate.Hour <= 23){
				Hour = localDate.Hour - 12;
				zone = "PM";
			}
			if (localDate.Minute >= 0 && localDate.Minute <= 9)
				Minutes = "0" + localDate.Minute.ToString();
			msgBox->timelbl->Text = Hour.ToString() + ":" + Minutes + " " + zone;
			msgBox->mssg->Text = richTextBox7->Text;
			msgBox->user->Text = usersRuntime[userLoggedIn]->getFirst();
			msgBox->Margin = System::Windows::Forms::Padding(0, 0, 10, 10);
			msgBox->more->Click += gcnew System::EventHandler(this, &MyForm::msg_Menu);

			if(msgBox->Text->Length <= richTextBox7->Width)
				richTextBox7->Multiline = false;
			else
				richTextBox7->Multiline = true;
			msg^ message = gcnew msg;
			message->setUserID(usersRuntime[userLoggedIn]->getID());
			message->setChatID(msg_chat_id);
			message->setMsg(msgBox->mssg->Text);
			db->Open();
			cmd->CommandText = "SELECT * FROM messagesCount";
			SQLiteDataReader^ dr = cmd->ExecuteReader();
			if (dr->Read())
				message->setMsgID(dr->GetInt32(0));
			dr->Close();
			cmd->CommandText = "UPDATE messagesCount set count=@cnt WHERE TRUE";
			cmd->Parameters->AddWithValue("@cnt", message->getMsgID() + 1);
			cmd->ExecuteNonQuery();
			db->Close();
			msgBox->msg_id->Text = message->getMsgID().ToString();
			flowLayoutPanel2->Controls->Add(msgBox);
			richTextBox7->Clear();

			msgsRuntime.push_back(message);

			msgStatus^ stat = gcnew msgStatus;
			stat->setDate(localDate.ToString());
			stat->setTime(Hour.ToString() + ":" + Minutes + ":" + Seconds.ToString() + " " + zone);
			stat->setMsg_ID(message->getMsgID());
			stat->setSeen(0);
			statusRuntime.push_back(stat);
			db->Open();
			cmd->CommandText = "INSERT INTO Message VALUES(@msgid, @text, @chatID, @userID, @rec)";
			cmd->Parameters->AddWithValue("@msgid", message->getMsgID());
			cmd->Parameters->AddWithValue("@text", message->getMsg());
			cmd->Parameters->AddWithValue("@userID", message->getUserIDFK());
			cmd->Parameters->AddWithValue("@chatID", message->getChatID());
			cmd->Parameters->AddWithValue("@rec", "");
			cmd->ExecuteNonQuery();
			cmd->CommandText = "INSERT INTO Status VALUES(@Date, @Time, @seen, @msgID)";
			cmd->Parameters->AddWithValue("@Date", stat->getDate());
			cmd->Parameters->AddWithValue("@Time", stat->getTime());
			cmd->Parameters->AddWithValue("@seen", stat->getSeen());
			cmd->Parameters->AddWithValue("@msgID", stat->getMsg_ID());
			cmd->ExecuteNonQuery();
			db->Close();
		}
	}
	//delete messages
	private: System::Void msg_Menu(System::Object^ sender, System::EventArgs^ e) {
		if (static_cast<System::Windows::Forms::Button^>(sender)->Parent->ToString()->Contains("Rec")) {
			RecAudioComponent::AudioControl^ temp =
				dynamic_cast<RecAudioComponent::AudioControl^>(static_cast<System::Windows::Forms::Button^>(sender)->Parent);
			for each (msgStatus ^ state in statusRuntime) {
				if (state->getMsg_ID() == System::Int32::Parse(temp->msg_id->Text)) {
					if (state->getSeen() != 1) {
						if (flowLayoutPanel2->Controls->Contains(temp))
							flowLayoutPanel2->Controls->Remove(temp);
						statusRuntime.erase(statusRuntime.begin() + state->getMsg_ID() - 1);
						msgsRuntime.erase(msgsRuntime.begin() + state->getMsg_ID() - 1);
						db->Open();
						cmd->CommandText = "DELETE FROM Status WHERE Msg_ID_FK=@id";
						cmd->Parameters->AddWithValue("@id", System::Int32::Parse(temp->msg_id->Text));
						cmd->ExecuteNonQuery();
						cmd->CommandText = "DELETE FROM Message WHERE Msg_ID=@id";
						cmd->Parameters->AddWithValue("@id", System::Int32::Parse(temp->msg_id->Text));
						cmd->ExecuteNonQuery();
						cmd->CommandText = "UPDATE MessagesCount set count=@cnt WHERE TRUE";
						cmd->Parameters->AddWithValue("@cnt", msgsRuntime.size()+1);
						cmd->ExecuteNonQuery();
						db->Close();
					}
					else
						MessageBox::Show("Message Can't be deleted right now!");
					return;
				}
			}
		}
		else{
			MessageComponent::MyUserControl^ temp = 
				dynamic_cast<MessageComponent::MyUserControl^>(static_cast<System::Windows::Forms::Button^>(sender)->Parent);
			for each (msgStatus ^ state in statusRuntime) {
				if (state->getMsg_ID() == System::Int32::Parse(temp->msg_id->Text)) {
					if (state->getSeen() != 1) {
						if (flowLayoutPanel2->Controls->Contains(temp))
							flowLayoutPanel2->Controls->Remove(temp);
						statusRuntime.erase(statusRuntime.begin() + state->getMsg_ID() - 1);
						msgsRuntime.erase(msgsRuntime.begin() + state->getMsg_ID() - 1);
						db->Open();
						cmd->CommandText = "DELETE FROM Status WHERE Msg_ID_FK=@id";
						cmd->Parameters->AddWithValue("@id", System::Int32::Parse(temp->msg_id->Text));
						cmd->ExecuteNonQuery();
						cmd->CommandText = "DELETE FROM Message WHERE Msg_ID=@id";
						cmd->Parameters->AddWithValue("@id", System::Int32::Parse(temp->msg_id->Text));
						cmd->ExecuteNonQuery();
						cmd->CommandText = "UPDATE MessagesCount set count=@cnt WHERE TRUE";
						cmd->Parameters->AddWithValue("@cnt", msgsRuntime.size()+1);
						cmd->ExecuteNonQuery();
						db->Close();

					}
					else
						MessageBox::Show("Message Can't be deleted right now!");
					return;
				}
			}
		}
	}
	//contact profile menu
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((contactDesc->Width == 408&& contactDesc->Height == 330) || (GroupMembers->Width == 270 && GroupMembers->Height == 300)) {
			contactDesc->Width = 0;
			contactDesc->Height = 0;
			GroupMembers->Width = 0;
			GroupMembers->Height = 0;
		}
		else if(ContactCLicked == 1) {
			contactDesc->BringToFront();
			contactDesc->Width = 408;
			contactDesc->Height = 330;
			for each (Profile^ pro in profilesRuntime) {
				if (pro->getID() == msg_user_id) {
					DescPic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
					if(pro->getVis() == 1){
						DescText->Text = pro->getDesc();
						if(pro->getPhoto() == "")
							DescPic->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\account.png");
						else
							DescPic->BackgroundImage = gcnew Bitmap(pro->getPhoto());
						break;
					}
					else {
						DescPic->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\account.png");
						DescText->Text = "This User hides his information";
					}
				}

			}
			for each (User^ user in usersRuntime) {
				if (user->getID() == msg_user_id) {
					DescName->Text = user->getFirst() + " " + user->getLast();
					DescPhone->Text = user->getPhone();
					break;
				}
			}
		}
		else if (ContactCLicked == 2) {
			GroupMembers->BringToFront();
			GroupMembers->Controls->Clear();
			GroupMembers->Width = 270;
			GroupMembers->Height = 300;
			System::Windows::Forms::Label^ title = gcnew System::Windows::Forms::Label;
			title->Text = "Members";
			title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));;
			title->ForeColor = System::Drawing::Color::White;
			title->Margin = System::Windows::Forms::Padding(100, 10, 0, 0);
			GroupMembers->Controls->Add(title);
			
			db->Open();
			cmd->CommandText = "SELECT User_ID_FK FROM User_ChatRoom WHERE CH_ID_FK=@chat";
			cmd->Parameters->AddWithValue("@chat", msg_chat_id);
			SQLiteDataReader^ dr = cmd->ExecuteReader();
			while(dr->Read()) {
				ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				Card::MyUserControl^ contact = gcnew Card::MyUserControl();
				contact->Username = usersRuntime[dr->GetInt32(0)-1]->getFirst() + " " + usersRuntime[dr->GetInt32(0) - 1]->getLast();
				if (profilesRuntime[dr->GetInt32(0) - 1]->getPhoto() == "")
					contact->pictureBox9->BackgroundImage = contact->pictureBox9->BackgroundImage;
				else
					contact->pictureBox9->BackgroundImage = gcnew Bitmap(profilesRuntime[dr->GetInt32(0) - 1]->getPhoto());
				contact->userID->Text = usersRuntime[dr->GetInt32(0) - 1]->getID().ToString();
				contact->Width = 200;
				contact->Margin = System::Windows::Forms::Padding(35, 10, 0, 0);
				GroupMembers->Controls->Add(contact);
			}
			dr->Close();
			db->Close();
		}
	}
	//contacts stories
	private: System::Void Contact_story(System::Object^ sender, System::EventArgs^ e) {
		button18->Visible = false;
		Card::MyUserControl^ tempCard = dynamic_cast<Card::MyUserControl^>(sender);
		storyText->Size = System::Drawing::Size(0, 0);
		PicStory->Size = System::Drawing::Size(0, 0);
		storySeen->Size = System::Drawing::Size(0, 0);
		panel4->Size = System::Drawing::Size(780, 500);
		pictureBox3->Visible = false;
		for (int i = 0; i < storiesRuntime.size(); i++) {
			if (storiesRuntime[i]->getID() == System::Int16::Parse(tempCard->userID->Text)){
				DateTime^ date = DateTime::Now;
				long long ticks = date->Ticks - storiesRuntime[i]->getRealTime()->Ticks;
				if (ticks >= 864000000000) {
					storiesRuntime.erase(storiesRuntime.begin() + i);
					db->Open();
					cmd->CommandText = "DELETE FROM StorySeen WHERE Story_ID_FK=@id";
					cmd->Parameters->AddWithValue("@Story_ID_FK", storiesRuntime[i]->getStoryID());
					cmd->ExecuteNonQuery();
					cmd->CommandText = "DELETE FROM Story WHERE Story_ID=@id";
					cmd->Parameters->AddWithValue("@id", storiesRuntime[i]->getStoryID());
					cmd->ExecuteNonQuery();
					db->Close();
					continue;
				}
				StoryTime->Text = "Time: " + storiesRuntime[i]->getTime();
				if (storiesRuntime[i]->getImage() == "") {
					if (pictureBox1->Width != 0)
						pictureBox1->Size = System::Drawing::Size(0, 0);
					richTextBox9->Size = System::Drawing::Size(360, 200);
					richTextBox9->Text = storiesRuntime[i]->getText();
				}
				else {
					if (richTextBox9->Width != 0)
						richTextBox9->Size = System::Drawing::Size(0, 0);
					pictureBox1->Size = System::Drawing::Size(360, 200);
					pictureBox1->BackgroundImage = gcnew Bitmap(storiesRuntime[i]->getImage());
				}
				firstStory = i;
				clickedUser = System::Int16::Parse(tempCard->userID->Text);
				db->Open();
				cmd->CommandText = "SELECT * FROM StorySeen WHERE Story_ID_FK=@story AND User_ID_FK=@id";
				cmd->Parameters->AddWithValue("@story", storiesRuntime[i]->getStoryID());
				cmd->Parameters->AddWithValue("@id", usersRuntime[userLoggedIn]->getID());
				SQLiteDataReader^ dr = cmd->ExecuteReader();
				if (dr->Read()){
					dr->Close();
					db->Close();
					return;
				}
				else{
					int Hour, Seconds;
					String^ zone;
					String^ Minutes;
					DateTime localDate = DateTime::Now;
					Hour = localDate.Hour;
					Minutes = localDate.Minute.ToString();
					Seconds = localDate.Second;
					if (localDate.Hour == 0) {
						Hour = 12;
						zone = "AM";
					}
					else if (localDate.Hour >= 1 && localDate.Hour < 12) {
						Hour = localDate.Hour;
						zone = "AM";
					}
					else if (localDate.Hour >= 13 && localDate.Hour <= 23) {
						Hour = localDate.Hour - 12;
						zone = "PM";
					}
					if (localDate.Minute >= 0 && localDate.Minute <= 9)
						Minutes = "0" + localDate.Minute.ToString();

					dr->Close();
					cmd->CommandText = "INSERT INTO StorySeen VALUES(@story, @id, @time)";
					cmd->Parameters->AddWithValue("@story", storiesRuntime[i]->getStoryID());
					cmd->Parameters->AddWithValue("@id", usersRuntime[userLoggedIn]->getID());
					cmd->Parameters->AddWithValue("@time", Hour.ToString() + ":" + Minutes + ":" + Seconds.ToString() + " " + zone);
					cmd->ExecuteNonQuery();
					db->Close();
				}
			}
		}
		panel4->Size = System::Drawing::Size(0, 0);
		MessageBox::Show("No Stories found");
	}
	//story button
	private: System::Void Status_Click(System::Object^ sender, System::EventArgs^ e) {
		button18->Visible = false;
		storyText->Size = System::Drawing::Size(0, 0);
		PicStory->Size = System::Drawing::Size(0, 0);
		panel4->Size = System::Drawing::Size(0, 0);
		storySeen->Size = System::Drawing::Size(0, 0);
		StoryPanel->BringToFront();
		this->contacts.clear();
		StoriesPn->Controls->Clear();
		this->loadContacts(usersRuntime[userLoggedIn]->getID());
		for (int j = 0; j <= contacts.size(); j++) {
			if (j == userLoggedIn || contacts.size() == 0 || find(contacts.begin(), contacts.end(), usersRuntime[j]->getID()) == contacts.end())
				continue;
			ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			Card::MyUserControl^ contact = gcnew Card::MyUserControl();
			contact->Width = 250;
			contact->Username = usersRuntime[j]->getFirst() + " " + usersRuntime[j]->getLast();
			if (profilesRuntime[j]->getPhoto() == "" || profilesRuntime[j]->getVis() == 0)
				contact->pictureBox9->BackgroundImage = contact->pictureBox9->BackgroundImage;
			else
				contact->pictureBox9->BackgroundImage = gcnew Bitmap(profilesRuntime[j]->getPhoto());
			contact->userID->Text = usersRuntime[j]->getID().ToString();
			contact->Click += gcnew System::EventHandler(this, &MyForm::Contact_story);
			StoriesPn->Controls->Add(contact);
		}
	}
	private: bool seenClicked = false;
	private: bool textStory = false;
	private: bool picStory = false;
	//seen story
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		storyText->Size = System::Drawing::Size(0, 0);
		PicStory->Size = System::Drawing::Size(0, 0);
		if(!seenClicked){
			panel4->Size = System::Drawing::Size(0, 0);
			storySeen->Size = System::Drawing::Size(360, 400);
			storySeen->BringToFront();
			seenClicked = true;
		}
		else if (seenClicked) {
			storySeen->Size = System::Drawing::Size(0, 0);
			panel4->Size = System::Drawing::Size(780, 500);
			storySeen->SendToBack();
			seenClicked = false;
		}
	}
	//add new text story
	private: System::Void TextStory_Click(System::Object^ sender, System::EventArgs^ e) {
		PicStory->Size = System::Drawing::Size(0, 0);
		panel4->Size = System::Drawing::Size(0, 0);
		storySeen->Size = System::Drawing::Size(0, 0);
		storyText->Size = System::Drawing::Size(757, 452);
		StoryPanel->BringToFront();
		textStory = true;
		picStory = false;
	}
	//add new picture story
	private: System::Void ImageStory_Click(System::Object^ sender, System::EventArgs^ e) {
		storyText->Size = System::Drawing::Size(0, 0);
		panel4->Size = System::Drawing::Size(0,0);
		storySeen->Size = System::Drawing::Size(0, 0);
		PicStory->Size = System::Drawing::Size(570, 300);
		StoryPanel->BringToFront();
		textStory = false;
		picStory = true;
	}
	//choose picture for picture story
	private: String^ imagePath;
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ open = gcnew OpenFileDialog();
		
		open->InitialDirectory = "C://";
		open->Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.bmp";
		open->FilterIndex = 2;
		open->RestoreDirectory = true;
		if (open->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			StoryPic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			StoryPic->BackgroundImage = gcnew Bitmap(open->FileName);
			imagePath = open->FileName;
		}
	}
	//add picture story to current stories
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ zone;
		DateTime localDate = DateTime::Now;
		String^ Minutes = localDate.Minute.ToString();
		int Hour, Seconds = localDate.Second;
		if (localDate.Hour == 0) {
			Hour = 12;
			zone = "AM";
		}
		else if (localDate.Hour >= 1 && localDate.Hour < 12) {
			Hour = localDate.Hour;
			zone = "AM";
		}
		else if (localDate.Hour >= 13 && localDate.Hour <= 23) {
			Hour = localDate.Hour - 12;
			zone = "PM";
		}
		if (localDate.Minute >= 0 && localDate.Minute <= 9)
			Minutes = "0" + localDate.Minute.ToString();
		Story^ story = gcnew Story;
		story->setID(usersRuntime[userLoggedIn]->getID());
		story->setText("");
		story->setTime(Hour.ToString() + ":" + Minutes + " " + zone);
		story->setImage(imagePath);
		story->setrealTime(localDate);
		storiesRuntime.push_back(story);
		StoryPic->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\account.png");
	}
	//add text story to current stories
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		Story^ story = gcnew Story;
		story->setID(usersRuntime[userLoggedIn]->getID());
		story->setText(richTextBox8->Text);
		richTextBox8->Clear();
		String^ zone;
		DateTime localDate = DateTime::Now;
		String^ Minutes = localDate.Minute.ToString();
		int Hour, Seconds = localDate.Second;
		if (localDate.Hour == 0) {
			Hour = 12;
			zone = "AM";
		}
		else if (localDate.Hour >= 1 && localDate.Hour < 12) {
			Hour = localDate.Hour;
			zone = "AM";
		}
		else if (localDate.Hour >= 13 && localDate.Hour <= 23) {
			Hour = localDate.Hour - 12;
			zone = "PM";
		}
		if (localDate.Minute >= 0 && localDate.Minute <= 9)
			Minutes = "0" + localDate.Minute.ToString();

		story->setTime(Hour.ToString() + ":" + Minutes + ":" + Seconds + " " + zone);
		story->setrealTime(localDate);
		story->setImage("");
		storiesRuntime.push_back(story);
	}
	//go to user profile
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		LoggedIn->BringToFront();
		UserProfile->BringToFront();
	}
	//current user stories
	private: int firstStory;
	private: System::Void userStories_Click(System::Object^ sender, System::EventArgs^ e) {
		button18->Visible = true;
		storyText->Size = System::Drawing::Size(0, 0);
		PicStory->Size = System::Drawing::Size(0, 0);
		panel4->Size = System::Drawing::Size(780, 500);
		pictureBox3->Visible = false;
		for (int i = 0; i < storiesRuntime.size(); i++) {
			if (storiesRuntime[i]->getID() == usersRuntime[userLoggedIn]->getID()) {
				DateTime^ date = DateTime::Now;
				long long ticks = date->Ticks - storiesRuntime[i]->getRealTime()->Ticks;
				if (ticks >= 864000000000 && storiesRuntime.size() > 0) {
					storiesRuntime.erase(storiesRuntime.begin() + i);
					db->Open();
					cmd->CommandText = "DELETE FROM StorySeen WHERE Story_ID_FK=@id";
					cmd->Parameters->AddWithValue("@Story_ID_FK", storiesRuntime[i]->getStoryID());
					cmd->ExecuteNonQuery();
					cmd->CommandText = "DELETE FROM Story WHERE Story_ID=@id";
					cmd->Parameters->AddWithValue("@id", storiesRuntime[i]->getStoryID());
					cmd->ExecuteNonQuery();
					db->Close();
					continue;
				}
				StoryTime->Text = "Time: " + storiesRuntime[i]->getTime();
				if (storiesRuntime[i]->getImage() == ""){
					if (pictureBox1->Width != 0)
						pictureBox1->Size = System::Drawing::Size(0, 0);
					richTextBox9->Size = System::Drawing::Size(360, 200);
					richTextBox9->Text = storiesRuntime[i]->getText();
				}
				else{
					if (richTextBox9->Width != 0)
						richTextBox9->Size = System::Drawing::Size(0, 0);
					pictureBox1->Size = System::Drawing::Size(360, 200);
					pictureBox1->BackgroundImage = gcnew Bitmap(storiesRuntime[i]->getImage());
				}
				firstStory = i;
				clickedUser = usersRuntime[userLoggedIn]->getID();
				loadSeenList(storiesRuntime[i]->getStoryID());
				storySeen->Controls->Clear();
				for each(int k in seenlist) {
					ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
					Card::MyUserControl^ contact = gcnew Card::MyUserControl();
					contact->Username = usersRuntime[k-1]->getFirst() + " " + usersRuntime[k - 1]->getLast();
					if (profilesRuntime[k - 1]->getPhoto() == "" || profilesRuntime[k - 1]->getVis() == 0)
						contact->pictureBox9->BackgroundImage = contact->pictureBox9->BackgroundImage;
					else
						contact->pictureBox9->BackgroundImage = gcnew Bitmap(profilesRuntime[k - 1]->getPhoto());
					contact->userID->Text = usersRuntime[k - 1]->getID().ToString();
					contact->Width = 200;
					contact->Click += gcnew System::EventHandler(this, &MyForm::Contact_story);
					storySeen->Controls->Add(contact);
				}
				return;
			}
		}
		panel4->Size = System::Drawing::Size(0, 0);
		MessageBox::Show("No Stories found");
	}
	//go to next story
	private: int clickedUser;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < storiesRuntime.size(); i++) {
			pictureBox3->Visible = true;
			if (storiesRuntime[i]->getID() == clickedUser && i > firstStory) {
				if (storiesRuntime[i]->getID() == storiesRuntime[storiesRuntime.size() - 1]->getID())
					pictureBox2->Visible = false;
				StoryTime->Text = "Time: " + storiesRuntime[i]->getTime();
				if (storiesRuntime[i]->getImage() == "") {
					if (pictureBox1->Width != 0)
						pictureBox1->Size = System::Drawing::Size(0, 0);
					richTextBox9->Size = System::Drawing::Size(360, 200);
					richTextBox9->ForeColor = System::Drawing::Color::White;
					richTextBox9->Text = storiesRuntime[i]->getText();
				}
				else {
					if (richTextBox9->Width != 0)
						richTextBox9->Size = System::Drawing::Size(0, 0);
					pictureBox1->Size = System::Drawing::Size(360, 200);
					pictureBox1->BackgroundImage = gcnew Bitmap(storiesRuntime[i]->getImage());
				}
				firstStory = i;
				break;
			}
		}
	}
	//go to previous story
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox2->Visible = true;
		for (int i = firstStory; i >= 0; i--) {
			if (storiesRuntime[i]->getID() == clickedUser && i < firstStory) {
				if (storiesRuntime[i]->getID() == storiesRuntime[0]->getID())
					pictureBox3->Visible = false;
				StoryTime->Text = "Time: " +storiesRuntime[i]->getTime();
				if (storiesRuntime[i]->getImage() == "") {
					if (pictureBox1->Width != 0)
						pictureBox1->Size = System::Drawing::Size(0, 0);
					richTextBox9->Size = System::Drawing::Size(360, 200);
					richTextBox9->ForeColor = System::Drawing::Color::White;
					richTextBox9->Text = storiesRuntime[i]->getText();
				}
				else {
					if (richTextBox9->Width != 0)
						richTextBox9->Size = System::Drawing::Size(0, 0);
					pictureBox1->Size = System::Drawing::Size(360, 200);
					pictureBox1->BackgroundImage = gcnew Bitmap(storiesRuntime[i]->getImage());
				}
				firstStory = i;
				break;
			}
		}
	}
	//create group chat
	private: System::Void CreateGroup_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		MoreList->Width = 0;
		MoreList->Height = 0;
		MyForm3^ frm3 = gcnew MyForm3;
		frm3->Add_Contact->Text = "Create";
		frm3->ShowDialog();
		Card::MyUserControl^ contact = gcnew Card::MyUserControl();
		if(frm3->getGroupName() != ""){
			contact->Username = frm3->getGroupName();
			if (frm3->getProfilePic() != "")
				contact->pictureBox9->BackgroundImage = gcnew Bitmap(frm3->getProfilePic());
			else
				contact->pictureBox9->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\account.png");
			contact->userID->Text = usersRuntime[userLoggedIn]->getID().ToString();
			ChatRoom^ ch = gcnew ChatRoom;
			ch->setCHID(chat.size() + 1);
			ch->setCHType(frm3->getMembers());
			chat.push_back(ch);
			contact->chatID->Text = ch->getCHID().ToString();
			contact->chatType->Text = ch->getCHType().ToString();
			contact->Click += gcnew System::EventHandler(this, &MyForm::Group_Click);
			flowLayoutPanel1->Controls->Add(contact);
			MessageBox::Show(contact->Username + " Added Successfully!");
			db->Open();
			cmd->CommandText = "INSERT INTO ChatRoom VALUES(@CH_ID, @CH_Type)";
			cmd->Parameters->AddWithValue("@CH_ID", ch->getCHID());
			cmd->Parameters->AddWithValue("@CH_Type", ch->getCHType());
			cmd->ExecuteNonQuery();
			cmd->CommandText = "INSERT INTO User_ChatRoom VALUES(@User_ID_FK, @CH_ID_FK)";
			cmd->Parameters->AddWithValue("@CH_ID_FK", ch->getCHID());
			cmd->Parameters->AddWithValue("@User_ID_FK", usersRuntime[userLoggedIn]->getID());
			cmd->ExecuteNonQuery();

			cmd->CommandText = "INSERT INTO ChatRoomInfo VALUES(0, @User_ID_FK, @CH_ID_FK, 0)";
			cmd->Parameters->AddWithValue("@CH_ID_FK", ch->getCHID());
			cmd->Parameters->AddWithValue("@User_ID_FK", usersRuntime[userLoggedIn]->getID());
			cmd->ExecuteNonQuery();
			for (int i = 0; i < frm3->getMembers(); i++) {
				AddMember::membercpp^ user = dynamic_cast<AddMember::membercpp^>(frm3->flowLayoutPanel1->Controls[i]);
				for each (User ^ us in usersRuntime) {
					if (us->getPhone() == user->Contact->Text && us->getID() != usersRuntime[userLoggedIn]->getID()) {

						cmd->CommandText = "INSERT INTO User_ChatRoom VALUES(@User_ID_FK, @CH_ID_FK)";
						cmd->Parameters->AddWithValue("@CH_ID_FK", ch->getCHID());
						cmd->Parameters->AddWithValue("@User_ID_FK", us->getID());
						cmd->ExecuteNonQuery();

						cmd->CommandText = "INSERT INTO ChatRoomInfo VALUES(0, @User_ID_FK, @CH_ID_FK, 0)";
						cmd->Parameters->AddWithValue("@CH_ID_FK", ch->getCHID());
						cmd->Parameters->AddWithValue("@User_ID_FK", us->getID());
						cmd->ExecuteNonQuery();
						break;
					}
				}
			}
			cmd->CommandText = "INSERT INTO GroupChat VALUES(@name, @desc, @pic, @ID)";
			cmd->Parameters->AddWithValue("@name", contact->Username);
			cmd->Parameters->AddWithValue("@desc", frm3->getDesc());
			if (frm3->getProfilePic() != "")
				cmd->Parameters->AddWithValue("@pic", frm3->getProfilePic());
			else
				cmd->Parameters->AddWithValue("@pic", "D:\\College\\Data Structure\\Project\\Testrecent\\icons\\account.png");
			cmd->Parameters->AddWithValue("@ID", contact->chatID->Text);
			cmd->ExecuteNonQuery();
			db->Close();
		}

	}
	//add new group members
	private: System::Void AddGroupMembers_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm3^ frm3 = gcnew MyForm3;
		frm3->Add_Contact->Text = "Add";
		for each (Group ^ gp in groupChats) {
			if (gp->getID() == msg_chat_id) {
				frm3->ProfilePic->BackgroundImage= gcnew Bitmap(gp->getPic());
				frm3->setName(gp->getName());
				frm3->button6->Enabled = false;
				frm3->Description->ReadOnly = true;
				frm3->richTextBox1->ReadOnly = true;
				frm3->setDescription(gp->getDesc());
				break;
			}
		}
		frm3->ShowDialog();
		db->Open();
		for (int i = 0; i < frm3->getMembers(); i++) {
			AddMember::membercpp^ user = dynamic_cast<AddMember::membercpp^>(frm3->flowLayoutPanel1->Controls[i]);
			for each (User ^ us in usersRuntime) {
				if (us->getPhone() == user->Contact->Text->Trim() && us->getID() != usersRuntime[userLoggedIn]->getID()) {
					cmd->CommandText = "INSERT INTO User_ChatRoom VALUES(@User_ID_FK, @CH_ID_FK)";
					cmd->Parameters->AddWithValue("@CH_ID_FK", msg_chat_id);
					cmd->Parameters->AddWithValue("@User_ID_FK", us->getID());
					cmd->ExecuteNonQuery();
					cmd->CommandText = "INSERT INTO ChatRoomInfo VALUES(0, @User_ID_FK, @CH_ID_FK, 0)";
					cmd->Parameters->AddWithValue("@CH_ID_FK", msg_chat_id);
					cmd->Parameters->AddWithValue("@User_ID_FK", us->getID());
					cmd->ExecuteNonQuery();
					break;
				}
			}
		}
		db->Close();
	}
	private: int seenCount;
	//group card click
	private: System::Void Group_Click(System::Object^ sender, System::EventArgs^ e) {
		ContactCLicked = 2;
		AddGroupMembers->Visible = true;
		seenlast->Text = "";
		flowLayoutPanel2->Controls->Clear();
		LoggedIn->BringToFront();
		if (sender != nullptr) {
			Card::MyUserControl^ tempCard = dynamic_cast<Card::MyUserControl^>(sender);
			if (tempCard->Username != UserName->Text)
				UserName->Text = tempCard->Username;
			if (ProfilePic->BackgroundImage != tempCard->pictureBox9->BackgroundImage) {
				ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				ProfilePic->BackgroundImage = tempCard->pictureBox9->BackgroundImage;
			}
			msg_chat_id = System::Int32::Parse(tempCard->chatID->Text);
			for each (ChatRoom ^ cht in chat) {
				if (cht->getCHID() == msg_chat_id) {
					msg_chat_type = cht->getCHType();
				}
			}
		}
		loadMessagesFromDB(msg_chat_id);

		db->Open();
		for each (ChatInfo ^ inf in infoRuntime) {
			if (inf->getUserID() == usersRuntime[userLoggedIn]->getID()) {
				DateTime^ local = DateTime::Now;
				cmd->CommandText = "UPDATE ChatRoomInfo set Last_Opened=@time WHERE User_ID_FK=@id";
				cmd->Parameters->AddWithValue("@time", local);
				cmd->Parameters->AddWithValue("@id", usersRuntime[userLoggedIn]->getID());
				cmd->ExecuteNonQuery();
				break;
			}
		}
		db->Close();

		for each (Group ^ gp in groupChats) {
			if (gp->getID() == msg_chat_id) {
				DescPic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				DescPic->BackgroundImage = gcnew Bitmap(gp->getPic());
				DescText->Text = gp->getDesc();
				DescName->Text = gp->getName();
				DescName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				DescPhone->Text = "";
				break;
			}
		}

		for each (msg ^ message in msgsRuntime) {
			if(msgsRuntime.size() > 0){
				if (message->getUserIDFK() == usersRuntime[userLoggedIn]->getID()) {
					if(message->getRec() == ""){
						MessageComponent::MyUserControl^ msgBox = gcnew MessageComponent::MyUserControl;
						msgBox->timelbl->Text = statusRuntime[message->getMsgID() - 1]->getTime();
						msgBox->mssg->Text = message->getMsg();
						msgBox->seenicon->Visible = true;
						msgBox->user->Text = usersRuntime[userLoggedIn]->getFirst();
						msgBox->Margin = System::Windows::Forms::Padding(0, 0, 10, 10);
						for each (msgStatus ^ state in statusRuntime) {
							if (state->getMsg_ID() == message->getMsgID()) {
								DateTime^ local = DateTime::Now;
								db->Open();
								cmd->CommandText = "SELECT Last_Opened FROM ChatRoomInfo WHERE CH_ID_FK=@chat";
								cmd->Parameters->AddWithValue("@chat", message->getChatID());
								SQLiteDataReader^ dr = cmd->ExecuteReader();
								while (dr->Read()) {
									if(dr->GetString(0) != "0"){
										local = System::DateTime::Parse(dr->GetString(0));
										if (local->Ticks < System::DateTime::Parse(state->getDate()).Ticks) {
											seenCount++;
										}
									}
								}
								dr->Close();
								db->Close();
								if (seenCount == msg_chat_type) {
									state->setSeen(1);
								}

							}
						}
						for each (msgStatus ^ state in statusRuntime) {
							if (state->getMsg_ID() == message->getMsgID()) {
								if (state->getSeen() == 1) {
									msgBox->seenicon->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\seen.png");
								}
							}
						}
						if (msgBox->Text->Length <= richTextBox7->Width)
							richTextBox7->Multiline = false;
						else
							richTextBox7->Multiline = true;
						flowLayoutPanel2->Controls->Add(msgBox);
						richTextBox7->Clear();
					}
					else {
						RecAudioComponent::AudioControl^ Rec = gcnew RecAudioComponent::AudioControl;
						Rec->timelbl->Text = statusRuntime[message->getMsgID() - 1]->getTime();
						Rec->seenicon->Visible = true;
						Rec->user->Text = usersRuntime[userLoggedIn]->getFirst();
						Rec->Margin = System::Windows::Forms::Padding(0, 0, 10, 10);
						Rec->more->Click += gcnew System::EventHandler(this, &MyForm::msg_Menu);
						Rec->PlayBtn->Click += gcnew System::EventHandler(this, &MyForm::Play_Rec);
						Rec->msg_id->Text = message->getMsgID().ToString();
						for each (msgStatus ^ state in statusRuntime) {
							if (state->getMsg_ID() == message->getMsgID()) {
								DateTime^ local = DateTime::Now;
								db->Open();
								cmd->CommandText = "SELECT Last_Opened FROM ChatRoomInfo WHERE CH_ID_FK=@chat";
								cmd->Parameters->AddWithValue("@chat", message->getChatID());
								SQLiteDataReader^ dr = cmd->ExecuteReader();
								while (dr->Read()) {
									if (dr->GetString(0) != "0") {
										local = System::DateTime::Parse(dr->GetString(0));
										if (local->Ticks < System::DateTime::Parse(state->getDate()).Ticks) {
											seenCount++;
										}
									}
								}
								dr->Close();
								db->Close();
								if (seenCount == msg_chat_type) {
									state->setSeen(1);
								}

							}
						}
						for each (msgStatus ^ state in statusRuntime) {
							if (state->getMsg_ID() == message->getMsgID()) {
								if (state->getSeen() == 1) {
									Rec->seenicon->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\seen.png");
								}
							}
						}
						flowLayoutPanel2->Controls->Add(Rec);

						db->Open();
						cmd->CommandText = "SELECT Msg_Record FROM Message WHERE Msg_ID=@id";
						cmd->Parameters->AddWithValue("@id", Rec->msg_id->Text);
						SQLiteDataReader^ dr = cmd->ExecuteReader();
						if (dr->Read()) {
							Rec->rec_path->Text = dr->GetString(0);
						}
						dr->Close();
						db->Close();
					}
				}
				else{
					if(message->getRec() == ""){
						MessageComponent::MyUserControl^ msgBox = gcnew MessageComponent::MyUserControl;
						msgBox->timelbl->Text = statusRuntime[message->getMsgID() - 1]->getTime();
						msgBox->mssg->Text = message->getMsg();
						msgBox->user->Text = usersRuntime[message->getUserIDFK() - 1]->getFirst();
						msgBox->seenicon->Visible = false;
						msgBox->Margin = System::Windows::Forms::Padding(0, 0, 10, 10);
						if (msgBox->Text->Length <= richTextBox7->Width)
							richTextBox7->Multiline = false;
						else
							richTextBox7->Multiline = true;
						flowLayoutPanel2->Controls->Add(msgBox);
						richTextBox7->Clear();
					}
					else {
						RecAudioComponent::AudioControl^ Rec = gcnew RecAudioComponent::AudioControl;
						Rec->timelbl->Text = statusRuntime[message->getMsgID() - 1]->getTime();
						Rec->seenicon->Visible = true;
						Rec->user->Text = usersRuntime[userLoggedIn]->getFirst();
						Rec->Margin = System::Windows::Forms::Padding(0, 0, 10, 10);
						Rec->more->Click += gcnew System::EventHandler(this, &MyForm::msg_Menu);
						Rec->PlayBtn->Click += gcnew System::EventHandler(this, &MyForm::Play_Rec);
						Rec->msg_id->Text = message->getMsgID().ToString();
						flowLayoutPanel2->Controls->Add(Rec);

						db->Open();
						cmd->CommandText = "SELECT Msg_Record FROM Message WHERE Msg_ID=@id";
						cmd->Parameters->AddWithValue("@id", Rec->msg_id->Text);
						SQLiteDataReader^ dr = cmd->ExecuteReader();
						if (dr->Read()) {
							Rec->rec_path->Text = dr->GetString(0);
						}
						dr->Close();
						db->Close();
					}
				}
			}
		}
	}
	private: System::Void richTextBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (Char::IsLetter(e->KeyValue)) {
			richTextBox1->ReadOnly = true;
		}
		else
			richTextBox1->ReadOnly = false;
	}
	private: System::Void richTextBox6_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (Char::IsDigit(e->KeyValue)) {
			richTextBox1->ReadOnly = true;
		}
		else
			richTextBox1->ReadOnly = false;
	}
	private: bool isRecording = false;
	private: int recName = msgsRuntime.size();
	private: System::Void record_voice(System::Object^ sender, System::EventArgs^ e) {

		if (!isRecording) {
			RecPn->Size = System::Drawing::Size(145, 30);
			mciSendString("open new type waveaudio alias recsound", nullptr, 0, IntPtr::Zero);
			mciSendString("record recsound", nullptr, 0, IntPtr::Zero);
			isRecording = true;
		}
		else if (isRecording) {
			RecPn->Size = System::Drawing::Size(0, 0);
			isRecording = false;

			RecAudioComponent::AudioControl^ Rec = gcnew RecAudioComponent::AudioControl;
			int Hour, Seconds;
			String^ zone;
			String^ Minutes;
			DateTime localDate = DateTime::Now;
			Minutes = localDate.Minute.ToString();
			Seconds = localDate.Second;
			if (localDate.Hour == 0) {
				Hour = 12;
				zone = "AM";
			}
			else if (localDate.Hour >= 1 && localDate.Hour < 12) {
				Hour = localDate.Hour;
				zone = "AM";
			}
			else if (localDate.Hour >= 13 && localDate.Hour <= 23) {
				Hour = localDate.Hour - 12;
				zone = "PM";
			}
			if (localDate.Minute >= 0 && localDate.Minute <= 9)
				Minutes = "0" + localDate.Minute.ToString();
			msg^ message = gcnew msg;
			db->Open();
			cmd->CommandText = "SELECT * FROM messagesCount";
			SQLiteDataReader^ dr = cmd->ExecuteReader();
			if (dr->Read())
				message->setMsgID(dr->GetInt32(0));
			dr->Close();
			cmd->CommandText = "UPDATE messagesCount set count=@cnt WHERE TRUE";
			cmd->Parameters->AddWithValue("@cnt", message->getMsgID() + 1);
			recName = message->getMsgID();
			mciSendString("save recsound C:\\test\\hello"+recName.ToString()+".wav", nullptr, 0, IntPtr::Zero);
			mciSendString("close recsound", nullptr, 0, IntPtr::Zero);
			message->setUserID(usersRuntime[userLoggedIn]->getID());
			message->setChatID(msg_chat_id);
			message->setAudio("C:\\test\\hello" + recName.ToString() + ".wav");
			cmd->ExecuteNonQuery();
			db->Close();
			msgsRuntime.push_back(message);

			msgStatus^ stat = gcnew msgStatus;
			stat->setDate(localDate.ToString());
			stat->setTime(Hour.ToString() + ":" + Minutes + ":" + Seconds.ToString() + " " + zone);
			stat->setMsg_ID(message->getMsgID());
			stat->setSeen(0);
			statusRuntime.push_back(stat);

			Rec->msg_id->Text = message->getMsgID().ToString();
			Rec->timelbl->Text = Hour.ToString() + ":" + Minutes + " " + zone;
			Rec->user->Text = usersRuntime[userLoggedIn]->getFirst();
			Rec->recId->Text = recName.ToString();
			Rec->Margin = System::Windows::Forms::Padding(0, 0, 10, 10);
			Rec->rec_path->Text = message->getRec();
			Rec->more->Click += gcnew System::EventHandler(this, &MyForm::msg_Menu);
			Rec->PlayBtn->Click += gcnew System::EventHandler(this, &MyForm::Play_Rec);
			flowLayoutPanel2->Controls->Add(Rec);

			db->Open();
			cmd->CommandText = "INSERT INTO Message VALUES(@msgid, @text, @chatID, @userID, @rec)";
			cmd->Parameters->AddWithValue("@msgid", message->getMsgID());
			cmd->Parameters->AddWithValue("@text", "");
			cmd->Parameters->AddWithValue("@userID", message->getUserIDFK());
			cmd->Parameters->AddWithValue("@chatID", message->getChatID());
			cmd->Parameters->AddWithValue("@rec", "C:\\test\\hello" + recName.ToString() + ".wav");
			cmd->ExecuteNonQuery();
			cmd->CommandText = "INSERT INTO Status VALUES(@Date, @Time, @seen, @msgID)";
			cmd->Parameters->AddWithValue("@Date", stat->getDate());
			cmd->Parameters->AddWithValue("@Time", stat->getTime());
			cmd->Parameters->AddWithValue("@seen", stat->getSeen());
			cmd->Parameters->AddWithValue("@msgID", stat->getMsg_ID());
			cmd->ExecuteNonQuery();
			db->Close();
		}
	}
	private: bool isPlaying = false;
	private: System::Void Play_Rec(System::Object^ sender, System::EventArgs^ e) {
		RecAudioComponent::AudioControl^ tempCard =
			dynamic_cast<RecAudioComponent::AudioControl^>(static_cast<System::Windows::Forms::PictureBox^>(sender)->Parent);
		if(!isPlaying){
			tempCard->PlayBtn->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\icons8-pause-50.png");
			tempCard->pictureBox1->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\icons8-audio-wave-48.png");
			mciSendString("play " + tempCard->rec_path->Text, nullptr, 0, IntPtr::Zero);
			isPlaying = true;
		}
		else{
			tempCard->PlayBtn->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\icons8-play-50.png");
			tempCard->pictureBox1->BackgroundImage = gcnew Bitmap("D:\\College\\Data Structure\\Project\\Testrecent\\icons\\icons8-audio-wave-50 (1).png");
			mciSendString("pause " + tempCard->rec_path->Text, nullptr, 0, IntPtr::Zero);
			isPlaying = false;
		}
	}
};
}

