#include <stdio.h>
#include <math.h>

//agulhas de buffon
//monte carlo

double pi(void); //prototipo de função

int main(void){
	printf("Valor de PI: %f\n", pi());
}

double pi(void){
	int i;
	double valor_pi = 0, incr;
	for (i = 0; i < 10000000; i++){
		incr =pow(-1,i)/((2*i)+1);
		valor_pi = valor_pi + incr;
	} 	
	valor_pi = valor_pi * 4;
	return valor_pi;
}
