#include <stdio.h>
#include <stdlib.h>


void P (int a, int b);
void A(int a, int b);

int main(){
	
	int a,b, area,perimetro; 
	
	printf("\n Ingrese valor de A: ");
	scanf ("%d",&a);
	printf ("\n ingrese valor de B: ");
	scanf ("%d",&b);
	
	P(a,b);
	A(a,b);
	
	system("pause");
	return 0;
}
	
	void P (int a, int b){
		int perimetro = 0;
		perimetro= (2*a) + (2*b);
		printf ("\n el perimetro es: %d",perimetro); 
	}
		void A (int a, int b){
			int area = 0;
			area= a*b;
			printf ("\n el area es: %d",area); 
			
		}
			
			
