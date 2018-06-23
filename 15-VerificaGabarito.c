#include<stdio.h>
#include<stdlib.h>
#define maxa 10
#define maxr 20

// Disciplina: Linguagem e L�gica de programa��o
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos / Renata Carrilo,
// Descri��o: Algoritmo que recebe Gabarito e Verifica as notas
// EXERCICIO 1)programa que receba um gabarito de 20 quest�es, de depois receba 10 resultados de provas(contendo 20 quest�es)
// e teste contra este gabarito, ao t�rmino de cada preenchimento exibir a quantidade de erros e acertos e diga se o indiv�duo foi aprovado ou n�o
// (levando em conta que o m�nimo para ser aprovado s�o 10 acertos.), ap�s receber todas as respostas o sistema deve exibir a m�dia de erros e acertos.
// Fun��o : Verificar Gabarito
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
//Recebendo as notas e fazendo a corre��o
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
