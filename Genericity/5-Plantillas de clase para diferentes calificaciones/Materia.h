#include<iostream>
using namespace std;

template<class T>
class Materia{
	private:
		T notas;
	string nombreMateria;
	
	public:
		Materia(T notas,string nombreMateria){
			this-> notas = notas;
			this->nombreMateria = nombreMateria;
		}
		void setNotas(T notas){
			this->notas = notas;
		}
		T getNotas(){
			return notas;
		}
		void mostrarNotas(){
			cout<<nombreMateria<<": "<<notas<<endl;
		}
	/*	void modificarNota(){
			char opcion;
			do{
				cout<<"¿Desea modificar la nota de esta materia?";
				cout<<"Opcion(s/n): ";
				cin>>opcion;
			}while(opcion!='s'||opcion!='S'||opcion!='n'||opcion!='N');
			if(opcion == 's'||opcion=='S'){
				cout<<"Cual es el nuevo valor: ";
			}
			else{
			exit;
			}
				
				
			;
		}*/
};
