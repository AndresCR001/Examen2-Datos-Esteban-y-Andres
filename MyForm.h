#pragma once
#include <ctime>
#include <string.h>

#include <iostream>
#include "Lista.h"
#include "Ordenamientos.h"
#include "ListaDoblementeEnlazada.h"
#include "Pila.h"
#include "Colacircular.h"
#include "nodo.h"


#define CANTIDAD 1000


using namespace std;
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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtEstado;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtEstado = (gcnew System::Windows::Forms::TextBox());
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
				L"Intercambio", L"Selección", L"Inserción",
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
			this->textBPila->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
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
			this->textBoxCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->textBoxVectores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
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
			this->textBoxListaEnlazadaDoble->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxListaEnlazadaDoble->Location = System::Drawing::Point(1147, 698);
			this->textBoxListaEnlazadaDoble->Multiline = true;
			this->textBoxListaEnlazadaDoble->Name = L"textBoxListaEnlazadaDoble";
			this->textBoxListaEnlazadaDoble->ReadOnly = true;
			this->textBoxListaEnlazadaDoble->Size = System::Drawing::Size(275, 55);
			this->textBoxListaEnlazadaDoble->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(80, 1044);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 32);
			this->label7->TabIndex = 15;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// txtEstado
			// 
			this->txtEstado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEstado->Location = System::Drawing::Point(67, 1118);
			this->txtEstado->Name = L"txtEstado";
			this->txtEstado->ReadOnly = true;
			this->txtEstado->Size = System::Drawing::Size(375, 45);
			this->txtEstado->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1826, 1212);
			this->Controls->Add(this->txtEstado);
			this->Controls->Add(this->label7);
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
	Ordenamiento* ordenar = new Ordenamiento(CANTIDAD);
	Pila* pila = new Pila();
	Cola* cola = new Cola();
	ListaDoblementeEnlazada* listaDoble = new ListaDoblementeEnlazada();
	Lista* vector = new Lista();
	double t0;
	double t1;
	double time;
	String^ strTime;
	this->txtEstado->Text = "Llenando Pila...";
	pila->LlenarPila(CANTIDAD);
	this->txtEstado->Text = "Llenando Cola...";
	cola->llenarCola(CANTIDAD);
	this->txtEstado->Text = "Llenando Vector...";
	vector->llenarLista();
	this->txtEstado->Text = "Llenando Lista Doblemente Enlazada...";
	listaDoble->llenarLista(CANTIDAD);

	this->txtEstado->Clear();
	switch (this->comboBAlgoritmos->SelectedIndex) {
		
	case 0: //intercambio
	{

		//--------------------------------------PILA---------------------------------------------------//	
		this->txtEstado->Text = "Ordenando Pila...";

		t0 = clock();
		ordenar->ordIntercambioPuntero(pila->primero); //Ordenamiento por intercambio puntero
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBPila->Text = strTime;

		delete pila;

		//-----------------------------------------COLA------------------------------------------------//
		this->txtEstado->Text = "Ordenando Cola...";
		t0 = clock();
		ordenar->ordIntercambioPuntero(cola->primero);
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxCola->Text = strTime;

		delete cola;

		//------------------------------------------VECTORES-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Vector...";
		t0 = clock();
		ordenar->ordIntercambioVector(vector->lista);
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;

		delete vector;
		//------------------------------------------LISTA DOBLEMENTE ENLAZADA-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Lista doblemente enlazada...";
		t0 = clock();
		ordenar->ordIntercambioPuntero(listaDoble->primero);
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxListaEnlazadaDoble->Text = strTime;

		delete listaDoble;
	}
	break;
	
	case 1://selección
	{
		//--------------------------------------PILA---------------------------------------------------//	
		this->txtEstado->Text = "Ordenando Pila...";

		t0 = clock();
		ordenar->ordenSeleccionPuntero(pila->primero); //Ordenamientcambio puntero
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBPila->Text = strTime;

	
		delete pila;
		//-----------------------------------------COLA------------------------------------------------//
		this->txtEstado->Text = "Ordenando Cola...";
		t0 = clock();
		ordenar->ordenSeleccionPuntero(cola->primero); //Ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBoxCola->Text = strTime;

		delete cola;
		//------------------------------------------VECTORES-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Vector...";
		t0 = clock();
		ordenar->ordenSeleccionVector(vector->lista); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;

		delete vector;
		//------------------------------------------LISTA DOBLEMENTE ENLAZADA-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Lista doblemente enlazada...";
		t0 = clock();
		ordenar->ordenSeleccionPuntero(listaDoble->primero); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBoxListaEnlazadaDoble->Text = strTime;

		delete listaDoble;
	}
		break;
	
	case 2://inserción
	{
		//--------------------------------------PILA---------------------------------------------------//	
		this->txtEstado->Text = "Ordenando Pila...";

		t0 = clock();
		ordenar->ordenInsercionVectorPuntero(pila->primero); //Ordenamientcambio puntero
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBPila->Text = strTime;
		


		delete pila;
		//-----------------------------------------COLA------------------------------------------------//
		this->txtEstado->Text = "Ordenando Cola...";
		t0 = clock();
		ordenar->ordenInsercionVectorPuntero(cola->primero); //Ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxCola->Text = strTime;


		delete cola;
		//------------------------------------------VECTORES-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Vector...";
		t0 = clock();
		ordenar->ordenInsercionVector(vector->lista); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;

		delete vector;
		//------------------------------------------LISTA DOBLEMENTE ENLAZADA-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Lista doblemente enlazada...";
		t0 = clock();
		ordenar->ordenInsercionVectorPuntero(listaDoble->primero); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBoxListaEnlazadaDoble->Text = strTime;
		
		delete listaDoble;
	}
		break;
	case 3://burbuja
	{
		//--------------------------------------PILA---------------------------------------------------//	
		this->txtEstado->Text = "Ordenando Pila...";

		t0 = clock();
		ordenar->bubblesortPuntero(pila->primero); //Ordenamientcambio puntero
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBPila->Text = strTime;

		delete pila;
		//-----------------------------------------COLA------------------------------------------------//
		this->txtEstado->Text = "Ordenando Cola...";
		t0 = clock();
		ordenar->bubblesortPuntero(cola->primero); //Ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBoxCola->Text = strTime;

		delete cola;
		//------------------------------------------VECTORES-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Vector...";
		t0 = clock();
		ordenar->bubblesortVector(vector->lista); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;

		delete vector;
		//------------------------------------------LISTA DOBLEMENTE ENLAZADA-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Lista doblemente enlazada...";
		t0 = clock();
		ordenar->bubblesortPuntero(listaDoble->primero); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxListaEnlazadaDoble->Text = strTime;

	
		delete listaDoble;
	
	}
		break;
	case 4://shell
	{
		//--------------------------------------PILA---------------------------------------------------//	
		this->txtEstado->Text = "Ordenando Pila...";

		t0 = clock();
		ordenar->ordenShellPuntero(pila->primero); //Ordenamientcambio puntero
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBPila->Text = strTime;

		
		delete pila;
		//-----------------------------------------COLA------------------------------------------------//
		this->txtEstado->Text = "Ordenando Cola...";
		t0 = clock();
		ordenar->ordenShellPuntero(cola->primero); //Ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxCola->Text = strTime;

		delete cola;
		//------------------------------------------VECTORES-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Vector...";
		t0 = clock();
		ordenar->ordenShellVector(vector->lista); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;

		delete vector;
		//------------------------------------------LISTA DOBLEMENTE ENLAZADA-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Lista doblemente enlazada...";
		t0 = clock();
		ordenar->ordenShellPuntero(listaDoble->primero); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxListaEnlazadaDoble->Text = strTime;

	
	
		delete listaDoble;
	}
		break;
	case 5://mergesort
	{
		//--------------------------------------PILA---------------------------------------------------//	
		this->txtEstado->Text = "Ordenando Pila...";

		t0 = clock();
		ordenar->ordenInsercionVectorPuntero(pila->primero); //Ordenamientcambio puntero
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBPila->Text = strTime;

		delete pila;
		//-----------------------------------------COLA------------------------------------------------//
		this->txtEstado->Text = "Ordenando Cola...";
		t0 = clock();
		ordenar->ordenInsercionVectorPuntero(cola->primero); //Ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBoxCola->Text = strTime;

		delete cola;
		//------------------------------------------VECTORES-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Vector...";
		t0 = clock();
		ordenar->ordenInsercionVector(vector->lista); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;

		delete vector;
		//------------------------------------------LISTA DOBLEMENTE ENLAZADA-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Lista doblemente enlazada...";
		t0 = clock();
		ordenar->ordenInsercionVectorPuntero(listaDoble->primero); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxListaEnlazadaDoble->Text = strTime;
	
		delete listaDoble;
	}
		break;
	case 6://quicksort
	{
		//--------------------------------------PILA---------------------------------------------------//	
		this->txtEstado->Text = "Ordenando Pila...";

		t0 = clock();
		ordenar->quickSortPuntero(pila->primero, 0, CANTIDAD-1); //Ordenamientcambio puntero
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBPila->Text = strTime;

		delete pila;
		//-----------------------------------------COLA------------------------------------------------//
		this->txtEstado->Text = "Ordenando Cola...";
		t0 = clock();
		ordenar->quickSortPuntero(cola->primero, 0, CANTIDAD-1); //Ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxCola->Text = strTime;

		delete cola;
		//------------------------------------------VECTORES-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Vector...";
		t0 = clock();
		ordenar->quickSortVector(vector->lista, 0, CANTIDAD-1); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;

		vector->imprimirLista();
		delete vector;
		//------------------------------------------LISTA DOBLEMENTE ENLAZADA-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Lista doblemente enlazada...";
		t0 = clock();
		ordenar->quickSortPuntero(listaDoble->primero,0, CANTIDAD-1); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxListaEnlazadaDoble->Text = strTime;

	
		delete listaDoble;
	
	
	
	}
		break;
	case 7://binsort
	{

		t0 = clock();
		ordenar->binSortPuntero(pila->primero);
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;
		delete pila;

		t0 = clock();
		ordenar->bubblesortPuntero(cola->primero);
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;
		delete cola;

		t0 = clock();
		ordenar->binSortVector(vector->lista);
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;
		delete vector;

		t0 = clock();
		ordenar->binSortPuntero(listaDoble->primero);
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;
		delete listaDoble;

	}
		break;
	case 8://radixsort
	{
		//--------------------------------------PILA---------------------------------------------------//	
		this->txtEstado->Text = "Ordenando Pila...";

		t0 = clock();
		ordenar->radixsortPuntero(pila->primero,CANTIDAD); //Ordenamientcambio puntero
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBPila->Text = strTime;

		
		delete pila;

		//-----------------------------------------COLA------------------------------------------------//
		this->txtEstado->Text = "Ordenando Cola...";
		t0 = clock();
		ordenar->radixsortPuntero(cola->primero, CANTIDAD); //Ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		 strTime = time.ToString() + "s";
		this->textBoxCola->Text = strTime;
		delete cola;
		//------------------------------------------VECTORES-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Vector...";
		t0 = clock();
		ordenar->radixsortVector(vector->lista, CANTIDAD); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBoxVectores->Text = strTime;
		delete vector;
		//------------------------------------------LISTA DOBLEMENTE ENLAZADA-----------------------------------------------//
		this->txtEstado->Text = "Ordenando Lista doblemente enlazada...";
		t0 = clock();
		ordenar->radixsortPuntero(listaDoble->primero,CANTIDAD); //ordenamiento
		t1 = clock();//punto final del reloj
		time = (double(t1 - t0) / CLOCKS_PER_SEC);//convierto a segundos
		strTime = time.ToString() + "s";
		this->textBoxListaEnlazadaDoble->Text = strTime;
		delete listaDoble;
	}
		break;
	}
	this->txtEstado->Text = "Terminado";

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
