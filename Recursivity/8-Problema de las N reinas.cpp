//PROBLEMA N REINAS
#include<iostream>
using namespace std;
const int N = 8;
int reinas[N];
//PROTOTIPO DE FUNCIONES
void mostrarTablero();
bool valido(int);
void ponerReina(int, bool&);

int main(){
	bool solucion;
	
	ponerReina(0,solucion);
	
	if(solucion){
		cout<<"Existe combinacion de reinas"<<endl;
		mostrarTablero();
	}else{
		cout<<"No existe combinacion de reinas"<<endl;
	}
	
	
	return 0;
}
void ponerReina(int i,bool &solucion){
	int k=0; //Inicializa contador de movimientos
	solucion = false;
	
	do{
		
		
		reinas[i] = k;//Coloca y anota reina i en la fila k;
		k++;
		
		mostrarTablero();
		cout<<endl;
		
		if(valido(i)){
			if(i<(N-1)){
				ponerReina(i+1,solucion);
				
				//vuelta atras
				if(!solucion){
					reinas[i] =0;
				}
			}
			else{
				//TODAS LAS REINAS COLOCADAS	
				solucion = true;
			}
		}
		
	}while(!solucion &&(k<N));
}
bool valido(int i){
	/*Comrpobar si la reina de la columna I no se amenaZA con ninguna ya puesta*/
	bool v = true;
	
	for(int r=0;r<i;r++){
		v = v &&(reinas[i] != reinas[r]);//COMPROBAR SI LA FILA ESTA VACIA
		v = v&&((reinas[i]-i) !=(reinas[r]-r));//COMRPOBAR LA DIAGONAL 1
		v = v&&((reinas[i]+i) !=(reinas[r]+r));//DIAGONAL 2		
	}
	return v;
}
void mostrarTablero(){
	int tablero[N][N];
	//Asignamos los valores del tablero a 0
	for(int i=0;i<N;i++){
		for(int j = 0;j<N;j++){
			tablero[i][j] = 0;
		}
	}
	cout<<"Mostrando arreglo"<<endl;
	for(int i=0;i<N;i++){
		cout<<reinas[i]<<"|";
	}
	cout<<endl<<endl;
	
	//ASIGNAMOS EL VALOR DEL ARREGLO HACIA EL TABLERO
	for(int i = 0;i<N;i++){
		for(int j = 0;j<N;j++){
			tablero[reinas[j]][j] = 1;
		}
	}
	cout<<"Mostrando tablero"<<endl;
	for(int i = 0;i<N;i++){
	for(int j = 0;j<N;j++){
			cout<<tablero[i][j]<<"|";
	}
	cout<<endl;	
	}


	cout<<endl;
}
