#include<iostream>
using namespace std;

class Cuadrilatero{
	//Atributos
	private:
	float lado1;
	float lado2;
	//Metodos 
	public:
	Cuadrilatero(float lado1,float lado2){//Constructor 1
		this->lado1 = lado1;
		this->lado2 = lado2;
	}
	Cuadrilatero(float lado){
		this->lado1 = this->lado2 = lado;
	}
	float Perimetro();
	float Area();	
};
