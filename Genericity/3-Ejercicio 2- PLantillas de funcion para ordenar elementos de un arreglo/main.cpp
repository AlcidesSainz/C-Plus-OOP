#include <iostream>
#include"ordenar.h"

using namespace std;

template<typename T>
void pedirDatos(T *arreglo, int n){
	for(int i = 0;i<n;i++){
		cout<<"Digite un elemento del arreglo ["<<i<<"]: ";
		cin>>arreglo[i];
		
	}
}
template<typename T>
void mostrarOrdenado(T *arreglo, int n){
	for(int i = 0;i<n;i++){
		cout<<"ELemento ["<<i<<"]: "<<arreglo[i]<<endl;
	}
	
}
int main(int argc, char** argv) {
		int nElementos;
		
		cout<<"Digite el numero de elementos del arreglo: ";
		cin>>nElementos;
		
		int *elementos = new int [nElementos];
		cout<<"\nPidiendo los datos del arreglo: "<<endl;
		pedirDatos(elementos,nElementos);
		cout<<"\nOrdenando Ascendentemente"<<endl;
		ordenarAscendente(elementos,nElementos);
		mostrarOrdenado(elementos, nElementos);
			cout<<"\nOrdenando Descendentemente"<<endl;
		ordenarDescendente(elementos,nElementos);
			mostrarOrdenado(elementos, nElementos);
		
		
	
	delete[] elementos;
	return 0;
}
