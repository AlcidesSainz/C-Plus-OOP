//Implementacion de clase Persona
#include<iostream>
using namespace std;
class Persona{
	//Atributos
	private:
	string nombre;
	int edad;
	string dni;
	//Metodos
	public: 
		Persona(string _nombre, int _edad){//Constructor 1
			nombre = _nombre;
			edad = _edad;
		}
		Persona(string _dni){//Constructor 2
			dni = _dni;
		}
		void correr(){
			cout<<"Soy "<<nombre<<" tengo "<<edad<<" años de edad y voy a correr en una maraton "<<endl;
		}
		void correr(int km){
				cout<<"He corrido "<<km<<" kilometros"<<endl;
		}
};
