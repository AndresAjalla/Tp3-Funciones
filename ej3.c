#include <stdio.h>
#include <stdlib.h>


void Hombres (int a, int b);
void Mujeres (int a, int b); 
int main(){
	
	
	int a,b;
	
	printf ("\n Ingrese cantidad de hombres: ");
	scanf ("%d",&a);
	printf ("\n Ingrese cantidad de mujeres: ");
	scanf ("%d",&b);
	
	
	Hombres(a,b);
	Mujeres(a,b);
	
	system ("pause");
	
	return 0;
}
	
	void Hombres (int a, int b) {
		float porHombres;
		int cant;
		cant=a+b;
		porHombres= (100*a)/cant;
		printf ("\n porcentaje de hombres = %f", porHombres);
		
	}
	void Mujeres (int a, int b) {
		float porMujeres;
		int cant;
		cant=a+b;
		porMujeres= (100*b)/cant;
		printf ("\n porcentaje de mujeres = %f", porMujeres);
	}
	
