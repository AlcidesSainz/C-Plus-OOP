#include<iostream>
#include"Perro.h"

using namespace std;

void Perro::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl;
}
void Perro::jugar(){
	cout<<"El perro "<<nombre<<" de raza "<<raza<<" esta jugando"<<endl;
}
