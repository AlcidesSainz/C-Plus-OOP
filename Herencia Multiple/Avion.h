#include<iostream>
using namespace std;

class Avion{
	private:
		string modelo;
		public:
			Avion(string modelo){
				this->modelo=modelo;
			}
			~Avion(){
				
			}
			void indicarAvion(){
				cout<<"El Avion esta en el aire"<<endl;
			}
			string getModelo(){
				return modelo;
			}
	
};
