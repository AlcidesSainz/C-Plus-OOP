/*Dado un numero natural N,obtener la suma de los digitos de que consta. Presentar un algoritmo recursivo y otro iterativo*/
//Solucion Recursiva
int sumaRecursiva(int n){
	if(n<=9){
		return n;
	}else{
		return sumaRecursiva(n/10) + n%10;
	}
}
//Solucion Iterativa
int sumaIterativa(int n){
	int suma = 0;
	while(n>9){
		suma+= n%10;
		n/=10;
	}
	return (suma+n);
}
#include<iostream>
using namespace std;
int main(){
	int numero;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	cout<<"\nLa suma de los digitos del numero es: "<<endl;
	cout<<"Algoritmo Recursivo: "<<sumaRecursiva(numero)<<endl;
	cout<<"Algoritmo Iterativo: "<<sumaIterativa(numero)<<endl;
	
	return 0;
}
