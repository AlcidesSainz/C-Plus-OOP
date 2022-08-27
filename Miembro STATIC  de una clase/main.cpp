//Miembro STATIC de una clase
#include <iostream>
#include"Estatico.h"
using namespace std;

int main(int argc, char** argv) {
	Estatico* obj1 = new Estatico();
		Estatico* obj2 = new Estatico();
			Estatico* obj3 = new Estatico();
				Estatico* obj4 = new Estatico();
	
	cout<<obj1->getcontador()<<endl;
cout<<Estatico::sumar(4,3)<<endl;
	return 0;
}
