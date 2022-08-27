#include<iostream>
#include"Avion.h"
#include"Barco.h"
using namespace std;

class HidroAvion : public Avion, public Barco{
	private:
		string codigo;
		public:
			HidroAvion(string nombre,string modelo,string codigo) : Barco(nombre), Avion(modelo){
				this->codigo = codigo;
			}
			~HidroAvion(){
				
			}
			string getCodigo(){
				return codigo;
			}
			void mostrarDatos(){
				cout<<"Nombre: "<<getNombre()<<endl;
				cout<<"Modelo: "<<getModelo()<<endl;
				cout<<"Codigo: "<<codigo<<endl;
			}
};
