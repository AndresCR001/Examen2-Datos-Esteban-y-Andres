#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

using namespace Examen2; // se le puede cambiar el nombre a la clase

[STAThread]

int main(array<String^>^ arg) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Examen2::MyForm form;	//Reemplazar MyForm por el nombre que se haya usado en Myform.h como "constructor"
	Application::Run(% form);

	return 0;
}