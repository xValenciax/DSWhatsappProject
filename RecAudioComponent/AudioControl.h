#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace RecAudioComponent {

	/// <summary>
	/// Summary for AudioControl
	/// </summary>
	public ref class AudioControl : public System::Windows::Forms::UserControl
	{
	public:
		AudioControl(void)
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
		~AudioControl()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::PictureBox^ seenicon;
	public: System::Windows::Forms::Button^ more;
	public: System::Windows::Forms::PictureBox^ PlayBtn;
	public: System::Windows::Forms::Label^ msg_id;
	public: System::Windows::Forms::Label^ rec_path;
	public: System::Windows::Forms::Label^ user;
	public: System::Windows::Forms::Label^ timelbl;
	public: System::Windows::Forms::Label^ recId;
	public: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AudioControl::typeid));
			this->seenicon = (gcnew System::Windows::Forms::PictureBox());
			this->more = (gcnew System::Windows::Forms::Button());
			this->PlayBtn = (gcnew System::Windows::Forms::PictureBox());
			this->user = (gcnew System::Windows::Forms::Label());
			this->timelbl = (gcnew System::Windows::Forms::Label());
			this->msg_id = (gcnew System::Windows::Forms::Label());
			this->rec_path = (gcnew System::Windows::Forms::Label());
			this->recId = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seenicon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// seenicon
			// 
			this->seenicon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->seenicon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seenicon.BackgroundImage")));
			this->seenicon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->seenicon->Location = System::Drawing::Point(215, 111);
			this->seenicon->Name = L"seenicon";
			this->seenicon->Size = System::Drawing::Size(41, 26);
			this->seenicon->TabIndex = 4;
			this->seenicon->TabStop = false;
			// 
			// more
			// 
			this->more->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->more->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"more.BackgroundImage")));
			this->more->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->more->Cursor = System::Windows::Forms::Cursors::Hand;
			this->more->FlatAppearance->BorderSize = 0;
			this->more->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->more->Location = System::Drawing::Point(228, 5);
			this->more->Name = L"more";
			this->more->Size = System::Drawing::Size(30, 30);
			this->more->TabIndex = 5;
			this->more->UseVisualStyleBackColor = true;
			// 
			// PlayBtn
			// 
			this->PlayBtn->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->PlayBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayBtn.BackgroundImage")));
			this->PlayBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PlayBtn->Location = System::Drawing::Point(3, 45);
			this->PlayBtn->Name = L"PlayBtn";
			this->PlayBtn->Size = System::Drawing::Size(47, 51);
			this->PlayBtn->TabIndex = 6;
			this->PlayBtn->TabStop = false;
			// 
			// user
			// 
			this->user->AutoSize = true;
			this->user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->user->Location = System::Drawing::Point(8, 7);
			this->user->MaximumSize = System::Drawing::Size(200, 0);
			this->user->MinimumSize = System::Drawing::Size(0, 30);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(0, 30);
			this->user->TabIndex = 7;
			// 
			// timelbl
			// 
			this->timelbl->AutoSize = true;
			this->timelbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timelbl->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->timelbl->Location = System::Drawing::Point(6, 108);
			this->timelbl->MaximumSize = System::Drawing::Size(200, 0);
			this->timelbl->MinimumSize = System::Drawing::Size(0, 30);
			this->timelbl->Name = L"timelbl";
			this->timelbl->Size = System::Drawing::Size(0, 30);
			this->timelbl->TabIndex = 8;
			// 
			// msg_id
			// 
			this->msg_id->Location = System::Drawing::Point(0, 0);
			this->msg_id->Name = L"msg_id";
			this->msg_id->Size = System::Drawing::Size(100, 23);
			this->msg_id->TabIndex = 0;
			// 
			// rec_path
			// 
			this->rec_path->Location = System::Drawing::Point(0, 0);
			this->rec_path->Name = L"rec_path";
			this->rec_path->Size = System::Drawing::Size(100, 23);
			this->rec_path->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(70, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(178, 51);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// AudioControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->timelbl);
			this->Controls->Add(this->PlayBtn);
			this->Controls->Add(this->user);
			this->Controls->Add(this->more);
			this->Controls->Add(this->seenicon);
			this->MaximumSize = System::Drawing::Size(400, 0);
			this->MinimumSize = System::Drawing::Size(0, 141);
			this->Name = L"AudioControl";
			this->Padding = System::Windows::Forms::Padding(0, 40, 0, 0);
			this->Size = System::Drawing::Size(261, 141);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seenicon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
