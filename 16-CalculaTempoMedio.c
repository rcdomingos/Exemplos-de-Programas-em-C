#include <stdlib.h>
#include <stdio.h>
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos / Renata Carrilo
// Descrição: Programa para calcular o tempo de um percurso,
// EXERCICIO 2) programa que receba uma distância(em km/minutos) a ser percorrida,
// e a velocidade de um veiculo em km/minutos e com base nisso diga quantos minutos
// o veículo demorará para finalizar o percurso.
// Função : Verifica Tempo Medio
// Data : 22/06/2018

int main(){
	float distancia, velocidade, tempo;

//Recebendo as informações
    printf ("****** PROGRAMA CALCULA TEMPO MEDIO ******\n");
	printf("Digite abaixo as informacaoes do percurso\n");
	printf("Distancia (km): ");
	scanf("%f",&distancia);
	printf("Velocidade (km/h): ");
	scanf("%f",&velocidade);

	tempo = (distancia/velocidade)*60;
//imprimido o resultado
	printf ("\nTEMPO PARA O PERCURSO: %0.0f MINUTOS\n", tempo);

return 0;
	}
