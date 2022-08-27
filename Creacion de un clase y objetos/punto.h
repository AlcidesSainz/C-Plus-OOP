//Declaracion de una clase
	
	class Punto{
		//ATRIBUTOS
		private:
			int x,y;
			//METODOS
			public:
				Punto(int _x,int _y){//Constructor 1
					x= _x;
					y= _y;
				}
				Punto(){//CONSTRUCTOR 2
					x = y = 0;
				}
	void setX(int valorX);//Establecemos el valor de X
	void setY(int valorY);//Establecemos el valor de Y
	int getX();//OBTENER EL VALOR DE X
	int getY();//Obtener el valor de Y
	};
