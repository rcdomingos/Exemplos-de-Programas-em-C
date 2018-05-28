#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define MAX 20
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos
// Descrição: Programa no qual você povoe um vetor de 20 números e após povoar
// pesquise um número dentre este números e exiba o indice númerico do mesmo no vetor caso encontrado.
// Função : Localiza indice do vetor
// Data : 11/05/2018

void main (){
setlocale(LC_ALL, "Portuguese");
//definido as variaveis utilizadas


int vetor[MAX], i,rept, npesq, verdadeiro;
verdadeiro = 0;

//Começamdo o programa
printf("***********************************************************\n");
printf("******* BEM VINDO AO PROGRAMA PARA LOCALIZAR INDICE *******\n");
printf("***********************************************************\n");

//verificando quantos numeros serão digitados no vetor
printf("De 1 A 20 Digite quantos números serão digitados: ");
scanf ("%d", &rept);

//Recebendo e guardando os numeros do vetor
	for(i=0;i<rept; i++ ){
		printf("Digite o numero %d: ", i+1);
		scanf("%d",&vetor[i]);
	}

//numero a ser pesquisado
printf("Digite o numero para pesquisar: ");
scanf("%d",&npesq);

//pesquisa do numero
for(i=0; npesq != vetor[i] || i < rept; i++ ){
    if (npesq == vetor[i]){
        printf("\nNumero encontrado no indice %d\n", i);
        verdadeiro = 1;
    }

}
    if(verdadeiro != 1){
          printf("\nNumero não encontrado no vetor\n");
    }


system("pause");

 }

