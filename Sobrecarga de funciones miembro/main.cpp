//Sobrecarga de funciones miembro
#include <iostream>
#include"Persona.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Persona* persona1 = new Persona("Alcides",22);
	persona1->correr();
	
	Persona* persona2 = new Persona("112132312");
	persona2->correr(3);
	return 0;
}
