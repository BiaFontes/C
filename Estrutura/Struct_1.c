#include<stdio.h>
#include<windows.h>
#include<conio.h>

/*Crie uma estrutura representando os alunos do curso de Introdução a
Programação de Computadores. A estrutura deve conter a matrícula do aluno,
nome, nota da primeira prova e nota da segunda prova.
a) Permita ao usuário entrar com os dados de 5 alunos.
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior media geral.
d) Encontre o aluno com menor media geral.
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando
o valor 6,0 para aprovação.*/

struct alunos{
	int mat;
	char nome[100];
	float n1;
	float n2;
};

int main() {
	system("chcp 1252 > nul");
	
	struct alunos dados[5];
	int cont, i, posnome, posmaior, nome, nome2, nome3;
	float maiorn1=0, soma, media, mediaM=0, mediaMen=11;
	
	for(cont=0; cont<5; cont++){
		system("cls");
		
		printf("Matrícula: ");
		scanf("%d", &dados[cont].mat);
		
		printf("Nome do aluno: ");
		fflush(stdin);
		gets(dados[cont].nome);
		
		printf("Nota da 1° prova: ");
		scanf("%f", &dados[cont].n1);
		
		printf("Nota da 2° prova: ");
		scanf("%f", &dados[cont].n2);
	}
	for(cont=0; cont<5; cont++){
		if(dados[cont].n1>maiorn1){
			posmaior = cont;
			maiorn1 = dados[cont].n1;
			posnome=cont;
			nome=dados[cont].nome;
		}
	}
	for(cont=0; cont<5; cont++){
		soma = dados[cont].n1+dados[cont].n2;
		media = soma/2;
		if(media>mediaM){
			mediaM = media;
			posnome=cont;
			nome2=dados[cont].nome;
		}
		else if(media<mediaMen){
			mediaMen = media;
			posnome=cont;
			nome3=dados[cont].nome;
		}
	}

	printf("A maior nota da P1 é: %.2f. O nome do aluno é %s\n", maiorn1, nome);
	printf("\nA maior media é: %.2f. O nome do aluno é %s\n", mediaM, nome2);
	printf("\nA menor media é: %.2f. O nome do aluno é %s\n", mediaMen, nome3);
	
	for(cont=0; cont<5; cont++){
		soma = dados[cont].n1+dados[cont].n2;
		media = soma/2;
		if(media>=6){
			printf("\n%s Aprovado!\n", dados[cont].nome);
		} else if(media<6){
			printf("\n%s Reprovado!\n", dados[cont].nome);
		}
	}
}
