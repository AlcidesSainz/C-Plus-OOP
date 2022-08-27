#include<iostream>
#include"Alumno.h"

using namespace std;

void Alumno::pedirDatos(){
	cout<<"Digite la calificacion de Matematicas: ";
	cin>>calMat;
	
	cout<<"Digite la calificacion de Programacion: ";
	cin>>calProg;
	
	cout<<"Digite la calificacion de Informatica: ";
	cin>>calInfo;
	
	cout<<"Digite la calificacion de Logica: ";
	cin>>calLog;
	
	cout<<"Digite la calificacion de Ciber Seguridad: ";
	cin>>calCiberSeguridad;
	 
}
void Alumno::mostrarDatos(){
	cout<<"Matematicas: "<<calMat<<endl;
	cout<<"Programacion: "<<calProg<<endl;
	cout<<"Informatica: "<<calInfo<<endl;
	cout<<"Logica: "<<calLog<<endl;
	cout<<"Ciber Seguridad: "<<calCiberSeguridad<<endl;
	cout<<"Promedio: "<<(calMat+calProg+calInfo+calLog+calCiberSeguridad)/5<<endl;
	
}
