#include <stdio.h>
#include <stdlib.h>


void octava (float a);

int main(){
	
	float a;
	
	printf ("\n Ingrese un numero: ");
	scanf ("%f",&a);
	
	octava(a);
	
	system ("pause");
	
	return 0;
}
	
	void octava(float a){
		float oct;
		oct=a/8;
		
		printf("\n Resultado: %f",oct);
	}
		
		
