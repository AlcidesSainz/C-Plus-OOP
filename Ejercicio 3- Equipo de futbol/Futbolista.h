#include<iostream>
#include"Persona.h"
#pragma once
using namespace std;

class Futbolista : public Persona{
	private:
		int dorsal;
		string posicion;
		public:
			Futbolista(string nombre,string apellido,int edad,int dorsal,string posicion) : Persona(nombre,apellido,edad){
				this->dorsal = dorsal;
				this->posicion = posicion;
			}
			~Futbolista(){
				
			}
			int getDorsal(){
				return dorsal;
			}
			string getPosicion(){
				return posicion;
			}
			
			void partidoFutbol(){
				cout<<"Jugando el partido"<<endl;
			}
			void entrenamiento(){
				cout<<"Entrenando en la cancha"<<endl;
			}
			void entrevista(){
				cout<<"Los deportistas estan siendo entrevistados"<<endl;
			}
};

