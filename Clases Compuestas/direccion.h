//Clase direccion
#include<iostream>
using namespace std;

class Direccion{
	private:
	 string direccion;
	public: 
	Direccion(string direccion){
		this->direccion = direccion;
	}
	Direccion(){
		
	}
	~Direccion(){
		
	}
	string getdireccion(){
		return direccion;
	}
};
