#include<stdio.h>
#include<stdlib.h>
#define maxa 2
#define maxr 2

// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos / Renata Carrilo
// Descrição: Algoritmo que recebe Gabarito e Verifica as notas
// Descrição: 1) Elabore um programa que receba um gabarito de 20 questões, de depois receba 10 resultados de provas(contendo 20 questões) 
// e teste contra este gabarito, ao término de cada preenchimento exibir a quantidade de erros e acertos e diga se o indivíduo foi aprovado ou não
// (levando em conta que o mínimo para ser aprovado são 10 acertos.), após receber todas as respostas o sistema deve exibir a média de erros e acertos.
// Função : Verifica Gabarito
// Data : 22/06/2018

int main (){
	char gabarito[maxr], respostas[maxa][maxr];
	int resperradas , respcertas , i, j, mediaprova = 1;
	float totalerro = 0,totalacerto = 0;
	
	printf("Digite o Gabarito da Prova:\n");
	for(i = 0;i < maxr; i++){
		printf("Resposta %d: ",i+1);
		scanf(" %c", &gabarito[i]);
	}
	

	for(i = 0;i < maxa; i++){
		respcertas = 0;
		resperradas = 0;
		
		printf("\nDigite as notas do aluno %d\n", i+1);
		
		for (j = 0; j < maxr; j++){
			printf("Resposta %d: ",j+1);
			scanf(" %c", &respostas[i][j]);
				
				if (gabarito[j] == respostas[i][j] ) {
					respcertas = respcertas + 1 ;
					totalacerto = totalacerto +1; 
					} else {
						resperradas = resperradas + 1;
						totalerro = totalerro + 1;
				}
		}
		if (respcertas >= mediaprova){
			printf ("O Aluno acertou %d e errou %d - ALUNO APROVADO \n",respcertas, resperradas );
		} else {
			printf("O Aluno acertou %d e errou %d - ALUNO REPROVADO \n",respcertas, resperradas );
		}
		
	}
	printf("\na media de acertos foi %0.2f e a media de erros foi %0.2f",totalacerto/2, totalerro/2 );

	
	return 0;
}
