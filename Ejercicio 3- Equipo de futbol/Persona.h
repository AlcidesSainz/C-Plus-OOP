#include<iostream>
#pragma once
using namespace std;

class Persona{
	protected:
		string nombre;
		string apellido;
		int edad;
	public:
		Persona(string nombre,string apellido,int edad){
			this->nombre = nombre;
			this->apellido = apellido;
			this->edad = edad;
		}
		~Persona(){
		}
		string getNombre(){
			return nombre;
		}
		string getApellido(){
			return apellido;
		}
		int getEdad(){
			return edad;
		}
		void viajar(){
			cout<<"Viajando"<<endl;
			
		}
		virtual void partidoFutbol()=0;		

		virtual void entrenamiento() = 0;	
	
};

