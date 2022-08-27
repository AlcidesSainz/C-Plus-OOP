#include<iostream>
#pragma once
using namespace std;
//Arreglo de OBjetos
class Alumno{
	//Atributos
	private:
		float calMat,calProg,calInfo,calLog,calCiberSeguridad,promedio;
	
	//Metodos
		public:
	//No es necesario poner Constructor al no poner nada se crea el CONSTRUCTOR POR DEFECTO que es el necesario para arreglos
			
			void pedirDatos();
			void mostrarDatos();
};
