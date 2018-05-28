#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define MAX 20
// Disciplina: Linguagem e L�gica de programa��o
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos
// Descri��o: programa que receba um vetor de at� 20 n�meros e
// ap�s receber os n�meros permita somar ou tirar a m�dia dos n�meros que o comp�e
// Fun��o : Soma ou calcula media do vetor
// Data : 11/05/2018

void main (){
setlocale(LC_ALL, "Portuguese");
//definido as variaveis utilizadas


int vetor[MAX], i,rept,opcao,soma;
float media;
soma = 0;
media = 0;

//Come�amdo o programa
printf("****************************************************************\n");
printf("******* BEM VINDO AO PROGRAMA DE SOMA E MEDIA DE VETORES *******\n");
printf("****************************************************************\n");

//verificando quantos numeros ser�o digitados no vetor
printf("De 1 A 20 Digite quantos n�meros ser�o digitados: ");
scanf ("%d", &rept);

//Recebendo e guardando os numeros do vetor
	for(i=0;i<rept; i++ ){
		printf("Digite o numero %d: ", i+1);
		scanf("%d",&vetor[i]);
		soma=soma+vetor[i]; //calculando a soma
	}

//calculando a media
media = soma/rept;

//Verificando se a op��o exite e qual calculo ser� feito
 while(opcao < 1 || opcao > 2){
    printf("\n******* DIGITE A OP��O PARA O CALCULO QUE DESEJA EFETUAR *******\n");
    printf("1 - SOMA \n");
    printf("2 - M�DIA \n");
    printf("\nOp��o: ");
    scanf("%d",&opcao);
//mostrando o resultado da op��o escolhida
    switch(opcao){
        case 1:
            printf("\nA SOMA Total do vetor � %d \n", soma);

            break;
        case 2:
            printf("\nA M�DIA do vetor foi %0.2f \n", media);
            break;
        default:
            printf("\nOpcao invalida, escolha outra op��o...\n");
            break;
    }
 }

system("pause");

 }

