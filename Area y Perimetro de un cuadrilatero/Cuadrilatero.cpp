#include<iostream>
#include"Cuadrilatero.h"
using namespace std;

float Cuadrilatero::Perimetro(){
	float perimetro = 2*(lado1+lado2);
	return perimetro;
}
float Cuadrilatero::Area(){
	float area = (lado1*lado2);
	return area;
}



