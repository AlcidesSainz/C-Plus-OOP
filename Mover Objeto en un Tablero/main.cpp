/*Crear un tablero y un objeto que se mueva ARRIBA,ABAJO,IZQ Y DERECHA y que el programa muestre la nueva posicion*/
#include <iostream>
#include"Tablero.h"
#include<stdlib.h>
using namespace std;

int main(int argc, char** argv){
	Tablero* obj;
	int x,y,opcion,n;
	
	cout<<"Digite la posicion inicial: "<<endl;
	cout<<"Posicion X: ";
	cin>>x;
	cout<<"Posicion Y: ";
	cin>>y;
	
	obj = new Tablero(x,y);
	
	do{
		cout<<"\tMenu"<<endl;
		cout<<"1-ARRIBA: "<<endl;
		cout<<"2-ABAJO: "<<endl;
		cout<<"3-IZQUIERDA: "<<endl;
		cout<<"4-DERECHA: "<<endl;
		cout<<"5-SALIR: "<<endl;
		cout<<"Digite una opcion: ";
		cin>>opcion;
		
		if(opcion>=1&&opcion<=4){
			cout<<"Digite cuantas posiciones desea mover: ";
			cin>>n;
		}
		switch(opcion){
			case 1: obj->moverArriba(n);
					break;
				case 2: obj->moverAbajo(n);
						break;
					case 3: obj->moverIzquierda(n);
							break;
						case 4: obj->moverDerecha(n);
								break;
							case 5: break;	
							default: cout<<"SE EQUIVOCO DE OPCIO"<<endl;						
		}
		system("cls");
	cout<<"\nPosicion actual (X/Y): ( "<< obj->getX()<< " , "<< obj->getY()<<" ) "<<endl;
		
	}while(opcion !=5);
	return 0;
}
