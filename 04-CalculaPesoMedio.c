#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos/Marcos Aurelio A M de Moraes
// Descrição: Algoritmo que receba peso e valor de 10 produtos e calcule o valor e peso medio
// Função : Calcular Peso e valor Medio
// Data : 13/04/2018

int main () {

setlocale(LC_ALL, "Portuguese");

float peso, valor, mediapeso,mediavalor,pesototal, valortotal;
int cont;


    printf("****** BEM VINDO AO SISTEMA DE CALCULO DE VALOR E PESO MEDIO ******\n");

    for (cont=1;cont<=10;cont++){
        printf("Digite o valor do produto %i: ",cont);
        scanf("%f",&valor);
        printf("Agora digite o peso do produto %i: ",cont);
        scanf("%f",&peso);
        valortotal = valortotal+valor;
        pesototal =  pesototal+peso;
    }
    mediavalor = (valortotal/10);
    mediapeso = (pesototal/10);
    printf("o valor médio é %0.2f e o peso médio é %0.2f ", mediavalor,mediapeso);

    return(0);
}

