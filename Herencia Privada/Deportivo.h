//Herencia Privada
#include<iostream>
#include"Vehiculo.h"
using namespace std;

class Deportivo : private Vehiculo{
	private:
		int cilindrada;
		
		public:
			Deportivo(string marca,string color,string modelo,int cilindrada) : Vehiculo(marca,color,modelo){
				this->cilindrada = cilindrada;
			}
			~Deportivo(){
			}
			int getCilindrada(){
				return cilindrada;
			}
			string mostrarMarca(){
			string mensaje = getMarca();
			return mensaje;
			}
			string mostrarColor(){
				string mensaje = getColor();
				return mensaje;
			}
			string mostrarModelo(){
				string mensaje = getModelo();
				return mensaje;
			}
};


