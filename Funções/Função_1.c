#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

/*Crie uma função que receba por parâmetro um valor real correspondente 
à temperatura em graus Celsius e converta para Kelvin (K = C + 273), 
em seguida exiba o resultado na tela.*/

float temperatura(float c1){
	float k;
	k=c1+273;
	return(k);
}

main(){
	float kelvin, c2;
	printf("Insira a temperatura em Celsius: ");
	scanf("%f", &c2);
	
	printf("O valor da temperatura em Kelvin e: %.2f", temperatura(c2));
}
