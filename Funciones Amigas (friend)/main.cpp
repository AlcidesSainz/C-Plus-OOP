//Funciones amigas (Friends)
#include <iostream>
#include"Personaje.h"
using namespace std;
//Funcion para modificar las estadisticas de un objeto de personaje
void modificar(Personaje &p,int atq,int def){
	p.ataque = atq;
	p.defensa = def;
	
}
int main(int argc, char** argv) {
	Personaje* Alcides = new Personaje(100,90);
	Alcides->mostrarDatos();
	
	modificar(*Alcides,80,100);
	cout<<"\n";
	Alcides->mostrarDatos();
	return 0;
}
