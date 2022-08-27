/*Defina una plantilla para la clase MATERIA de tal manera que el tipo de dato del atributo calificacion sea del tipo T.
Esto permitira crear objetos tipo materia que contengan calificaciones que sean: numeros enteros,decimales y letras*/
#include <iostream>
#include"Materia.h"
using namespace std;

int main(int argc, char** argv) {
	cout<<"\tNotas de grado: "<<endl;
	Materia<float> matematica(9.89,"Matematica");
	matematica.mostrarNotas();

		Materia<float> historia(5.6,"Historia");
		historia.mostrarNotas();
		
			Materia<char> educacionFisica('E',"Educacion Fisica");
			educacionFisica.mostrarNotas();
			
				Materia<int> religion(10,"Religion");
				religion.mostrarNotas();
				
					Materia<string> filosofia("Reprobado","Filosofia");
					filosofia.mostrarNotas();
					
					cout<<"\nNuevas Notas Modificadas: "<<endl;
					matematica.setNotas(10.00);
					matematica.getNotas();
					matematica.mostrarNotas();
						
							historia.setNotas(9.90);
							historia.getNotas();
									historia.mostrarNotas();
								
									educacionFisica.setNotas('A');
									educacionFisica.getNotas();
									educacionFisica.mostrarNotas();
										
											religion.setNotas(9.00);
											religion.getNotas();
											religion.mostrarNotas();
												
													filosofia.setNotas("Aprobado");
													filosofia.getNotas();
													filosofia.mostrarNotas();
					
			
	
	return 0;
}
