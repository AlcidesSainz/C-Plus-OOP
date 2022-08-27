#include <iostream>
#include "Intercambio.h"
/*Definir una plantilla dentro de un archivo de cabecera llamado "intercambio.h" que pueda intercambiar el valor de dos 
elementos del mismo tipo*/
using namespace std;

int main(int argc, char** argv) {
	string dato1,dato2;
	
	

	cout<<"Digite algo: ";
getline(cin,dato1);
	cout<<"Digite otra cosa  ";
getline(cin,dato2);
	
	
intercambio(dato1,dato2);

cout<<"\nLos nuevos valores son: "<<endl;
cout<<"Dato 1: "<<dato1<<endl;
cout<<"Dato 2: "<<dato2<<endl;	

	return 0;
}
