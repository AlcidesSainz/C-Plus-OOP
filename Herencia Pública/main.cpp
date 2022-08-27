#include <iostream>
#include"Turismo.h"
using namespace std;

int main(int argc, char** argv) {
	Turismo* carro1 = new Turismo ("Audio","rojo","IE88",4);
	
	cout<<"Datos del carro de Turismo"<<endl;
	cout<<"Marca: "<<carro1->getMarca()<<endl;
	cout<<"Color: "<<carro1->getColor()<<endl;
	cout<<"Modelo: "<<carro1->retornarModelo()<<endl;
	carro1->setColor("Negro");
		cout<<"Color: "<<carro1->getColor()<<endl;
	cout<<"Numero de puertas: "<<carro1->getNumeroPuertas()<<endl;
	return 0;
}
