#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define MAXV 20
// Disciplina: Linguagem e L�gica de programa��o
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos / Renata Carrilo
// Descri��o: Programa para verificar Peso do usuario,
// EXERCICIO 5)Crie um programa que receba um hist�rico de peso de um indiv�duo contendo 20
// n�meros,ao final diga qual o maior peso, qual o menor peso e a m�dia de peso.
// Fun��o : Verificar Peso
// Data : 22/06/2018

int main(){
    //definir o idioma em portugues
	setlocale(LC_ALL, "Portuguese");
    //variaveis utilizadas
	int i;
	float pesototal=0,pesos[MAXV],menorpeso,maiorpeso, mediapeso;

    //logica do programa
    printf("*** PROGRAMA PARA ACOMPANHAMENTO DE PESO ***\n");
	printf("Digite abaixo o historico de pesagem\n");

	for(i = 0; i < MAXV; i++){
        printf("peso %d: ", i+1);
        scanf("%f",&pesos[i]);
        pesototal = pesototal + pesos[i];
	}
//	printf("peso total:%f kg\n", pesototal);

// calculando a media do peso
	mediapeso = pesototal/MAXV;

// verificano o peso menor e maior
    for(i = 0; i < MAXV; i++){
        if(i == 0){
            menorpeso = pesos[i];
            maiorpeso = 0;
        }
        if(pesos[i] > maiorpeso){
            maiorpeso = pesos[i];
        }
        if(pesos[i] < menorpeso){
            menorpeso = pesos[i];
        }
    }
    system("CLS");
//imprimido os resultados
    printf("**** RESULTADO DO ACOMPANHAMENTO ****\n");
    printf("* Menor peso: %0.2f kg\n", menorpeso);
    printf("* Maior peso: %0.2f kg\n", maiorpeso);
    printf("* M�dia do peso: %0.2f kg\n\n\n", mediapeso);

    system("pause");
return 0;
	}
