#include<stdio.h>
#include<windows.h>
#include<conio.h>

/* Crie um programa que copie um vetor de 10 posições de inteiros (preenchidos
aleatoriamente), de trás para frente, em um segundo vetor.  */

int main() {
	system("chcp 1252 > nul");
	
    int i;
    int v1[10], v2[10];

    srand(time(NULL));

    for(i = 0; i < 10; i++){
  		v1[i] = rand();
	}

    for(i = 0; i < 10; i++){
    	printf("%d ", v1[i]);
	}
       
    printf("\n\n");
    
    i=0;
 	
    for(i = 9; i >= 0; i--){
    	v2[i]=v1[i];
    	printf("%d ", v2[i]);
	}
	
}
