//CLase Atleta
#include<iostream>
using namespace std;

class Atleta{
	//Atributos
	private:
		int numero_atleta;
		string nombre;
		float tiempo_carrera;
		//Metodos
	public:
		Atleta(int numero_atleta,string nombre,float tiempo_carrera){
			this->numero_atleta = numero_atleta;
			this->nombre = nombre;
			this->tiempo_carrera = tiempo_carrera;
		}
		Atleta(){
			
		}
		~Atleta(){
			
		}
		float getTiempo_carrera();
		void mostrar_ganador();
		static int ganador(Atleta atletas[],int n);
};
