#include<iostream>
using namespace std;

class Barco{
	private:
		string nombre;
		public:
			Barco(string nombre){
				this->nombre = nombre;
			}
			void indicarBarco(){
				cout<<"El barco se desplaza por el agua"<<endl;
			}
			string getNombre(){
				return nombre;
			}
	
};
