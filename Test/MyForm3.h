#pragma once

namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	public: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::RichTextBox^ Description;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label14;


	private: System::Windows::Forms::PictureBox^ pictureBox1;

	public: System::Windows::Forms::Button^ Add_Contact;
	public: System::Windows::Forms::Button^ ProfilePic;
	private: System::Windows::Forms::Label^ AppTitle;
	private: System::Windows::Forms::Button^ CLose;
	private: System::Windows::Forms::Button^ Maximize;
	private: System::Windows::Forms::Button^ Minimize;
	private: System::Windows::Forms::Panel^ TItleBar_border;
	private: System::Windows::Forms::Panel^ TitleBar;
	public: AddMember::membercpp^ membercpp1;
	private:System::Windows::Forms::Label^ imagePath;
















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Description = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->membercpp1 = (gcnew AddMember::membercpp());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->imagePath = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Add_Contact = (gcnew System::Windows::Forms::Button());
			this->ProfilePic = (gcnew System::Windows::Forms::Button());
			this->AppTitle = (gcnew System::Windows::Forms::Label());
			this->CLose = (gcnew System::Windows::Forms::Button());
			this->Maximize = (gcnew System::Windows::Forms::Button());
			this->Minimize = (gcnew System::Windows::Forms::Button());
			this->TItleBar_border = (gcnew System::Windows::Forms::Panel());
			this->TitleBar = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->TitleBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(180, 150);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(341, 48);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Change Group Photo";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm3::button6_Click);
			// 
			// Description
			// 
			this->Description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->Description->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Description->ForeColor = System::Drawing::Color::White;
			this->Description->Location = System::Drawing::Point(370, 235);
			this->Description->MaxLength = 200;
			this->Description->Name = L"Description";
			this->Description->Size = System::Drawing::Size(259, 55);
			this->Description->TabIndex = 19;
			this->Description->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(10, 243);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 39);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Group\'s Name :";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->membercpp1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 481);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(521, 157);
			this->flowLayoutPanel1->TabIndex = 20;
			// 
			// membercpp1
			// 
			this->membercpp1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->membercpp1->Location = System::Drawing::Point(3, 3);
			this->membercpp1->Name = L"membercpp1";
			this->membercpp1->Size = System::Drawing::Size(459, 60);
			this->membercpp1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(527, 497);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(61, 35);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm3::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(10, 318);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 39);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Description :";
			// 
			// imagePath
			// 
			this->imagePath->Location = System::Drawing::Point(0, 0);
			this->imagePath->Name = L"imagePath";
			this->imagePath->Size = System::Drawing::Size(100, 23);
			this->imagePath->TabIndex = 0;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(370, 318);
			this->richTextBox1->MaxLength = 200;
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(259, 55);
			this->richTextBox1->TabIndex = 22;
			this->richTextBox1->Text = L"";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(215, 401);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(270, 60);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Add members";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add_Contact
			// 
			this->Add_Contact->AutoEllipsis = true;
			this->Add_Contact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->Add_Contact->FlatAppearance->BorderSize = 0;
			this->Add_Contact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Add_Contact->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Bold));
			this->Add_Contact->ForeColor = System::Drawing::Color::White;
			this->Add_Contact->Location = System::Drawing::Point(266, 644);
			this->Add_Contact->Name = L"Add_Contact";
			this->Add_Contact->Size = System::Drawing::Size(169, 49);
			this->Add_Contact->TabIndex = 24;
			this->Add_Contact->Text = L"Create";
			this->Add_Contact->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Add_Contact->UseVisualStyleBackColor = false;
			this->Add_Contact->Click += gcnew System::EventHandler(this, &MyForm3::Add_Contact_Click);
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
			this->ProfilePic->Location = System::Drawing::Point(300, 67);
			this->ProfilePic->Name = L"ProfilePic";
			this->ProfilePic->Size = System::Drawing::Size(100, 60);
			this->ProfilePic->TabIndex = 16;
			this->ProfilePic->UseVisualStyleBackColor = false;
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
			// CLose
			// 
			this->CLose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->CLose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->CLose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CLose.BackgroundImage")));
			this->CLose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->CLose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CLose->FlatAppearance->BorderSize = 0;
			this->CLose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CLose->Location = System::Drawing::Point(626, 9);
			this->CLose->Name = L"CLose";
			this->CLose->Size = System::Drawing::Size(62, 26);
			this->CLose->TabIndex = 8;
			this->CLose->UseVisualStyleBackColor = false;
			this->CLose->Click += gcnew System::EventHandler(this, &MyForm3::CLose_Click);
			// 
			// Maximize
			// 
			this->Maximize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Maximize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->Maximize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Maximize.BackgroundImage")));
			this->Maximize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Maximize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Maximize->FlatAppearance->BorderSize = 0;
			this->Maximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Maximize->Location = System::Drawing::Point(558, 9);
			this->Maximize->Name = L"Maximize";
			this->Maximize->Size = System::Drawing::Size(62, 26);
			this->Maximize->TabIndex = 9;
			this->Maximize->UseVisualStyleBackColor = false;
			this->Maximize->Click += gcnew System::EventHandler(this, &MyForm3::Maximize_Click);
			// 
			// Minimize
			// 
			this->Minimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Minimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->Minimize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Minimize.BackgroundImage")));
			this->Minimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Minimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Minimize->FlatAppearance->BorderSize = 0;
			this->Minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Minimize->Location = System::Drawing::Point(482, 9);
			this->Minimize->Name = L"Minimize";
			this->Minimize->Size = System::Drawing::Size(62, 26);
			this->Minimize->TabIndex = 10;
			this->Minimize->UseVisualStyleBackColor = false;
			this->Minimize->Click += gcnew System::EventHandler(this, &MyForm3::Minimize_Click);
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
			// TitleBar
			// 
			this->TitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->TitleBar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->TitleBar->Controls->Add(this->TItleBar_border);
			this->TitleBar->Controls->Add(this->Minimize);
			this->TitleBar->Controls->Add(this->Maximize);
			this->TitleBar->Controls->Add(this->CLose);
			this->TitleBar->Controls->Add(this->AppTitle);
			this->TitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->TitleBar->Location = System::Drawing::Point(0, 0);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(700, 41);
			this->TitleBar->TabIndex = 2;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(700, 700);
			this->Controls->Add(this->Add_Contact);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Description);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->ProfilePic);
			this->Controls->Add(this->TitleBar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->TitleBar->ResumeLayout(false);
			this->TitleBar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Minimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
private: System::Void Maximize_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CLose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	AddMember::membercpp^ add = gcnew AddMember::membercpp;
	flowLayoutPanel1->Controls->Add(add);
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ open = gcnew OpenFileDialog();

	open->InitialDirectory = "C://";
	open->Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.bmp";
	open->FilterIndex = 2;
	open->RestoreDirectory = true;
	if (open->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		ProfilePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		ProfilePic->BackgroundImage = gcnew Bitmap(open->FileName);
	}
	imagePath->Text = open->FileName;
}
private: System::Void Add_Contact_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
public: String^ getProfilePic() {
	return imagePath->Text;
}
public: String^ getGroupName() {
	return Description->Text;
}
public: String^ getDesc() {
	return richTextBox1->Text;
}
public: int getMembers() {
	return flowLayoutPanel1->Controls->Count;
}
public: void setName(String^ name) {
	Description->Text = name;
}	  
public: void setDescription(String^ desc) {
	richTextBox1->Text = desc;
}

};
}
