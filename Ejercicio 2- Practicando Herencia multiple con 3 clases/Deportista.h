#ifndef DEPORTISTA_H
#define DEPORTISTA_H


#include<iostream>
using namespace std;

class Deportista{
	private:
		string nombreEntrenador;
		public:
			Deportista(string nombreEntrenador){
				this->nombreEntrenador = nombreEntrenador;
			}
			~Deportista(){
				
			}
			void mostrarDatos(){
			cout<<"Nombre del entrenador: "<<nombreEntrenador<<endl;
			}
				void setNombreEntrenador(string nuevoEntrenador){
				this->nombreEntrenador = nuevoEntrenador;
			}
		string getNombreEntrenador(){
				return nombreEntrenador;
			}
};
#endif
