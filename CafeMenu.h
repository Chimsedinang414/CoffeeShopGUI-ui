#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CafeMenu
	/// </summary>
	public ref class CafeMenu : public System::Windows::Forms::Form
	{
	public:
		CafeMenu(void)
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
		~CafeMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:

	protected:






	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::ToolStripMenuItem^ adminToolStripMenuItem2;

	private: System::Windows::Forms::ToolStripMenuItem^ tàiKhoảnToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ thôngTinCáNhânToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ đăngXuấtToolStripMenuItem1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ drink_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;










	protected:








	private: System::ComponentModel::IContainer^ components;

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
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->adminToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->drink_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->tàiKhoảnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thôngTinCáNhânToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->đăngXuấtToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->contextMenuStrip1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->AutoClose = false;
			this->contextMenuStrip1->DropShadowEnabled = false;
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->adminToolStripMenuItem2 });
			this->contextMenuStrip1->Name = L"contextMenuStrip6";
			this->contextMenuStrip1->Size = System::Drawing::Size(123, 28);
			// 
			// adminToolStripMenuItem2
			// 
			this->adminToolStripMenuItem2->Name = L"adminToolStripMenuItem2";
			this->adminToolStripMenuItem2->Size = System::Drawing::Size(122, 24);
			this->adminToolStripMenuItem2->Text = L"Admin";
			this->adminToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CafeMenu::adminToolStripMenuItem2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Window;
			this->panel2->Location = System::Drawing::Point(615, 114);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(433, 320);
			this->panel2->TabIndex = 7;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->numericUpDown2);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(612, 433);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(433, 85);
			this->panel3->TabIndex = 0;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(217, 47);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(95, 22);
			this->numericUpDown2->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(217, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 28);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Giảm giá";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(318, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 66);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Thanh Toán";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SteelBlue;
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->numericUpDown1);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->comboBox2);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Location = System::Drawing::Point(612, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(433, 96);
			this->panel4->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(150, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 22);
			this->textBox1->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(338, 15);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"tìm kiếm";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(318, 61);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(68, 22);
			this->numericUpDown1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(160, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Thêm món";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(15, 63);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(15, 15);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->tabControl1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(13, 46);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(593, 472);
			this->flowLayoutPanel1->TabIndex = 9;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(590, 450);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Cornsilk;
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 28);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(582, 418);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Đồ Uống";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->drink_name,
					this->price
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(576, 412);
			this->dataGridView1->TabIndex = 0;
			// 
			// drink_name
			// 
			this->drink_name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->drink_name->HeaderText = L"Tên Đồ Uống";
			this->drink_name->MinimumWidth = 6;
			this->drink_name->Name = L"drink_name";
			// 
			// price
			// 
			this->price->HeaderText = L"Giá ";
			this->price->MinimumWidth = 6;
			this->price->Name = L"price";
			this->price->Width = 125;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listView1);
			this->tabPage2->Location = System::Drawing::Point(4, 28);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(582, 418);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ăn Vặt";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(3, 3);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(576, 412);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// tàiKhoảnToolStripMenuItem
			// 
			this->tàiKhoảnToolStripMenuItem->Name = L"tàiKhoảnToolStripMenuItem";
			this->tàiKhoảnToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->tàiKhoảnToolStripMenuItem->Text = L"Tài Khoản";
			// 
			// thôngTinCáNhânToolStripMenuItem1
			// 
			this->thôngTinCáNhânToolStripMenuItem1->Name = L"thôngTinCáNhânToolStripMenuItem1";
			this->thôngTinCáNhânToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->thôngTinCáNhânToolStripMenuItem1->Text = L"Thông tin cá nhân";
			// 
			// đăngXuấtToolStripMenuItem1
			// 
			this->đăngXuấtToolStripMenuItem1->Name = L"đăngXuấtToolStripMenuItem1";
			this->đăngXuấtToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->đăngXuấtToolStripMenuItem1->Text = L"Đăng Xuất";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MediumOrchid;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(309, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 26);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Cà Phê  DUT";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CafeMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1057, 530);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Name = L"CafeMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CafeMenu";
			this->Load += gcnew System::EventHandler(this, &CafeMenu::CafeMenu_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CafeMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void thôngToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void adminToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
