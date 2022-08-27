#include <iostream>
#include"Turismo.h"
#include"Deportivo.h"
using namespace std;

int main(int argc, char** argv) {
	Turismo* carro1 = new Turismo ("Audio","rojo","IE88",4);
cout<<"Herencia Publica"<<endl;
	cout<<"Datos del carro de Turismo"<<endl;
	cout<<"Marca: "<<carro1->getMarca()<<endl;
	cout<<"Color: "<<carro1->getColor()<<endl;
	cout<<"Modelo: "<<carro1->retornarModelo()<<endl;
	carro1->setColor("Negro");
		cout<<"Color: "<<carro1->getColor()<<endl;
	cout<<"Numero de puertas: "<<carro1->getNumeroPuertas()<<endl;
	cout<<"\n\n";
	cout<<"Herencia Privada"<<endl;
	Deportivo* carroD = new Deportivo("Toyota","Verde","OEE1",10);
	cout<<"Datos del carro Deportivo"<<endl;
	cout<<"Marca: "<<carroD->mostrarMarca()<<endl;
	cout<<"Color: "<<carroD->mostrarColor()<<endl;
	cout<<"Modelo: "<<carroD->mostrarModelo()<<endl;
	cout<<"Cilindrado: "<<carroD->getCilindrada()<<endl;
	
	
	delete carro1;
	delete carroD;
	return 0;
}
