#include<iostream>
#include<math.h>
#include"figura.h"
using namespace std;

class Triangulo : public Figura{
	private:
		float lado1,lado2,lado3;
	public:
		Triangulo(float nlados,float lado1,float lado2,float lado3) : Figura(nlados){
			this->lado1 = lado1;
			this->lado2 = lado2;
			this->lado3 = lado3;
		}
		float areaTriangulo(){
			float p = (lado1+lado2+lado3)/2;
			float area = sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
			return area;
		}
};
