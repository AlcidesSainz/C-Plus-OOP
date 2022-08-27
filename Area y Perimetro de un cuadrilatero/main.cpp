/*Calcular perimetro y area de un cuadrilatero dada la longitud de sus lados.Los valores de la longitud deberan introducirse 
por linea de ordenes. Si es un cuadrado, solo se proporcionara la longitud de uno de los lados al constructor*/
#include <iostream>
#include"Cuadrilatero.h"
using namespace std;

int main(int argc, char** argv){
	Cuadrilatero* cuadrado;
	float lado1,lado2;
	cout<<"Digite un lado: ";
	cin>>lado1;
	cout<<"Digite otro lado: ";
	cin>>lado2;
	
	if(lado1==lado2){
		cuadrado = new Cuadrilatero(lado1);
	}
	else{
	cuadrado = new Cuadrilatero(lado1,lado2);
	}
	cout<<"\n";
	cout<<"Perimetro: "<<cuadrado->Perimetro()<<endl;
	cout<<"Area: "<<cuadrado->Area()<<endl;
	
	
	return 0;
}
