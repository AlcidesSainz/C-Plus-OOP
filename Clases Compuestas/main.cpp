//Clases Compuestas
#include <iostream>
#include"Estudiante.h"
using namespace std;

int main(int argc, char** argv) {
	Estudiante* estudiante1 = new Estudiante("3FGJ",15.7,666,"Calle el culo #69");
	
	estudiante1->mostrarDatos();
	
	return 0;
}
