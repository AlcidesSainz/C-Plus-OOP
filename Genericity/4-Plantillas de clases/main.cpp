#include <iostream>
#include"EjemploPlantilla.h"
using namespace std;

int main(int argc, char** argv) {
	EjemploPlantilla<int,float> ob1(8,9.8999);
	
	ob1.mostrarDatos();
	
	ob1.setDato1(10);
	ob1.setDato2(5.55);
	

	ob1.mostrarDatos();
	return 0;
}
