#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define MAX 100
// Disciplina: Linguagem e L�gica de programa��o
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos
// Descri��o:Crie um programa que me permita inserir n�meros em um vetor, e
// depois permita que eu resgate qualquer valor inserido introduzindo seu indice n�merico.
// Fun��o : Criar e Ler vetor
// Data : 11/05/2018

void main (){
setlocale(LC_ALL, "Portuguese");
//definido as variaveis utilizadas
int vet1[MAX], i, levetor,rept;
//Come�amdo o programa
printf("*****************************************************************\n");
printf("***** BEM VINDO AO PROGRAMA QUE VERIFICA VALORES DE VETORES *****\n");
printf("*****************************************************************\n");

//verificando quantos numeros ser�o digitados no vetor
printf("Digite quantos numeros ser�o digitados: ");
scanf ("%d", &rept);
//Recebendo os numero do vetor
	for(i=0;i<rept; i++ ){
		printf("Digite o numero da posi��o %d: ", i);
		scanf("%d",&vet1[i]);
	}
//Verificando se a posi��o do numero a ser verificado existe
	do
	{
		printf("Digite a posi��o do numero que deseja ver: ");
			scanf("%d",&levetor);
				if (levetor > rept){
					printf("Numero digitado invalido, digite um numero de 0 at� %d \n\n",rept-1);
				}
	} while (levetor > rept);
//imprimindo o numero da posi��o solicitada
	printf("\nO numero digitado na posi��o %d foi %d\n",levetor,vet1[levetor]);


system("pause");

 }

