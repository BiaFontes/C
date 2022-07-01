#include<stdio.h>
#include<windows.h>
#include<conio.h>

/* Ler um vetor que contenha as notas de uma turma de 10 alunos.
Calcular a média da turma e contar quantos alunos obtiveram nota acima desta média calculada.
Escrever a média da turma e o resultado da contagem. */

int main() {
	system("chcp 1252 > nul");
	
	int i;
	float notas[10], media, totalA=0, soma;
	
	for(i=1;i<=10;i++){
		printf("Informe a nota do aluno %d: ", i);
		scanf("%f", &notas[i]);
		soma=soma+notas[i];
		}

	media = soma/10;
	
	for(i=1;i<=10;i++){
		if(i>media){
		totalA = totalA+1;
		}
	}
	
	printf("\nA média da sala é: %.2f", media);
	printf("\nO total de alunos com nota acima da média: %.2f", totalA);
}
