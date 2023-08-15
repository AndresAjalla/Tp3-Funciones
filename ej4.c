#include <stdio.h>
#include <stdlib.h>


void Presion (int a, int b);

int main(){
	
	int a,b;
	
	printf("\n Ingrese fuerza: ");
	scanf("%d",&a);
	printf("\n Ingrese area: ");
	scanf("%d",&b);
	
	Presion(a,b);
	
	system ("pause");
	
	return 0;
}
	
	void Presion (int a, int b){
		float presion;
		presion = a/b;
		
		printf ("\n La presion es de: %f",presion);
		
	}
		
