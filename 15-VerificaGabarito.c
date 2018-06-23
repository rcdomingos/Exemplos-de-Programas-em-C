#include<stdio.h>
#include<stdlib.h>
#define maxa 10
#define maxr 20

// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos / Renata Carrilo,
// Descrição: Algoritmo que recebe Gabarito e Verifica as notas
// EXERCICIO 1)programa que receba um gabarito de 20 questões, de depois receba 10 resultados de provas(contendo 20 questões)
// e teste contra este gabarito, ao término de cada preenchimento exibir a quantidade de erros e acertos e diga se o indivíduo foi aprovado ou não
// (levando em conta que o mínimo para ser aprovado são 10 acertos.), após receber todas as respostas o sistema deve exibir a média de erros e acertos.
// Função : Verificar Gabarito
// Data : 22/06/2018

int main (){
	char gabarito[maxr], respostas[maxa][maxr];
	int resperradas , respcertas , i, j, mediaprova = 10, mediaquestoes;
	float totalerro = 0,totalacerto = 0;

	mediaquestoes = maxr*maxa;

    printf("*** PROGRAMA PARA CORRECAO DE PROVA ***\n");
	printf("Digite o Gabarito da Prova:\n");
//Recebendo o gabarito
	for(i = 0;i < maxr; i++){
		printf("Resposta %d: ",i+1);
		scanf(" %c", &gabarito[i]);
	}
//Recebendo as notas e fazendo a correção
	for(i = 0;i < maxa; i++){
		respcertas = 0;
		resperradas = 0;

		printf("\nDigite as notas do aluno %d\n", i+1);

		for (j = 0; j < maxr; j++){
			printf("Resposta %d: ",j+1);
			scanf(" %c", &respostas[i][j]);

				if (gabarito[j] == respostas[i][j] ) {
					respcertas++ ;
					totalacerto++;
					} else {
						resperradas++;
						totalerro++;
				}
		}
		if (respcertas >= mediaprova){
			printf ("O Aluno acertou %d e errou %d - ALUNO APROVADO \n",respcertas, resperradas );
		} else {
                printf("O Aluno acertou %d e errou %d - ALUNO REPROVADO \n",respcertas, resperradas );
            }

	}
	printf("\nMedia geral de acertos: %0.2f%%\n",(totalacerto/mediaquestoes)*100);
    printf("Media geral de erros: %0.2f%%\n",(totalerro/mediaquestoes)*100);


	return 0;
}
