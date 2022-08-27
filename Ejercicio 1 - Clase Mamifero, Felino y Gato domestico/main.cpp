#include <iostream>
#include"Felino.h"
#include"GatoDomestico.h"
using namespace std;
int main(int argc, char** argv) {
	GatoDomestico* minino = new GatoDomestico(2015,"Quito","Blanco y negro","Alcides");
	Felino* estrellaCirco = new Felino(2014,"India","Tigre Bengala", "Espectaculo");
	
	cout<<"1)Dieta de los animales"<<endl;
	cout<<"Gato: "<<minino->imprimirDieta()<<endl;
	cout<<"Felino: "<<estrellaCirco->imprimirDieta()<<endl;
	cout<<"\n";
	
	cout<<"2)Anio y lugar de nacimiento "<<endl;
	cout<<"Gato: "<<minino->getAnioNacimiento()<<" - "<<minino->getLugarNacimiento()<<endl;
		cout<<"Felino: "<<estrellaCirco->getAnioNacimiento()<<" - "<<estrellaCirco->getLugarNacimiento()<<endl;
		cout<<"\n";
	
	cout<<"3)Cambiar nombre el dueño de Minino"<<endl;
	string nuevoDuenio;
	cout<<"Ingrese un nuevo nombre: ";
	getline(cin,nuevoDuenio);
	minino->setNombreDuenio(nuevoDuenio);
	cout<<"El nuevo dueño es: "<<minino->getNombreDuenio()<<endl;
	cout<<"\n";
	
	cout<<"4)Raza"<<endl;
	cout<<"Gato: "<<minino->getRaza()<<endl;
	cout<<"Felino: "<<estrellaCirco->getRaza()<<endl;
	cout<<"\n";
	
	cout<<"5)Cambiar nombre del circo"<<endl;
	string nuevoCirco;
	
	cout<<"Ingrese el nombre del nuevo circo: ";
	getline(cin,nuevoCirco);
	estrellaCirco->setNombreCirco(nuevoCirco);
	cout<<"El nuevo circo es: "<<estrellaCirco->getNombreCirco()<<endl;	
	
	delete minino;
	delete estrellaCirco;
	return 0;
}
