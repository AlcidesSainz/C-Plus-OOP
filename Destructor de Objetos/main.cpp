//Destructor de OBjetos
#include <iostream>
#include"Perro.h"
using namespace std;

int main(int argc, char** argv) {
	
	Perro perro1 ("Arya","Mestiza");
	
	perro1.mostrarDatos();	
	perro1.jugar();
	perro1.~Perro();
	
		cout<<"\n";
	Perro* perro2 = new Perro("Pito","Pitbull");
	perro2->mostrarDatos();
	perro2->jugar();

	delete perro2;
	return 0;
}
