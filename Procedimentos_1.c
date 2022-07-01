#include <string.h>
#include <conio.h>
#include <stdio.h>

/*Crie uma struct chamada pessoa com os dados: nome e cpf. Crie um vetor para armazenar 5 pessoas.
 Elabore um procedimento para preencher o vetor, outro procedimento para exibir os
  nomes e cpfs cadastrados.*/
  
  struct pessoa{
  	char nome[50];
  	float cpf;
  }dados[5];
  
  void preencher(){
  	int i;
  	for(i=0;i<5;i++){
  		printf("Nome: ");
  		fflush (stdin);
  		gets(dados[i].nome);
  		printf("CPF: ");
  		scanf("%f", &dados[i].cpf);
	  }
	  system("cls");
  }
  
  void exibir(){
  	int i;
  	for(i=0;i<5;i++){
  		printf("%s\n", dados[i].nome);
  		printf("%.0f\n", dados[i].cpf);
	  }
  }
  
  main(){
  	
  	printf("Preencha os dados\n");
  	preencher();
  	exibir();
  }
