#ifndef ALUMNO_H
#define ALUMNO_H

#include<iostream>
using namespace std;

 class Alumno{
	private:
		string nombreCarrera;
		public:
			Alumno(string nombreCarrera){
				this->nombreCarrera=nombreCarrera;
			}
			~Alumno(){
				
			}
			void mostrarDatos(){
			cout<<"Carrera: "<<nombreCarrera<<endl;
			}
			void setNombreCarrera(string nuevaCarrera){
				this->nombreCarrera = nuevaCarrera;
			}
			string getNombreCarrera(){
				return nombreCarrera;
			}
};
#endif
