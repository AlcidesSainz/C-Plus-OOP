
/*Definir una clase DiaAÑO con los atributos mes y dia, los metodos igual(),visualizar().El mes se registra como un valor 
entero.El mes se registra en otra variable entera dia.*/
#include <iostream>
#include<stdlib.h>
#include"DiaAnio.h"
using namespace std;

int main(int argc, char** argv) {
	DiaAnio* hoy;
	DiaAnio* cumple;
	int d,m;
	
	cout<<"Introduzca la fecha de hoy: "<<endl;
	cout<<"Dia: ";
	cin>>d;
	cout<<"Mes: ";
	cin>>m;
	hoy = new DiaAnio(d,m);
	
	cout<<"Introduce la fecha de tu Cumpleanos: "<<endl;
	cout<<"Dia: ";
	cin>>d;
	cout<<"Mes: ";
	cin>>m;
	cumple = new DiaAnio(d,m);
	
	//Mostrando información
	hoy->visualizar();
	cout<<endl;
	cumple->visualizar();
	
	if(hoy->igual(*cumple)){
		 cout<<"¡Feliz Cumpleaños!"<<endl;
	}else{
		cout<<"Que tengas un buen dia"<<endl;
	}
	
	return 0;
}
