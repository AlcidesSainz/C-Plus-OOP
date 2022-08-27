#include<iostream>
#include"Persona.h"
#pragma once
using namespace std;

class Entrenador : public Persona {
	private:
		string estrategia;
		public:
			Entrenador(string nombre,string apellido,int edad,string estrategia) : Persona(nombre,apellido,edad){
				this->estrategia = estrategia;
			}
			~Entrenador(){
				
			}
			void partidoFutbol(){
				cout<<"Dirige el partido de futbol"<<endl;
			}
			void entrenamiento(){
				cout<<"Ayuda a los futbolistas a entrenar"<<endl;
			}
			void planificarEntrenamiento(){
			 cout<<"El entrenador esta planificando el entrenamiento"<<endl;
			}
};
