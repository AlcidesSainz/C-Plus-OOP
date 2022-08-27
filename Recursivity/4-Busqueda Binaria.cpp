#include<iostream>
using namespace std;
int Busqueda_Binaria(int a[],int dato,int inferior,int superior){
	int mitad;
	if(inferior>superior){//No encontrado
	return -1;
	}
	else{
		mitad = (inferior+superior)/2;
		if(dato ==a[mitad]){//Caso Base
			return mitad;
		}
		else if(dato>a[mitad]){//Casos Recursivos
			return Busqueda_Binaria(a,dato,mitad+1,superior);
		}else{
			return Busqueda_Binaria(a,dato,inferior,mitad-1);
		}
	}		
};
int main(){
	int arreglo[]={1,2,3,4,5};
	int dato = 5;
	
	int retorno = Busqueda_Binaria(arreglo,dato,0,4);
	
	if(retorno == -1){
		cout<<"No se ha encontrado el dato"<<endl;
	}else{
		cout<<"El dato si ha sido encontrado"<<endl;
		cout<<"Posicion: "<<retorno<<endl;
		cout<<"Numero: "<<dato<<endl;
	}

	
	return 0;
}
