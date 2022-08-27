#include<iostream>
#include"ClaseBase.h"
using namespace std;

class Derivada : public ClaseBase{
	private:
		int numero2;
		public:
			Derivada(int numero,int numero2) : ClaseBase(numero){
				this->numero2 = numero2;
				cout<<"Constructor clase derivada"<<endl;
			}
			~Derivada(){
				cout<<"Destructor de la clase derivada"<<endl;
			}
};
