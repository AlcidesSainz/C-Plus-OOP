#include<iostream>
using namespace std;

class Figura{
	private:
		float nlados;
	public:
		Figura(float nlados){
			this->nlados = nlados;
		}
		~Figura(){
		}
		float getNlados(){
			return nlados;
		};
};
