#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define MAX 100
// Disciplina: Linguagem e L�gica de programa��o
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos
// Descri��o: Programa que receba dois vetores e calcula o qu�o parecidos eles s�o
//(baseando-se em n�meros iguais na mesma posi��o), e se o vetor for completamente
// igual exibir uma mensagem dizendo que os vetores s�o identicos.
// Fun��o : Verificar vetores
// Data : 11/05/2018

void main (){
setlocale(LC_ALL, "Portuguese");

//definido as variaveis utilizadas
int vet1[MAX],vet2[MAX],i,rept, qtdigual;
qtdigual = 0;
//Come�amdo o programa
printf("****************************************************************\n");
printf("********** BEM VINDO AO PROGRAMA QUE VERIFICA VETORES **********\n");
printf("****************************************************************\n");
printf("Digite quantos numeros ser�o digitados nos vetores 1 e 2: ");
scanf ("%d", &rept);

//Recebendo os numero do vetor 1
    printf("DIGITE OS NUMEROS DO VETOR 1\n");
        for(i=0;i<rept; i++ ){
            printf("Digite o numero da posi��o %d: ", i);
            scanf("%d",&vet1[i]);
        }
//Recebendo os numero do vetor 2
    printf("\nAGORA DIGITE OS NUMEROS DO VETOR 2\n");
        for(i=0;i<rept; i++ ){
            printf("Digite o numero da posi��o %d: ", i);
            scanf("%d",&vet2[i]);
        }

//fazendo a compara��o dos vetores
        for(i=0;i<rept; i++ ){
                if(vet1[i] == vet2[i]){
                    qtdigual=qtdigual+1;
                }
        }
//vericando o quao os vetores s�o iguais e imprimindo
if(qtdigual == rept){
    printf("\nCARAMBA OS VETORES S�O INDENTICOS! =)\n");
} else if (qtdigual > (rept/2)){
    printf("\nOs vetores s�o mais de 50%% parecidos e possuem %d n�meros iguais \n",qtdigual);
    } else {
        printf("\nOs vetores s�o menos de 50%% parecidos e possuem apenas %d n�meros iguais \n",qtdigual);
    }

system("pause");

 }

