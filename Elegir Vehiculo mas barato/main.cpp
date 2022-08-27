/*Construir un programa que dada una serie de vehiculos caracterizados por su marca,modelo y precio, imprima las propiedades 
del vehiculo mas barato. Para ello se deberan leer por teclado las caracteristicas de cada vehiculo y crear una clase que
represente a cada uno de ellos.*/
#include <iostream>
#include"Vehiculo.h"
using namespace std;

int main(int argc, char** argv) {
	Vehiculo* coches;
	int num_coches,indiceBarato;
	string marca,modelo;
	float precio;
	cout<<"Digite el numero de Vehiculos: ";
	cin>>num_coches;
	
	coches = new Vehiculo[num_coches];//Arreglo de objetos 
	
	for(int i = 0;i<num_coches;i++){
		cout<<"\nDigite los datos del Vehiculo "<<(i+1)<<": "<<endl;
		cin.ignore();
		cout<<"Marca: ";
		getline(cin,marca);
		cout<<"Modelo: ";
		getline(cin,modelo);
		cout<<"Precio: ";
		cin>>precio;
		cout<<"\n";
		
		coches[i]= Vehiculo(marca,modelo,precio);	
	}
	indiceBarato = Vehiculo::indiceMBarato(coches,num_coches);
	cout<<"\nEl Vehiculo mas barato es: "<<endl;
	(coches+indiceBarato)->mostrarDatos();
	
delete[]coches;
	return 0;
}
