//Miembro STATIC de una clase
#include <iostream>
#include"Estatico.h"
using namespace std;

int main(int argc, char** argv) {
	Estatico* ob1 = new Estatico();
		Estatico* ob2 = new Estatico();
		Estatico* ob3 = new Estatico();
		Estatico* ob4 = new Estatico();
		Estatico* ob5 = new Estatico();

	cout<<ob1->getContador()<<endl;
cout<<"Suma = "<<Estatico::sumar(3,4)<<endl;	
	return 0;
}
