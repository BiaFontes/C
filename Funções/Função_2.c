#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

/*Crie uma função em linguagem C chamado Dado() que retorna, através de 
sorteio (rand), um número de 1 até 6*/

int dado(){
	int sorteio, i;
	
	srand(time(NULL));
	for(i=0;i<6;i++){
		sorteio=rand()%6;
		return sorteio;
	}
}

main(){
	int sort;
	sort = dado();
	printf("%d",sort);
}
