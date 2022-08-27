//Arreglo de Objetos
#include <iostream>
#include "Alumno.h"

using namespace std;

int main(int argc, char** argv) {
	int nAlumnos;
	string nombreEstudiantes[30];
	cout<<"Ingrese la cantidad de alumnos: ";
	cin>>nAlumnos;
	
	Alumno* alumnos2 = new Alumno [nAlumnos];//Creacion de objeto Dinamico
	
/*	for(int i=0;i<nAlumnos;i++){
			cout<<"Digite el nombre del estudiante: ";
	
	}*/


	
	for(int i = 0;i<nAlumnos;i++){
		(alumnos2+i)->pedirDatos();
		cout<<endl;
	}
	cout<<"\n\tMostrando las notas de los alumnos"<<endl;
	for(int i = 0;i<nAlumnos;i++){
		(alumnos2+i)->mostrarDatos();
		cout<<endl;
	}
	
	
	return 0;
}
