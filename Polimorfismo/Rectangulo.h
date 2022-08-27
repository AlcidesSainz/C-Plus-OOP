#include<iostream>
#include"Poligono.h"
using namespace std;

class Rectangulo : public Poligono{
	private:
		float base;
		float altura;
		public:
			Rectangulo(float base,float altura){
				this->base = base;
				this->altura = altura;
			}
			float perimetro(){
			float perimetro = 2*altura+2*base;
				return perimetro; 
			}
			float area(){
			float area = base*altura;
				return area;
			}
};
