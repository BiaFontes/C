#include <string.h>
#include <conio.h>
#include <stdio.h>

/*Crie um procedimento que receba por parâmetro uma string, e exiba cada letra em uma linha diferente,
 porém tudo em maiúsculo. */

void minusculo(char str[100]){
	
	int i;
	for(i=0;i<str;i++){
		
		int tamanho;
		tamanho=strlen(str);
		
		for(i=0;i<tamanho;i++){
			strlwr(str);
			printf("Valor do elemento %d da string = %c\n",i, str[i]);
		}
		return(0);
	}
}

main (){
	
	char string[100];
	
	printf("Insira a frase: ");
	gets(string);
	
	minusculo(string);
}
