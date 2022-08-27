#include <iostream>
#include"Alumno.h"
#include"Deportista.h"
#include"BecadoDeporte.h"
using namespace std;

int main(int argc, char** argv) {
	//Declarar dos objetos llamados alumnoJuan y alumnoPedro de class Alumno
	Alumno* alumnoJuan = new Alumno("Informatica");
	Alumno* alumnoPedro = new Alumno("Medicina");
	
	//Declarar un objeto llamado deporLuis de tipo Deportista
	Deportista* deporLuis = new Deportista("Manolo");
	
	//Declarar dos objetos llamados bdAna y bdCarmen de tipo BecadoDeporte
	BecadoDeporte* bdAna = new BecadoDeporte("Fisica","Alexis",500);
	BecadoDeporte* bdCarmen = new BecadoDeporte("Fisioterapia","Alfredo",1000);
	
	//Imprimir los datos de todos los objetos creados
	cout<<"DATOS DE LOS ALUMNOS, DEPORTISTAS Y BECADOS"<<endl;
	cout<<"Alumno Juan: "<<endl;
	alumnoJuan->mostrarDatos();
	cout<<"\n";
	
	cout<<"Alumno Pedro: "<<endl;
	alumnoPedro->mostrarDatos();
	cout<<"\n";
	
	cout<<"Deportista Luis: "<<endl;
	deporLuis->mostrarDatos();
	cout<<"\n";
	
	cout<<"Becada Ana: "<<endl;
	bdAna->mostrarDatos();
	cout<<"\n";
	
	cout<<"Becada Carmen: "<<endl;
	bdCarmen->mostrarDatos();
	cout<<"\n";
	
	//Actualizar el nombre de la carrera que estan estudiando el alumnoJuan y bdAna.
	cout<<"Actualizacion de carrera universitaria"<<endl;
	string nuevaCarrera;
	cout<<"Ingrese la nueva carrera de JUAN: ";
	getline(cin,nuevaCarrera);
	alumnoJuan->setNombreCarrera(nuevaCarrera);
	cout<<"Nueva Carrera de Juan: "<<alumnoJuan->getNombreCarrera()<<endl;;
	
	cout<<"Ingrese la nueva carrera de Ana: ";
	getline(cin,nuevaCarrera);
	bdAna->setNombreCarrera(nuevaCarrera);
	cout<<"Nueva Carrera de Ana: "<<bdAna->getNombreCarrera()<<endl;
	
	//Actualizar el nombre del entrenador del deporLuis y bdCarmen
		cout<<"\nActualizacion de entrenadores"<<endl;
	string nuevoEntrenador;
	cout<<"Ingrese el nuevo entrenador de Luis: ";
	getline(cin,nuevoEntrenador);
	deporLuis->setNombreEntrenador(nuevoEntrenador);
	cout<<"Nuevo Entrenador de Luis: "<<deporLuis->getNombreEntrenador()<<endl;
	cout<<"\n";
		cout<<"Ingrese el nuevo entrenador de Carmen: ";
	getline(cin,nuevoEntrenador);
	bdCarmen->setNombreEntrenador(nuevoEntrenador);
	cout<<"Nuevo Entrenador de Carmen: "<<bdCarmen->getNombreEntrenador()<<endl;
	
	
	//Actualizacion del monto de la beca de bdAna y bdCarmen
	cout<<"\nActualizacion del incremento de monto de beca de becadas: "<<endl;
	float nuevoMonto;
	cout<<"Ingrese el  incremento de monto de Ana: ";
	cin>>nuevoMonto;
	bdAna->setMontoBeca(nuevoMonto);
	cout<<"Nuevo incremento de monto de Ana: "<<bdAna->getMontoBeca()<<endl;
	
		cout<<"\nIngrese el incremento de monto de Carmen: ";
	cin>>nuevoMonto;
	bdCarmen->setMontoBeca(nuevoMonto);
	cout<<"Nuevo incremento de monto de Carmen: "<<bdCarmen->getMontoBeca()<<endl;
	
	
	
	delete alumnoJuan;
	delete alumnoPedro;
	delete deporLuis;
	delete bdAna;
	delete bdCarmen;
	return 0;
}
