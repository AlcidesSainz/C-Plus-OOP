#include <iostream>
#include<stdlib.h>
#include"Arreglo.h"
using namespace std;

int opcion;
void opciones(){
        cout<<"\tMENU"<<endl;
		cout<<"1.Agregar elemento al arreglo"<<endl;
		cout<<"2.Comprobar espacio del arreglo"<<endl;
		cout<<"3.Ver Arreglo"<<endl;
		cout<<"4.Vaciar Arreglo"<<endl;
		cout<<"5.Salir"<<endl;
		cout<<"Opcion: ";
}

int main(int argc, char** argv) {
	Arreglo<int> arreglo1(5);
	int elemento;
	int opcion;
	int contador;
	do{
	opciones();	
	cin>>opcion;
	
	switch(opcion){
			case 1: if(arreglo1.comprobarEspacio()){
				cout<<"El arreglo esta lleno"<<endl;
				
			}else{
					cout<<"Indique el numero a agregar: ";
					cin>>elemento;
					arreglo1.agregar(elemento);
					contador++;
					cout<<"Elemento "<<elemento<<" agregado correctamente"<<endl;
					
					break;
			}
			case 2: if(arreglo1.comprobarEspacio()){
				cout<<"El arreglo esta lleno"<<endl;
					
				}else{
					cout<<"El arreglo tiene "<<contador <<" espacios usado"<<endl;
					
				}
				break;
			case 3: cout<<"Mostrando los elementos del arreglo: "<<endl;
					arreglo1.mostrarArreglo();
					
			break;
			case 4: cout<<"Vaciando el arreglo: "<<endl;
					arreglo1.vaciarArreglo();
					contador = 0;
					
			case 5: break;
			default: cout<<"Opcion Equivocada"<<endl;
				break;
			
		}
		system("pause");
	system("cls");	
	}while(opcion!=5);
	
	return 0;
}
