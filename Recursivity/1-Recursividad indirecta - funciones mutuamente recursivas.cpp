/*Ejemplo 1
Hacer un programa que muestre el alfabeta caracter a caracter, utilizando la recursividad mutua o indirecta*/
#include<iostream>
void funcionA(char);
void funcionB(char);

using namespace std;
int main(){
	cout<<"Alfabeto: "<<endl;
	funcionA('Z');
	cout<<endl;
	
	
	return 0;
}
void funcionA(char letra){
	if(letra > 'A'){
		funcionB(letra);
	}
	cout<<letra<<" ";
}
void funcionB(char letra){
	funcionA(--letra);
}

