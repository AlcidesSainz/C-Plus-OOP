#include<iostream>
#include"Atleta.h"
using namespace std;

float Atleta::getTiempo_carrera(){
	return tiempo_carrera;
}
void Atleta::mostrar_ganador(){
cout<<"Numero de Atleta: "<<numero_atleta<<endl;
cout<<"Nombre: "<<nombre<<endl;
cout<<"Tiempo Carrera: "<<tiempo_carrera<<endl;
}
int Atleta::ganador(Atleta atletas[],int n){
	 float tiempo_carrera;
	 int indice = 0;
	  tiempo_carrera = atletas[0].tiempo_carrera;
	  	for(int i = 0;i<n;i++){
	  	 if(atletas[i].getTiempo_carrera()< tiempo_carrera){
	  	 	tiempo_carrera = atletas[i].getTiempo_carrera();
	  	 	indice = i;
		   }
		  }
		  return indice;
}
