#pragma once
#include "DetailSewa.h"
namespace SEWAMOBIL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PilihMobil
	/// </summary>
	public ref class PilihMobil : public System::Windows::Forms::Form
	{
	public:
		PilihMobil(void)
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
		~PilihMobil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ labelNamaMobilXpander;
	private: System::Windows::Forms::Label^ labelNamaMobilInnova;
	private: System::Windows::Forms::Label^ labelNamaMobilAvanza;
	private: System::Windows::Forms::Label^ labelNamaMobilHonda;
	private: System::Windows::Forms::Label^ labelNamaMobilDaihatsu;
	private: System::Windows::Forms::Label^ labelNamaMobilToyota;
	private: System::Windows::Forms::Label^ labelHargaMobilXpander;
	private: System::Windows::Forms::Label^ labelHargaMobilInnova;
	private: System::Windows::Forms::Label^ labelHargaMobilAvanza;
	private: System::Windows::Forms::Label^ labelHargaMobilHonda;

	private: System::Windows::Forms::Label^ labelHargaMobilDaihatsu;
	private: System::Windows::Forms::Label^ labelHargaMobilToyota;
	private: System::Windows::Forms::Button^ btnSewaXpander;
	private: System::Windows::Forms::Button^ btnSewaInnova;
	private: System::Windows::Forms::Button^ btnSewaAvanza;
	private: System::Windows::Forms::Button^ btnSewaHonda;
	private: System::Windows::Forms::Button^ btnSewaDaihatsu;
	private: System::Windows::Forms::Button^ btnSewaToyota;




















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PilihMobil::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->labelNamaMobilXpander = (gcnew System::Windows::Forms::Label());
			this->labelNamaMobilInnova = (gcnew System::Windows::Forms::Label());
			this->labelNamaMobilAvanza = (gcnew System::Windows::Forms::Label());
			this->labelNamaMobilHonda = (gcnew System::Windows::Forms::Label());
			this->labelNamaMobilDaihatsu = (gcnew System::Windows::Forms::Label());
			this->labelNamaMobilToyota = (gcnew System::Windows::Forms::Label());
			this->labelHargaMobilXpander = (gcnew System::Windows::Forms::Label());
			this->labelHargaMobilInnova = (gcnew System::Windows::Forms::Label());
			this->labelHargaMobilAvanza = (gcnew System::Windows::Forms::Label());
			this->labelHargaMobilHonda = (gcnew System::Windows::Forms::Label());
			this->labelHargaMobilDaihatsu = (gcnew System::Windows::Forms::Label());
			this->labelHargaMobilToyota = (gcnew System::Windows::Forms::Label());
			this->btnSewaXpander = (gcnew System::Windows::Forms::Button());
			this->btnSewaInnova = (gcnew System::Windows::Forms::Button());
			this->btnSewaAvanza = (gcnew System::Windows::Forms::Button());
			this->btnSewaHonda = (gcnew System::Windows::Forms::Button());
			this->btnSewaDaihatsu = (gcnew System::Windows::Forms::Button());
			this->btnSewaToyota = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(58, 51);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 143);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(485, 51);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(213, 143);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.ErrorImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(922, 51);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(213, 143);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(58, 344);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(213, 143);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(485, 344);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(230, 173);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(922, 344);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(213, 173);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// labelNamaMobilXpander
			// 
			this->labelNamaMobilXpander->AutoSize = true;
			this->labelNamaMobilXpander->Location = System::Drawing::Point(83, 224);
			this->labelNamaMobilXpander->Name = L"labelNamaMobilXpander";
			this->labelNamaMobilXpander->Size = System::Drawing::Size(144, 20);
			this->labelNamaMobilXpander->TabIndex = 6;
			this->labelNamaMobilXpander->Text = L"Mitsubishi Xpander";
			// 
			// labelNamaMobilInnova
			// 
			this->labelNamaMobilInnova->AutoSize = true;
			this->labelNamaMobilInnova->Location = System::Drawing::Point(565, 224);
			this->labelNamaMobilInnova->Name = L"labelNamaMobilInnova";
			this->labelNamaMobilInnova->Size = System::Drawing::Size(114, 20);
			this->labelNamaMobilInnova->TabIndex = 7;
			this->labelNamaMobilInnova->Text = L"Innova Reborn";
			// 
			// labelNamaMobilAvanza
			// 
			this->labelNamaMobilAvanza->AutoSize = true;
			this->labelNamaMobilAvanza->Location = System::Drawing::Point(988, 224);
			this->labelNamaMobilAvanza->Name = L"labelNamaMobilAvanza";
			this->labelNamaMobilAvanza->Size = System::Drawing::Size(106, 20);
			this->labelNamaMobilAvanza->TabIndex = 8;
			this->labelNamaMobilAvanza->Text = L"Avanza Veloz";
			// 
			// labelNamaMobilHonda
			// 
			this->labelNamaMobilHonda->AutoSize = true;
			this->labelNamaMobilHonda->Location = System::Drawing::Point(134, 520);
			this->labelNamaMobilHonda->Name = L"labelNamaMobilHonda";
			this->labelNamaMobilHonda->Size = System::Drawing::Size(89, 20);
			this->labelNamaMobilHonda->TabIndex = 9;
			this->labelNamaMobilHonda->Text = L"Honda Brio";
			// 
			// labelNamaMobilDaihatsu
			// 
			this->labelNamaMobilDaihatsu->AutoSize = true;
			this->labelNamaMobilDaihatsu->Location = System::Drawing::Point(575, 520);
			this->labelNamaMobilDaihatsu->Name = L"labelNamaMobilDaihatsu";
			this->labelNamaMobilDaihatsu->Size = System::Drawing::Size(107, 20);
			this->labelNamaMobilDaihatsu->TabIndex = 10;
			this->labelNamaMobilDaihatsu->Text = L"Daihatsu Ayla";
			// 
			// labelNamaMobilToyota
			// 
			this->labelNamaMobilToyota->AutoSize = true;
			this->labelNamaMobilToyota->Location = System::Drawing::Point(1011, 520);
			this->labelNamaMobilToyota->Name = L"labelNamaMobilToyota";
			this->labelNamaMobilToyota->Size = System::Drawing::Size(97, 20);
			this->labelNamaMobilToyota->TabIndex = 11;
			this->labelNamaMobilToyota->Text = L"Toyota Agya";
			this->labelNamaMobilToyota->Click += gcnew System::EventHandler(this, &PilihMobil::label6_Click);
			// 
			// labelHargaMobilXpander
			// 
			this->labelHargaMobilXpander->AutoSize = true;
			this->labelHargaMobilXpander->Location = System::Drawing::Point(117, 261);
			this->labelHargaMobilXpander->Name = L"labelHargaMobilXpander";
			this->labelHargaMobilXpander->Size = System::Drawing::Size(92, 20);
			this->labelHargaMobilXpander->TabIndex = 12;
			this->labelHargaMobilXpander->Text = L"Rp 500.000";
			// 
			// labelHargaMobilInnova
			// 
			this->labelHargaMobilInnova->AutoSize = true;
			this->labelHargaMobilInnova->Location = System::Drawing::Point(565, 261);
			this->labelHargaMobilInnova->Name = L"labelHargaMobilInnova";
			this->labelHargaMobilInnova->Size = System::Drawing::Size(92, 20);
			this->labelHargaMobilInnova->TabIndex = 13;
			this->labelHargaMobilInnova->Text = L"Rp 450.000";
			this->labelHargaMobilInnova->Click += gcnew System::EventHandler(this, &PilihMobil::label2_Click);
			// 
			// labelHargaMobilAvanza
			// 
			this->labelHargaMobilAvanza->AutoSize = true;
			this->labelHargaMobilAvanza->Location = System::Drawing::Point(988, 261);
			this->labelHargaMobilAvanza->Name = L"labelHargaMobilAvanza";
			this->labelHargaMobilAvanza->Size = System::Drawing::Size(92, 20);
			this->labelHargaMobilAvanza->TabIndex = 14;
			this->labelHargaMobilAvanza->Text = L"Rp 400.000";
			// 
			// labelHargaMobilHonda
			// 
			this->labelHargaMobilHonda->AutoSize = true;
			this->labelHargaMobilHonda->Location = System::Drawing::Point(117, 560);
			this->labelHargaMobilHonda->Name = L"labelHargaMobilHonda";
			this->labelHargaMobilHonda->Size = System::Drawing::Size(92, 20);
			this->labelHargaMobilHonda->TabIndex = 15;
			this->labelHargaMobilHonda->Text = L"Rp 350.000";
			// 
			// labelHargaMobilDaihatsu
			// 
			this->labelHargaMobilDaihatsu->AutoSize = true;
			this->labelHargaMobilDaihatsu->Location = System::Drawing::Point(592, 560);
			this->labelHargaMobilDaihatsu->Name = L"labelHargaMobilDaihatsu";
			this->labelHargaMobilDaihatsu->Size = System::Drawing::Size(92, 20);
			this->labelHargaMobilDaihatsu->TabIndex = 16;
			this->labelHargaMobilDaihatsu->Text = L"Rp 300.000";
			// 
			// labelHargaMobilToyota
			// 
			this->labelHargaMobilToyota->AutoSize = true;
			this->labelHargaMobilToyota->Location = System::Drawing::Point(1002, 560);
			this->labelHargaMobilToyota->Name = L"labelHargaMobilToyota";
			this->labelHargaMobilToyota->Size = System::Drawing::Size(92, 20);
			this->labelHargaMobilToyota->TabIndex = 17;
			this->labelHargaMobilToyota->Text = L"Rp 350.000";
			// 
			// btnSewaXpander
			// 
			this->btnSewaXpander->Location = System::Drawing::Point(121, 297);
			this->btnSewaXpander->Name = L"btnSewaXpander";
			this->btnSewaXpander->Size = System::Drawing::Size(75, 41);
			this->btnSewaXpander->TabIndex = 18;
			this->btnSewaXpander->Text = L"SEWA";
			this->btnSewaXpander->UseVisualStyleBackColor = true;
			this->btnSewaXpander->Click += gcnew System::EventHandler(this, &PilihMobil::btnSewaXpander_Click);
			// 
			// btnSewaInnova
			// 
			this->btnSewaInnova->Location = System::Drawing::Point(582, 289);
			this->btnSewaInnova->Name = L"btnSewaInnova";
			this->btnSewaInnova->Size = System::Drawing::Size(75, 41);
			this->btnSewaInnova->TabIndex = 19;
			this->btnSewaInnova->Text = L"SEWA";
			this->btnSewaInnova->UseVisualStyleBackColor = true;
			this->btnSewaInnova->Click += gcnew System::EventHandler(this, &PilihMobil::btnSewaInnova_Click);
			// 
			// btnSewaAvanza
			// 
			this->btnSewaAvanza->Location = System::Drawing::Point(1015, 297);
			this->btnSewaAvanza->Name = L"btnSewaAvanza";
			this->btnSewaAvanza->Size = System::Drawing::Size(75, 41);
			this->btnSewaAvanza->TabIndex = 20;
			this->btnSewaAvanza->Text = L"SEWA";
			this->btnSewaAvanza->UseVisualStyleBackColor = true;
			this->btnSewaAvanza->Click += gcnew System::EventHandler(this, &PilihMobil::btnSewaAvanza_Click);
			// 
			// btnSewaHonda
			// 
			this->btnSewaHonda->Location = System::Drawing::Point(121, 583);
			this->btnSewaHonda->Name = L"btnSewaHonda";
			this->btnSewaHonda->Size = System::Drawing::Size(75, 41);
			this->btnSewaHonda->TabIndex = 21;
			this->btnSewaHonda->Text = L"SEWA";
			this->btnSewaHonda->UseVisualStyleBackColor = true;
			this->btnSewaHonda->Click += gcnew System::EventHandler(this, &PilihMobil::btnSewaHonda_Click);
			// 
			// btnSewaDaihatsu
			// 
			this->btnSewaDaihatsu->Location = System::Drawing::Point(596, 583);
			this->btnSewaDaihatsu->Name = L"btnSewaDaihatsu";
			this->btnSewaDaihatsu->Size = System::Drawing::Size(75, 41);
			this->btnSewaDaihatsu->TabIndex = 22;
			this->btnSewaDaihatsu->Text = L"SEWA";
			this->btnSewaDaihatsu->UseVisualStyleBackColor = true;
			this->btnSewaDaihatsu->Click += gcnew System::EventHandler(this, &PilihMobil::btnSewaDaihatsu_Click);
			// 
			// btnSewaToyota
			// 
			this->btnSewaToyota->Location = System::Drawing::Point(1019, 583);
			this->btnSewaToyota->Name = L"btnSewaToyota";
			this->btnSewaToyota->Size = System::Drawing::Size(75, 41);
			this->btnSewaToyota->TabIndex = 23;
			this->btnSewaToyota->Text = L"SEWA";
			this->btnSewaToyota->UseVisualStyleBackColor = true;
			this->btnSewaToyota->Click += gcnew System::EventHandler(this, &PilihMobil::btnSewaToyota_Click);
			// 
			// PilihMobil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1238, 618);
			this->Controls->Add(this->btnSewaToyota);
			this->Controls->Add(this->btnSewaDaihatsu);
			this->Controls->Add(this->btnSewaHonda);
			this->Controls->Add(this->btnSewaAvanza);
			this->Controls->Add(this->btnSewaInnova);
			this->Controls->Add(this->btnSewaXpander);
			this->Controls->Add(this->labelHargaMobilToyota);
			this->Controls->Add(this->labelHargaMobilDaihatsu);
			this->Controls->Add(this->labelHargaMobilHonda);
			this->Controls->Add(this->labelHargaMobilAvanza);
			this->Controls->Add(this->labelHargaMobilInnova);
			this->Controls->Add(this->labelHargaMobilXpander);
			this->Controls->Add(this->labelNamaMobilToyota);
			this->Controls->Add(this->labelNamaMobilDaihatsu);
			this->Controls->Add(this->labelNamaMobilHonda);
			this->Controls->Add(this->labelNamaMobilAvanza);
			this->Controls->Add(this->labelNamaMobilInnova);
			this->Controls->Add(this->labelNamaMobilXpander);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"PilihMobil";
			this->Text = L"PilihMobil";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSewaXpander_Click(System::Object^ sender, System::EventArgs^ e) {
	DetailSewa^ detailsewa = gcnew DetailSewa();
	detailsewa->SetLabels(this->labelNamaMobilXpander->Text, this->labelHargaMobilXpander->Text);
	detailsewa->Show();
	

}
private: System::Void btnSewaInnova_Click(System::Object^ sender, System::EventArgs^ e) {
	DetailSewa^ detailsewa = gcnew DetailSewa();
	detailsewa->SetLabels(this->labelNamaMobilInnova->Text, this->labelHargaMobilInnova->Text);
	detailsewa->Show();
}
private: System::Void btnSewaAvanza_Click(System::Object^ sender, System::EventArgs^ e) {
	DetailSewa^ detailsewa = gcnew DetailSewa();
	detailsewa->SetLabels(this->labelNamaMobilAvanza->Text, this->labelHargaMobilAvanza->Text);
	detailsewa->Show();
}
private: System::Void btnSewaHonda_Click(System::Object^ sender, System::EventArgs^ e) {
	DetailSewa^ detailsewa = gcnew DetailSewa();
	detailsewa->SetLabels(this->labelNamaMobilHonda->Text, this->labelHargaMobilHonda->Text);
	detailsewa->Show();
}
private: System::Void btnSewaDaihatsu_Click(System::Object^ sender, System::EventArgs^ e) {
	DetailSewa^ detailsewa = gcnew DetailSewa();
	detailsewa->SetLabels(this->labelNamaMobilDaihatsu->Text, this->labelHargaMobilDaihatsu->Text);
	detailsewa->Show();
}
private: System::Void btnSewaToyota_Click(System::Object^ sender, System::EventArgs^ e) {
	DetailSewa^ detailsewa = gcnew DetailSewa();
	detailsewa->SetLabels(this->labelNamaMobilToyota->Text, this->labelHargaMobilToyota->Text);
	detailsewa->Show();
}
};
}
