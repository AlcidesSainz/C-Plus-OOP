//Clase Estatica
#include<iostream>
using namespace std;

class Estatico{
	private:
		static int contador;//Declarar un atributo estatico
	public:
		Estatico(){	
		contador++;
	}
	int getcontador(){
		return contador;
	}
	static int sumar(int n1,int n2){
		int suma = n1+n2;
		return suma;
	}
	
};
