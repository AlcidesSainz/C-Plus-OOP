#include<iostream>
using namespace std;

class Personaje{
	friend void modificar(Personaje &,int,int);//Funcion AMIGA
	
	private:
		int ataque;
		int defensa;
	public:
		Personaje(int ataque,int defensa){
			this->ataque = ataque;
			this->defensa = defensa;
		}
	void mostrarDatos(){
		cout<<"ATAQUE: "<<ataque<<endl;
		cout<<"DEFENSA: "<<defensa<<endl;
	}
		
};
