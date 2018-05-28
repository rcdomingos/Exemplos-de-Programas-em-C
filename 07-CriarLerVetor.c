#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define MAX 100
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos
// Descrição:Crie um programa que me permita inserir números em um vetor, e
// depois permita que eu resgate qualquer valor inserido introduzindo seu indice númerico.
// Função : Criar e Ler vetor
// Data : 11/05/2018

void main (){
setlocale(LC_ALL, "Portuguese");
//definido as variaveis utilizadas
int vet1[MAX], i, levetor,rept;
//Começamdo o programa
printf("*****************************************************************\n");
printf("***** BEM VINDO AO PROGRAMA QUE VERIFICA VALORES DE VETORES *****\n");
printf("*****************************************************************\n");

//verificando quantos numeros serão digitados no vetor
printf("Digite quantos numeros serão digitados: ");
scanf ("%d", &rept);
//Recebendo os numero do vetor
	for(i=0;i<rept; i++ ){
		printf("Digite o numero da posição %d: ", i);
		scanf("%d",&vet1[i]);
	}
//Verificando se a posição do numero a ser verificado existe
	do
	{
		printf("Digite a posição do numero que deseja ver: ");
			scanf("%d",&levetor);
				if (levetor > rept){
					printf("Numero digitado invalido, digite um numero de 0 até %d \n\n",rept-1);
				}
	} while (levetor > rept);
//imprimindo o numero da posição solicitada
	printf("\nO numero digitado na posição %d foi %d\n",levetor,vet1[levetor]);


system("pause");

 }

