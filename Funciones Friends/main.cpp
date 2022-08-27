//Funciones Amigas(Friend)
#include <iostream>
#include "Personaje.h"
using namespace std;
//Funcion para modificar los valores de ataque y defensa de un Objeto perosnaje
void modificar(Personaje &p,int atq,int def){
	p.ataque = atq;
	p.defensa = def;
};
int main(int argc, char** argv) {
	Personaje *principal = new Personaje(100,90);
	principal->mostrarDatos();
	cout<<"\n";
	modificar(*principal,80,70);
	principal->mostrarDatos();
	return 0;
}
