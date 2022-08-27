#include<iostream>
#pragma once
using namespace std;

class Vehiculo{
	//atributos
	private:
		string marca;
		string modelo;
		float precio;
	public:
		Vehiculo(string marca,string modelo,float precio){
			this->marca = marca;
			this->modelo = modelo;
			this->precio = precio;
		}
		Vehiculo(){
			
		}
		~Vehiculo(){
			
		}
		float getPrecio();
		void mostrarDatos();
		static int indiceMBarato(Vehiculo coches[], int n);
};
