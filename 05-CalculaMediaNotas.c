#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos/Marcos Aurelio A M de Moraes
// Descrição: Programa que recebe nota de 10 alunos, calcula a media e verifica quem passou
// Função : Calcular media e aprovar ou reprovar
// Data : 13/04/2018

int main () {

setlocale(LC_ALL, "Portuguese");
//Variaveis utilizadas
float vnota[10], notatotal,medianota;
int i;


printf("****** BEM VINDO AO SISTEMA DE CALCULO DE NOTA MEDIA ******\n");
for (i = 0; i < 10; i++){
    printf("Digite a nota do aluno %d: ",i+1);
    scanf("%f",&vnota[i]);
    printf("\n");
    notatotal = notatotal+vnota[i];
}

medianota= (notatotal/10);
//mensagem para verificar se o calculo esta OK
//printf("a nota media foi %0.2f \n \n", medianota);

for (i = 0; i < 10; i++){
    if (vnota[i]>= medianota) {
        printf("Aluno %d APROVADO \n\n", i+1);
    }else{
        printf("Aluno %d REPROVADO \n\n", i+1);
    }
}
return(0);
}
