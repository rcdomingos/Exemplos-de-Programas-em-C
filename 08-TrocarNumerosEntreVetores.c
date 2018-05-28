#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define MAX 100
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos
// Crie um programa que receba dois vetores e depois troque os valores deles.
// Função : Trocar numero entre vetores
// Data : 11/05/2018
// define MAX 100

void main (){
setlocale(LC_ALL, "Portuguese");
//definido as variaveis utilizadas
int vet1[MAX],vet2[MAX],vetcopy[MAX],i,rept;

//Começamdo o programa
printf("****************************************************************\n");
printf("****** BEM VINDO AO PROGRAMA QUE TROCA NUMEROS DE VETORES ******\n");
printf("****************************************************************\n");
printf("Digite quantos numeros serão digitados nos vetores 1 e 2: ");
scanf ("%d", &rept);

//Recebendo os numero do vetor 1
    printf("DIGITE OS NUMEROS DO VETOR 1\n");
        for(i=0;i<rept; i++ ){
            printf("Digite o numero da posição %d: ", i);
            scanf("%d",&vet1[i]);
        }
//Recebendo os numero do vetor 2
    printf("\nAGORA DIGITE OS NUMEROS DO VETOR 2\n");
        for(i=0;i<rept; i++ ){
            printf("Digite o numero da posição %d: ", i);
            scanf("%d",&vet2[i]);
        }

  //fazendo a troca e imprimindo os numeros do vetor 1
    printf("\nAgora os numeros do Vetor 1 são: ");
        for(i=0;i<rept; i++ ){
            vetcopy[i]=vet1[i];
            vet1[i]=vet2[i];
            printf("%d,",vet1[i]);
    }
 //fazendo a troca e imprimindo os numeros do vetor 2
        printf("\nE os numeros do Vetor 2 são: ");
        for(i=0;i<rept; i++ ){
            vet2[i] = vetcopy[i];
            printf("%d,",vet2[i]);
    }

system("pause");

 }

