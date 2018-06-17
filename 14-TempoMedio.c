#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//2) Elabore um programa que receba uma distância(em km/minutos) a ser percorrida, 
//e a velocidade de um veiculo em km/minutos e com base nisso diga quantos minutos 
//o veículo demorará para finalizar o percurso.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float distancia, velocidade, tempo;
	
	
	printf("Digite abaixo as informações do percurso\n");
	printf("Distância (km): ");
	scanf("%f",&distancia);
	printf("Velocidade (km/h): ");
	scanf("%f",&velocidade);
	
	tempo = (distancia/velocidade)*60;
	
	printf ("\nO tempo do percurso será de %0.0f minutos", tempo);
	
return 0;
	}
