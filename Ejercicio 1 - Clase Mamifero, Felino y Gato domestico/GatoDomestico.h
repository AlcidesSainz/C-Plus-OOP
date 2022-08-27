#include<iostream>
#include"Felino.h"
using namespace std;

class GatoDomestico : public Felino{
	private:
		string nombreDuenio;
		public:
				GatoDomestico(int anioNacimiento,string lugarNacimiento,string raza,string nombreDuenio) : Felino(anioNacimiento,lugarNacimiento,raza){
			this->nombreDuenio = nombreDuenio;	
		}
		~GatoDomestico(){
			
		}
		virtual string imprimirDieta(){
			return"El gato domestico se alimenta de Whyskas";	
				}
				void setNombreDuenio(string nuevoNombre){
					this->nombreDuenio = nuevoNombre;
				}
				string getNombreDuenio(){
					return nombreDuenio;
				}
};
