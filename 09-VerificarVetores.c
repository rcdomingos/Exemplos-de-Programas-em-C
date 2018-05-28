#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define MAX 100
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos
// Descrição: Programa que receba dois vetores e calcula o quão parecidos eles são
//(baseando-se em números iguais na mesma posição), e se o vetor for completamente
// igual exibir uma mensagem dizendo que os vetores são identicos.
// Função : Verificar vetores
// Data : 11/05/2018

void main (){
setlocale(LC_ALL, "Portuguese");

//definido as variaveis utilizadas
int vet1[MAX],vet2[MAX],i,rept, qtdigual;
qtdigual = 0;
//Começamdo o programa
printf("****************************************************************\n");
printf("********** BEM VINDO AO PROGRAMA QUE VERIFICA VETORES **********\n");
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

//fazendo a comparação dos vetores
        for(i=0;i<rept; i++ ){
                if(vet1[i] == vet2[i]){
                    qtdigual=qtdigual+1;
                }
        }
//vericando o quao os vetores são iguais e imprimindo
if(qtdigual == rept){
    printf("\nCARAMBA OS VETORES SÃO INDENTICOS! =)\n");
} else if (qtdigual > (rept/2)){
    printf("\nOs vetores são mais de 50%% parecidos e possuem %d números iguais \n",qtdigual);
    } else {
        printf("\nOs vetores são menos de 50%% parecidos e possuem apenas %d números iguais \n",qtdigual);
    }

system("pause");

 }

