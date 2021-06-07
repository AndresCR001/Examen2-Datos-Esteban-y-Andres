#pragma once
#include "Colacircular.h"
#include "AlgoritmosTDA.h"
#include "nodo.h"
#include "Ordenamiento.h"
#include <ctime>
#include <string.h>
#define CANTIDAD 7000



namespace Examen2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBAlgoritmos;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBPila;
	private: System::Windows::Forms::TextBox^ textBoxCola;
	private: System::Windows::Forms::TextBox^ textBoxVectores;
	private: System::Windows::Forms::TextBox^ textBoxListaEnlazadaDoble;




	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBAlgoritmos = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBPila = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCola = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVectores = (gcnew System::Windows::Forms::TextBox());
			this->textBoxListaEnlazadaDoble = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(28, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(953, 83);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Algoritmos de ordenamiento";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Crimson;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(1457, 1044);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 112);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Salir";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::GreenYellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(80, 467);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(362, 83);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Ordenar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(74, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 32);
			this->label2->TabIndex = 4;
			// 
			// comboBAlgoritmos
			// 
			this->comboBAlgoritmos->FormattingEnabled = true;
			this->comboBAlgoritmos->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Intercambio", L"Selecci�n", L"Inserci�n",
					L"Burbuja", L"Shell ", L"MergeSort", L"QuickSort ", L"BinSort", L"RadixSort"
			});
			this->comboBAlgoritmos->Location = System::Drawing::Point(80, 285);
			this->comboBAlgoritmos->Name = L"comboBAlgoritmos";
			this->comboBAlgoritmos->Size = System::Drawing::Size(362, 39);
			this->comboBAlgoritmos->TabIndex = 5;
			this->comboBAlgoritmos->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(610, 285);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 55);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Pila: ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(610, 698);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(491, 55);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Lista enlazada doble: ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(610, 416);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 55);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Cola: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(610, 555);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(240, 55);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Vectores: ";
			// 
			// textBPila
			// 
			this->textBPila->Location = System::Drawing::Point(914, 284);
			this->textBPila->Multiline = true;
			this->textBPila->Name = L"textBPila";
			this->textBPila->ReadOnly = true;
			this->textBPila->Size = System::Drawing::Size(272, 56);
			this->textBPila->TabIndex = 11;
			this->textBPila->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBoxCola
			// 
			this->textBoxCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCola->Location = System::Drawing::Point(914, 432);
			this->textBoxCola->Multiline = true;
			this->textBoxCola->Name = L"textBoxCola";
			this->textBoxCola->ReadOnly = true;
			this->textBoxCola->Size = System::Drawing::Size(272, 55);
			this->textBoxCola->TabIndex = 12;
			// 
			// textBoxVectores
			// 
			this->textBoxVectores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxVectores->Location = System::Drawing::Point(914, 570);
			this->textBoxVectores->Multiline = true;
			this->textBoxVectores->Name = L"textBoxVectores";
			this->textBoxVectores->ReadOnly = true;
			this->textBoxVectores->Size = System::Drawing::Size(272, 55);
			this->textBoxVectores->TabIndex = 13;
			this->textBoxVectores->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBoxListaEnlazadaDoble
			// 
			this->textBoxListaEnlazadaDoble->Location = System::Drawing::Point(1147, 698);
			this->textBoxListaEnlazadaDoble->Multiline = true;
			this->textBoxListaEnlazadaDoble->Name = L"textBoxListaEnlazadaDoble";
			this->textBoxListaEnlazadaDoble->ReadOnly = true;
			this->textBoxListaEnlazadaDoble->Size = System::Drawing::Size(275, 55);
			this->textBoxListaEnlazadaDoble->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1826, 1212);
			this->Controls->Add(this->textBoxListaEnlazadaDoble);
			this->Controls->Add(this->textBoxVectores);
			this->Controls->Add(this->textBoxCola);
			this->Controls->Add(this->textBPila);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBAlgoritmos);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Algoritmos de ordenamiento";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	unsigned t0, t1;
	double time;
	int* vector;
	Ordenamiento* ordenar = new Ordenamiento();
	String^ strTime;
	switch (this->comboBAlgoritmos->SelectedIndex) {
		
		
	   
	case 0: //intercambio
	{
	// 	t0 = clock();
	//	nodo* nodobase = InsertarEnListaDoblementeEnlazada(CANTIDAD);
	//	ordenar->ordIntercambioPuntero(nodobase);
	//	t1 = clock();//punto final del reloj
	//	time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
	//	strTime = time.ToString();
	//	this->textBoxListaEnlazadaDoble->Text = strTime;
		nodo* primero = InsertarEnListaDoblementeEnlazada(CANTIDAD);
	int* vector = InsertarLista(CANTIDAD);
	t0 = clock();


	ordenar->bubblesortVector(vector);


	t1 = clock();//punto final del reloj
	time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
	strTime = time.ToString();
	this->textBoxVectores->Text = strTime;
	break;
	}
	case 1://selecci�n
	{
		vector = InsertarLista(CANTIDAD);
		t0 = clock();

		ordenar->ordenSeleccionVector(vector);

		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString();
		this->textBoxVectores->Text = strTime;
	
	}
		break;
	case 2://inserci�n
	{
		vector = InsertarLista(CANTIDAD);
		t0 = clock();

		ordenar->ordenInsercionVector(vector);

		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString();
		this->textBoxVectores->Text = strTime;

	}
		break;
	case 3://burbuja
		vector = InsertarLista(CANTIDAD);
		t0 = clock();

		ordenar->bubblesortVector(vector);

		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString();
		this->textBoxVectores->Text = strTime;
		break;
	case 4://shell
		vector = InsertarLista(CANTIDAD);
		t0 = clock();

		ordenar->ordenShellVector(vector);

		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString();
		this->textBoxVectores->Text = strTime;
		break;
	case 5://mergesort

		break;
	case 6://quicksort

		break;
	case 7://binsort

		break;
	case 8://radixsort

		break;
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
