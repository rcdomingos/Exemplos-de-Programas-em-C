#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define MAX 20
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos
// Descrição: programa que receba um vetor de até 20 números e
// após receber os números permita somar ou tirar a média dos números que o compõe
// Função : Soma ou calcula media do vetor
// Data : 11/05/2018

void main (){
setlocale(LC_ALL, "Portuguese");
//definido as variaveis utilizadas


int vetor[MAX], i,rept,opcao,soma;
float media;
soma = 0;
media = 0;

//Começamdo o programa
printf("****************************************************************\n");
printf("******* BEM VINDO AO PROGRAMA DE SOMA E MEDIA DE VETORES *******\n");
printf("****************************************************************\n");

//verificando quantos numeros serão digitados no vetor
printf("De 1 A 20 Digite quantos números serão digitados: ");
scanf ("%d", &rept);

//Recebendo e guardando os numeros do vetor
	for(i=0;i<rept; i++ ){
		printf("Digite o numero %d: ", i+1);
		scanf("%d",&vetor[i]);
		soma=soma+vetor[i]; //calculando a soma
	}

//calculando a media
media = soma/rept;

//Verificando se a opção exite e qual calculo será feito
 while(opcao < 1 || opcao > 2){
    printf("\n******* DIGITE A OPÇÃO PARA O CALCULO QUE DESEJA EFETUAR *******\n");
    printf("1 - SOMA \n");
    printf("2 - MÉDIA \n");
    printf("\nOpção: ");
    scanf("%d",&opcao);
//mostrando o resultado da opção escolhida
    switch(opcao){
        case 1:
            printf("\nA SOMA Total do vetor é %d \n", soma);

            break;
        case 2:
            printf("\nA MÉDIA do vetor foi %0.2f \n", media);
            break;
        default:
            printf("\nOpcao invalida, escolha outra opção...\n");
            break;
    }
 }

system("pause");

 }

