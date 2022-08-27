//CREACION DE OBJETOS
//Visibilidad de los miembros de una clase (ENCAPSULAMIENTO)
#include <iostream>
#include"Punto.h"
using namespace std;

int main(int argc, char** argv) {
	Punto p1(2,1);//CREACION DE OBJETO ESTATICO
	
	cout<<"El valor de X es: "<<p1.getX() <<endl;
	cout<<"El valor de Y es: "<<p1.getY() <<endl;
	cout<<"\n";
	Punto* p2=new Punto();//Creacion de un objeto dinamico 
	
	p2->setX(5);
	p2->setY(8);
	
	cout<<"El valor de X es: "<<p2->getX()<<endl;
	cout<<"El valor de Y es: "<<p2->getY()<<endl;
	
	return 0;
}
