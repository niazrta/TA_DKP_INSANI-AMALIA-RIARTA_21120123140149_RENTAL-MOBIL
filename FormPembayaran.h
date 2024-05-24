#pragma once

namespace SEWAMOBIL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormPembayaran
	/// </summary>
	public ref class FormPembayaran : public System::Windows::Forms::Form
	{
	public:
		FormPembayaran(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void SetDetails(String^ pilihanMobil, String^ harga, String^ namaPenyewa, String^ noTelepon, String^ tanggalSewa, int durasiSewa)
        {
            this->labelFormPilihanMobil->Text = pilihanMobil;
            this->labelFormHarga->Text = harga;
            this->labelNamaPenyewa->Text = namaPenyewa;
            this->labelNoTelepon->Text = noTelepon;
            this->labelTanggalSewa->Text = tanggalSewa;
            this->labelDurasiSewa->Text = durasiSewa.ToString();

            double hargaSewaPerHari = Double::Parse(harga);
            double totalHarga = durasiSewa * hargaSewaPerHari;
            this->labelTotalHarga->Text = totalHarga.ToString("C");
        }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormPembayaran()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelNamaPenyewa;
	private: System::Windows::Forms::Label^ labelNoTelepon;
	private: System::Windows::Forms::Label^ labelTanggalSewa;
	private: System::Windows::Forms::Label^ labelFormHarga;
	private: System::Windows::Forms::Label^ labelFormPilihanMobil;

	protected:

	protected:





	private: System::Windows::Forms::Label^ labelDurasiSewa;
	private: System::Windows::Forms::Label^ labelTotalHarga;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;



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
			this->labelNamaPenyewa = (gcnew System::Windows::Forms::Label());
			this->labelNoTelepon = (gcnew System::Windows::Forms::Label());
			this->labelTanggalSewa = (gcnew System::Windows::Forms::Label());
			this->labelFormHarga = (gcnew System::Windows::Forms::Label());
			this->labelFormPilihanMobil = (gcnew System::Windows::Forms::Label());
			this->labelDurasiSewa = (gcnew System::Windows::Forms::Label());
			this->labelTotalHarga = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelNamaPenyewa
			// 
			this->labelNamaPenyewa->AutoSize = true;
			this->labelNamaPenyewa->Location = System::Drawing::Point(353, 74);
			this->labelNamaPenyewa->Name = L"labelNamaPenyewa";
			this->labelNamaPenyewa->Size = System::Drawing::Size(51, 20);
			this->labelNamaPenyewa->TabIndex = 0;
			this->labelNamaPenyewa->Text = L"label1";
			this->labelNamaPenyewa->Click += gcnew System::EventHandler(this, &FormPembayaran::label1_Click);
			// 
			// labelNoTelepon
			// 
			this->labelNoTelepon->AutoSize = true;
			this->labelNoTelepon->Location = System::Drawing::Point(353, 164);
			this->labelNoTelepon->Name = L"labelNoTelepon";
			this->labelNoTelepon->Size = System::Drawing::Size(51, 20);
			this->labelNoTelepon->TabIndex = 1;
			this->labelNoTelepon->Text = L"label2";
			// 
			// labelTanggalSewa
			// 
			this->labelTanggalSewa->AutoSize = true;
			this->labelTanggalSewa->Location = System::Drawing::Point(353, 243);
			this->labelTanggalSewa->Name = L"labelTanggalSewa";
			this->labelTanggalSewa->Size = System::Drawing::Size(51, 20);
			this->labelTanggalSewa->TabIndex = 2;
			this->labelTanggalSewa->Text = L"label3";
			// 
			// labelFormHarga
			// 
			this->labelFormHarga->AutoSize = true;
			this->labelFormHarga->Location = System::Drawing::Point(353, 473);
			this->labelFormHarga->Name = L"labelFormHarga";
			this->labelFormHarga->Size = System::Drawing::Size(51, 20);
			this->labelFormHarga->TabIndex = 3;
			this->labelFormHarga->Text = L"label4";
			this->labelFormHarga->Click += gcnew System::EventHandler(this, &FormPembayaran::label4_Click);
			// 
			// labelFormPilihanMobil
			// 
			this->labelFormPilihanMobil->AutoSize = true;
			this->labelFormPilihanMobil->Location = System::Drawing::Point(353, 407);
			this->labelFormPilihanMobil->Name = L"labelFormPilihanMobil";
			this->labelFormPilihanMobil->Size = System::Drawing::Size(51, 20);
			this->labelFormPilihanMobil->TabIndex = 4;
			this->labelFormPilihanMobil->Text = L"label5";
			// 
			// labelDurasiSewa
			// 
			this->labelDurasiSewa->AutoSize = true;
			this->labelDurasiSewa->Location = System::Drawing::Point(353, 321);
			this->labelDurasiSewa->Name = L"labelDurasiSewa";
			this->labelDurasiSewa->Size = System::Drawing::Size(51, 20);
			this->labelDurasiSewa->TabIndex = 5;
			this->labelDurasiSewa->Text = L"label6";
			// 
			// labelTotalHarga
			// 
			this->labelTotalHarga->AutoSize = true;
			this->labelTotalHarga->Location = System::Drawing::Point(868, 473);
			this->labelTotalHarga->Name = L"labelTotalHarga";
			this->labelTotalHarga->Size = System::Drawing::Size(51, 20);
			this->labelTotalHarga->TabIndex = 6;
			this->labelTotalHarga->Text = L"label1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(157, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Nama Penyewa";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(157, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"No Telepon";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(157, 243);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Tanggal Sewa";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(157, 321);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Durasi Sewa (hari)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(157, 407);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Merek Mobil";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(157, 473);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Harga Sewa";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(721, 473);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"TOTAL";
			// 
			// FormPembayaran
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1022, 555);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelTotalHarga);
			this->Controls->Add(this->labelDurasiSewa);
			this->Controls->Add(this->labelFormPilihanMobil);
			this->Controls->Add(this->labelFormHarga);
			this->Controls->Add(this->labelTanggalSewa);
			this->Controls->Add(this->labelNoTelepon);
			this->Controls->Add(this->labelNamaPenyewa);
			this->Name = L"FormPembayaran";
			this->Text = L"FormPembayaran";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
