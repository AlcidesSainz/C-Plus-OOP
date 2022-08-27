#include <iostream>
using namespace std;

//Plantilla de funcion
template <class T,class T2>

T mayor(T dato1,T2 dato2){
	if(dato1<=dato2){
		return dato2;
	}else{
		return dato1;
	}
}

int main(int argc, char** argv) {
	cout<<"El mayor de 2 numeros enteros es: "<<mayor(5,8)<<endl;
	cout<<"El mayor de 2 numeros es: "<<mayor(5.9,8.8)<<endl;
		cout<<"El mayor de 2 caracteres es: "<<mayor('a','b')<<endl;
		cout<<"El mayor de 2 numeros es: "<<mayor(16,8.8)<<endl;
	
	return 0;
}
