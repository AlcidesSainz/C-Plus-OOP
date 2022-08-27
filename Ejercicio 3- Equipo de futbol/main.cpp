#include <iostream>
#include"Persona.h"
#include"Futbolista.h"
#include"Entrenador.h"
#include"Medico.h"
#include<stdlib.h>
using namespace std;

Persona* equipo[4];

void viajarE(){
	for(int i = 0;i<4;i++){
		cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" "<<" -> ";
		equipo[i]->viajar();
	}
}

void entrenamientoE(){
	for(int i = 0;i<4;i++){
		cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" "<<" -> ";
		equipo[i]->entrenamiento();
	}
}

void partidoE(){
	for(int i = 0;i<4;i++){
		cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" "<<" -> ";
		equipo[i]->partidoFutbol();
	}
}

void planificarE(){
	cout<<equipo[2]->getNombre()<<" "<<equipo[2]->getApellido()<<" "<<" -> ";
	((Entrenador *)equipo[2])->planificarEntrenamiento();
}
void entrevistaE(){
		cout<<equipo[0]->getNombre()<<" "<<equipo[0]->getApellido()<<" "<<" -> ";
		((Futbolista *)equipo[0])->entrevista();
		
		cout<<equipo[1]->getNombre()<<" "<<equipo[1]->getApellido()<<" "<<" -> ";
		((Futbolista *)equipo[1])->entrevista();
}

void curar(){
	cout<<equipo[3]->getNombre()<<" "<<equipo[3]->getApellido()<<" "<<" -> ";
		((Medico *)equipo[3])->curarLesion();
}
void menu(){
	int opcion;
	do{
		cout<<"\t\tMenu del Equipo de Futbol\n"<<endl;
		cout<<"1)Viaje en equipo"<<endl;
		cout<<"2)Entrenamiento"<<endl;
		cout<<"3)Partido de futbol"<<endl;
		cout<<"4)Planificar entrenamiento"<<endl;
		cout<<"5)Entrevista"<<endl;
		cout<<"6)Curar Lesion"<<endl;
		cout<<"7)Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		cout<<"\n";
		switch(opcion){
			case 1: viajarE();
					break;
			case 2: entrenamientoE();
					break;
			case 3: partidoE();
					break;		
			case 4: planificarE();
					break;
			case 5: entrevistaE();
					break;
			case 6: curar();
					break;
			case 7: exit(1);
					break;
					default: cout<<"No existe esa opcion"<<endl;
					break;
		}
		cout<<"\n";
		system("pause");
		system("cls");
		
	}while(opcion!=7);
}
int main(int argc, char** argv) {
	equipo[0] = new Futbolista("Leonel","Messi",32,10,"Delantero");
	equipo[1] = new Futbolista("Cristiano","Ronaldo",30,19,"Delantero");
	equipo[2] = new Entrenador("Massimiliano","Allegri",50,"Ofensiva");
	equipo[3] = new Medico("Alex","Sainz",40,"Fisioterapeuta",20);

	menu();
	
	
	
	return 0;
 }


