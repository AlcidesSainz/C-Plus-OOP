/*Programa para competencia de atletismo. Debe gestionar una serie de atletas caracterizados por su numero de atleta,nombre y 
tiempo de carrera, al final el programa debe mostrar los datos del atleta ganador de la carrera*/
#include <iostream>
#include"Atleta.h"
using namespace std;

int main(int argc, char** argv){
	int atletasN;
	int numero,indiceGanador;
	string nombre;
	float tiempo;
	
	Atleta* atletas;
	
	cout<<"Digite el numero de atletas que compiten: ";
	cin>>atletasN;
	
	atletas =new Atleta[atletasN];
	cout<<"\nCaracteristicas de ATLETAS"<<endl;
	for(int i = 0;i<atletasN;i++){
			cin.ignore();
		cout<<"\nNombre: ";
		getline(cin,nombre);
	
		cout<<"Numero: ";
		cin>>numero;
		
		cout<<"Tiempo: ";
		cin>>tiempo;
		
		atletas[i] = Atleta(numero,nombre,tiempo);
	}
	indiceGanador = Atleta::ganador(atletas, atletasN);
	
	cout<<"\nEl atleta ganador de la carrera es: "<<endl;
	(atletas+indiceGanador)->mostrar_ganador();
	
	return 0;
}
