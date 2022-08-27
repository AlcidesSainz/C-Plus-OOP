#include<iostream>
using namespace std;

class Expediente{
	private:
		int nroExpediente;
	public:
		Expediente(int nroExpediente){
			this->nroExpediente = nroExpediente;// Constructor
		}
		Expediente(){
			
		}
		~Expediente(){
			
		}
		int getnroExpediente(){
			return nroExpediente;
		}
		
};
