//Destructor de Objetos
//Autorreferencia del objeto: THIS
#include<iostream>
using namespace std;

class Perro{
	//Atributos
	private:
		string nombre,raza;
	//Metdos:
	public:
		Perro(string  nombre, string raza){//Constructor 1
	this->nombre = nombre;
	this->raza = raza;
		}
		void mostrarDatos();
		void jugar();
		
		~Perro(){	//Metodo Destructor
		
		}
		
};
