#include<iostream>
#include"Persona.h"
#pragma once
using namespace std;
class Medico : public Persona{

	private:
	string titulacion;
	int anioExperiencia;
	public:
		Medico(string nombre,string apellido,int edad,string titulacion,int anioExperiencia) : Persona(nombre,apellido,edad){
			this->titulacion = titulacion;
			this->anioExperiencia = anioExperiencia;
		}
		~Medico(){
			
		}
		void partidoFutbol(){
				cout<<"El medico esta pendiente de los jugadores lesionados"<<endl;
			}
		void entrenamiento(){
				cout<<"El medico esta pendiente de que ningun jugador se lesione"<<endl;
				}
		void curarLesion(){
		cout<<"El medico esta curando la lesion de un jugador"<<endl;
		}
};

