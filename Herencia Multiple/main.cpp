#include <iostream>
#include"HidroAvion.h"
using namespace std;

int main(int argc, char** argv) {
	HidroAvion* ob1 = new HidroAvion("Gabyta","CEO99","1231233");
	ob1->mostrarDatos();
	cout<<endl;
	
/*	cout<<"Nombre: "<<ob1->getNombre()<<endl;
	cout<<"Modelo: "<<ob1->getModelo()<<endl;
	cout<<"Codigo: "<<ob1->getCodigo()<<endl;*/
	
	cout<<endl;
ob1->indicarAvion();
ob1->indicarBarco();
	delete ob1;
	return 0;
}
