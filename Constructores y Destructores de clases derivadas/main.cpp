//Constructor y destructor de clases derivadas
#include <iostream>
#include"Derivada.h"
using namespace std;

int main(int argc, char** argv) {
	Derivada* ob1 = new Derivada(12,13);
	
	cout<<"\n";
	delete ob1;
	return 0;
}
