#include<iostream>
#include"Vehiculo.h"
using namespace std;

class Furgoneta : protected Vehiculo{
	private:
	string carga;
	
	public: 
	Furgoneta(string marca,string color,string modelo,string carga) : Vehiculo(marca,color,modelo){
		this->carga = carga;
	}	
	string getCarga(){
		return carga;
	}
	string mostrarMarca(){
		//mensaje = getMarca();
		return getMarca();
	}
	string mostrarColor(){
		return getColor();
	}
	string mostrarModelo(){
		return getModelo();
	}
	
};
	
