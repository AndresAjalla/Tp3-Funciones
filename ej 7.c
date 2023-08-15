#include <stdio.h>
#include <stdlib.h>


void mayor (int a ,int b);

int main(){
	
	int a,b;
	
	printf ("\n Ingrese un numero: ");
	scanf ("%d",&a);
	printf ("\n Ingrese un numero: ");
	scanf ("%d",&b);
	
	mayor(a,b);
	
	system ("pause");
	
	return 0;
}
	void mayor (int a, int b){
		if (a>b) {
			printf("\n El numero mayor es: %d",a);
		}
		else if (b>a) {
			printf("\n El numero mayor es: %d",b);
		}
		else {
			printf ("\n Ambos numero son iguales");
			printf ("\n %d = %d",a,b);
		}
	}
		
