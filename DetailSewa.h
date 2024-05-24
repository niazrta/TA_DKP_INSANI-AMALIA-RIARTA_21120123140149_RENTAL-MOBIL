#pragma once
#include "FormPembayaran.h"
namespace SEWAMOBIL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DetailSewa
	/// </summary>
	public ref class DetailSewa : public System::Windows::Forms::Form
	{
	public:
		DetailSewa(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void SetLabels(String^ namaMobil, String^ harga)
		{
			this->labelIsiMobil->Text = namaMobil;
			this->labelIsiHarga->Text = harga;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DetailSewa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelDetailPilihan;
	private: System::Windows::Forms::Label^ labelDetailHarga;
	public: System::Windows::Forms::Label^ labelDetailNama;
	private:

	private: System::Windows::Forms::Label^ labelDetailNo;
	private: System::Windows::Forms::Label^ labelDetailTanggal;
	private: System::Windows::Forms::Label^ labelDetailDurasi;
	public: System::Windows::Forms::Label^ labelIsiMobil;
	private:
	public: System::Windows::Forms::Label^ labelIsiHarga;
	private: System::Windows::Forms::TextBox^ textBoxNamaPenyewa;
	private: System::Windows::Forms::TextBox^ textBoxNoTelepon;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerTanggalSewa;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownDurasiSewa;

	public:






	private: System::Windows::Forms::Button^ button1;

	protected:

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
			this->labelDetailPilihan = (gcnew System::Windows::Forms::Label());
			this->labelDetailHarga = (gcnew System::Windows::Forms::Label());
			this->labelDetailNama = (gcnew System::Windows::Forms::Label());
			this->labelDetailNo = (gcnew System::Windows::Forms::Label());
			this->labelDetailTanggal = (gcnew System::Windows::Forms::Label());
			this->labelDetailDurasi = (gcnew System::Windows::Forms::Label());
			this->labelIsiMobil = (gcnew System::Windows::Forms::Label());
			this->labelIsiHarga = (gcnew System::Windows::Forms::Label());
			this->textBoxNamaPenyewa = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNoTelepon = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerTanggalSewa = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDownDurasiSewa = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDurasiSewa))->BeginInit();
			this->SuspendLayout();
			// 
			// labelDetailPilihan
			// 
			this->labelDetailPilihan->AutoSize = true;
			this->labelDetailPilihan->Location = System::Drawing::Point(143, 112);
			this->labelDetailPilihan->Name = L"labelDetailPilihan";
			this->labelDetailPilihan->Size = System::Drawing::Size(96, 20);
			this->labelDetailPilihan->TabIndex = 0;
			this->labelDetailPilihan->Text = L"Pilihan Mobil";
			// 
			// labelDetailHarga
			// 
			this->labelDetailHarga->AutoSize = true;
			this->labelDetailHarga->Location = System::Drawing::Point(143, 183);
			this->labelDetailHarga->Name = L"labelDetailHarga";
			this->labelDetailHarga->Size = System::Drawing::Size(53, 20);
			this->labelDetailHarga->TabIndex = 1;
			this->labelDetailHarga->Text = L"Harga";
			// 
			// labelDetailNama
			// 
			this->labelDetailNama->AutoSize = true;
			this->labelDetailNama->Location = System::Drawing::Point(143, 258);
			this->labelDetailNama->Name = L"labelDetailNama";
			this->labelDetailNama->Size = System::Drawing::Size(119, 20);
			this->labelDetailNama->TabIndex = 2;
			this->labelDetailNama->Text = L"Nama Penyewa";
			// 
			// labelDetailNo
			// 
			this->labelDetailNo->AutoSize = true;
			this->labelDetailNo->Location = System::Drawing::Point(143, 318);
			this->labelDetailNo->Name = L"labelDetailNo";
			this->labelDetailNo->Size = System::Drawing::Size(90, 20);
			this->labelDetailNo->TabIndex = 3;
			this->labelDetailNo->Text = L"No Telepon";
			// 
			// labelDetailTanggal
			// 
			this->labelDetailTanggal->AutoSize = true;
			this->labelDetailTanggal->Location = System::Drawing::Point(143, 394);
			this->labelDetailTanggal->Name = L"labelDetailTanggal";
			this->labelDetailTanggal->Size = System::Drawing::Size(110, 20);
			this->labelDetailTanggal->TabIndex = 4;
			this->labelDetailTanggal->Text = L"Tanggal Sewa";
			// 
			// labelDetailDurasi
			// 
			this->labelDetailDurasi->AutoSize = true;
			this->labelDetailDurasi->Location = System::Drawing::Point(147, 454);
			this->labelDetailDurasi->Name = L"labelDetailDurasi";
			this->labelDetailDurasi->Size = System::Drawing::Size(99, 20);
			this->labelDetailDurasi->TabIndex = 5;
			this->labelDetailDurasi->Text = L"Durasi Sewa";
			// 
			// labelIsiMobil
			// 
			this->labelIsiMobil->AutoSize = true;
			this->labelIsiMobil->Location = System::Drawing::Point(352, 112);
			this->labelIsiMobil->Name = L"labelIsiMobil";
			this->labelIsiMobil->Size = System::Drawing::Size(42, 20);
			this->labelIsiMobil->TabIndex = 6;
			this->labelIsiMobil->Text = L"label";
			this->labelIsiMobil->Click += gcnew System::EventHandler(this, &DetailSewa::labelIsiMobil_Click);
			// 
			// labelIsiHarga
			// 
			this->labelIsiHarga->AutoSize = true;
			this->labelIsiHarga->Location = System::Drawing::Point(352, 183);
			this->labelIsiHarga->Name = L"labelIsiHarga";
			this->labelIsiHarga->Size = System::Drawing::Size(51, 20);
			this->labelIsiHarga->TabIndex = 7;
			this->labelIsiHarga->Text = L"label2";
			// 
			// textBoxNamaPenyewa
			// 
			this->textBoxNamaPenyewa->Location = System::Drawing::Point(356, 258);
			this->textBoxNamaPenyewa->Name = L"textBoxNamaPenyewa";
			this->textBoxNamaPenyewa->Size = System::Drawing::Size(244, 26);
			this->textBoxNamaPenyewa->TabIndex = 8;
			// 
			// textBoxNoTelepon
			// 
			this->textBoxNoTelepon->Location = System::Drawing::Point(356, 315);
			this->textBoxNoTelepon->Name = L"textBoxNoTelepon";
			this->textBoxNoTelepon->Size = System::Drawing::Size(244, 26);
			this->textBoxNoTelepon->TabIndex = 9;
			// 
			// dateTimePickerTanggalSewa
			// 
			this->dateTimePickerTanggalSewa->Location = System::Drawing::Point(356, 394);
			this->dateTimePickerTanggalSewa->Name = L"dateTimePickerTanggalSewa";
			this->dateTimePickerTanggalSewa->Size = System::Drawing::Size(244, 26);
			this->dateTimePickerTanggalSewa->TabIndex = 10;
			// 
			// numericUpDownDurasiSewa
			// 
			this->numericUpDownDurasiSewa->Location = System::Drawing::Point(356, 452);
			this->numericUpDownDurasiSewa->Name = L"numericUpDownDurasiSewa";
			this->numericUpDownDurasiSewa->Size = System::Drawing::Size(244, 26);
			this->numericUpDownDurasiSewa->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(444, 507);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 34);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Konfirmasi";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DetailSewa::button1_Click);
			// 
			// DetailSewa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(972, 573);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDownDurasiSewa);
			this->Controls->Add(this->dateTimePickerTanggalSewa);
			this->Controls->Add(this->textBoxNoTelepon);
			this->Controls->Add(this->textBoxNamaPenyewa);
			this->Controls->Add(this->labelIsiHarga);
			this->Controls->Add(this->labelIsiMobil);
			this->Controls->Add(this->labelDetailDurasi);
			this->Controls->Add(this->labelDetailTanggal);
			this->Controls->Add(this->labelDetailNo);
			this->Controls->Add(this->labelDetailNama);
			this->Controls->Add(this->labelDetailHarga);
			this->Controls->Add(this->labelDetailPilihan);
			this->Name = L"DetailSewa";
			this->Text = L"DetailSewa";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDurasiSewa))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void labelIsiMobil_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		
		if (textBoxNamaPenyewa->Text->Trim() == String::Empty ||
			textBoxNoTelepon->Text->Trim() == String::Empty ||
			numericUpDownDurasiSewa->Value <= 0) {
			MessageBox::Show("Harap isi semua field dengan benar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// mengambil nilai dari textbox dan datetimepicker
		String^ pilihanMobil = labelIsiMobil->Text; // Ambil pilihan mobil dari label
		String^ harga = labelIsiHarga->Text;        // Ambil harga dari label
		String^ namaPenyewa = textBoxNamaPenyewa->Text;
		String^ noTelepon = textBoxNoTelepon->Text;
		String^ tanggalSewa = dateTimePickerTanggalSewa->Value.ToString("dd MMMM yyyy");
		int durasiSewa = (int)numericUpDownDurasiSewa->Value;

		// untuk membersihkan string Rp
		harga = harga->Replace("Rp", "")->Replace(".", "");

		
		FormPembayaran^ formPembayaran = gcnew FormPembayaran();
		formPembayaran->SetDetails(pilihanMobil, harga, namaPenyewa, noTelepon, tanggalSewa, durasiSewa);
		formPembayaran->Show();
		this->Hide();
	}
	catch (FormatException^) {
		MessageBox::Show("Terjadi kesalahan dalam format data.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
