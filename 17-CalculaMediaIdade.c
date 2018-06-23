#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define MAXV 10
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos / Renata Carrilo
// Descrição: Programa para verificar a media de idade,
// EXERCICIO 3) programa que receba 10 anos de nascimento e ao final diga quanto anos
// em média todos os indivíduos tem.
// Função : Verifica Media Idade
// Data : 22/06/2018

int main(){
    //definir o idioma em portugues
	setlocale(LC_ALL, "Portuguese");
    //variaveis utilizadas
	int anos[MAXV],i, idadetotal=0, anoatual = 2018;
	float mediaidade;
    //logica do programa
    printf("********* PROGRAMA PARA VERIFICAÇÃO DA IDADE MEDIA *********\n");
	printf("Digite o ano de nascimento completo dos indivíduos(ex:2001) \n");
//recebendo os anos de nascimento e calculando a idade
	for(i = 0; i < MAXV; i++){
        printf("Ano do indivíduo %d: ", i+1);
        scanf("%d",&anos[i]);
        idadetotal = idadetotal+(anoatual-anos[i]);
	}

	mediaidade = idadetotal/MAXV;
	//imprimindo os resutados
    //printf("\nidade total:%d, MAXV:%d \n",idadetotal,MAXV);
    printf("\n************* RESULTADO DO PROGRAMA *************\n");
    printf("\nA media da idade dos %d individuos é: %0.1f anos\n",MAXV, mediaidade);

return 0;
	}
