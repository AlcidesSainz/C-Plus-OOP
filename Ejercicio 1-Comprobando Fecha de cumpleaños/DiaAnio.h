//Implementacion de la clase DiaAnio

class DiaAnio{
	//Atributos
		private:
			int dia;
			int mes;
	
	//Metodos
		public:	DiaAnio(int _dia,int _mes){//Constructor 1
			dia = _dia;
			mes = _mes;
			
		}
		bool igual(DiaAnio& d);
		void visualizar();
};
