#include<stdio.h>
#include<windows.h>
#include<conio.h>

/*Fazer um programa com um registro “livro”, que contém os elementos título,
ano de edição, número de páginas e preço. Criar uma variável desta estrutura,
que é um vetor de 5 elementos. Ler os valores para a estrutura e imprimir a
média do número de páginas dos livros.*/

struct livro{
	char titulo[100];
	int ano;
	int pag;
	float preco;
};

main(){
	system("chcp 1252 > nul");
	
	struct livro dados[5];
	int cont, media, soma;
	
	for(cont=0; cont<5; cont++){
		system("cls");
		printf("Título do livro: ");
		fflush(stdin);
		gets(dados[cont].titulo);
		
		printf("Ano de edição: ");
		scanf("%d", &dados[cont].ano);
		
		printf("N° de paginas: ");
		scanf("%d", &dados[cont].pag);
		
		printf("Preço do livro: ");
		scanf("%f", &dados[cont].preco);
		
	}
	for(cont=0; cont<5; cont++){
		soma=soma+dados[cont].pag;
	}
	
	media = soma/5;
	printf("A média de paginas dos 5 livros é: %d", media);
	
}
