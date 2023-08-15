#include <stdio.h>
#include <stdlib.h>


void mostrar (int a, int b);

int main(){
	int a,b;
	
	printf("\n Ingrese un numero: ");
	scanf("%d",&a);
	printf("\n Ingrese otro numero: ");
	scanf("%d",&b);
	
	mostrar(a,b);
	
	system("pause");
	
	return 0;
}
	
	void mostrar (int a, int b) {
		printf ("\n %d",a);
		printf ("\n %d",b);
	}
	
