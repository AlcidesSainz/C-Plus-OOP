#include<iostream>
#include"DiaAnio.h"

using namespace std;


//Comprobamos igualdad en las fechas
bool DiaAnio::igual(DiaAnio& d){
	if(dia == d.dia && mes == d.mes){
		return true;
	}else{
		return false;
	}
}
void DiaAnio::visualizar(){
	cout<<"Mostrando Fecha: "<<endl;
	cout<<"Dia: "<<dia<<"\nMes: "<<mes<<endl;
}
