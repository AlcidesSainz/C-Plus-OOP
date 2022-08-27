//Clases COMPUESTAS
//Clase estudiante
#include<iostream>
#include "Expediente.h"
#include "Direccion.h"
using namespace std;

class Estudiante{
	private:
	 string codigo;
	 float promedio;
	 Expediente exp;
	 Direccion dir;
	public: 
	Estudiante(string codigo,float promedio,int nroExpediente,string direccion) : exp(nroExpediente), dir(direccion) {
		this->codigo = codigo;
		this->promedio = promedio;
	}
	void mostrarDatos(){
		cout<<"Codigo: "<<codigo<<endl;
		cout<<"Promedio: "<<promedio<<endl;
		cout<<"Numero de Expediente: "<<exp.getnroExpediente()<<endl;
		cout<<"Direccion: "<<dir.getdireccion()<<endl;
	}
	Estudiante(){
		
	}
	~Estudiante(){
		
	}
	string getcodigo(){
		return codigo;
	}
	float getpromedio(){
		return promedio;
	}
};
