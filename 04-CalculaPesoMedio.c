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

float peso, valor, mediapeso,mediavalor,pesototal, valortotal;  

setlocale(LC_ALL, "Portuguese");
printf("****** BEM VINDO AO SISTEMA DE CALCULO DE VALOR E PESO MEDIO ******\n");

printf("Digite o valor do produto 1: ");
scanf("%f",&valor);
printf("Agora digite o peso do produto 1: ");
scanf("%f",&peso);
valortotal = valortotal+valor;
pesototal =  pesototal+peso;

printf("\nDigite o valor do produto 2: ");
scanf("%f",&valor);
printf("Agora digite o peso do produto 2: ");
scanf("%f",&peso);
valortotal = valortotal+valor;
pesototal =  pesototal+peso;

printf("\nDigite o valor do produto 3: ");
scanf("%f",&valor);
printf("Agora digite o peso do produto 3: ");
scanf("%f",&peso);
valortotal = valortotal+valor;
pesototal =  pesototal+peso;

printf("\nDigite o valor do produto 4: ");
scanf("%f",&valor);
printf("Agora digite o peso do produto 4: ");
scanf("%f",&peso);
valortotal = valortotal+valor;
pesototal =  pesototal+peso;

printf("\nDigite o valor do produto 5: ");
scanf("%f",&valor);
printf("Agora digite o peso do produto 5: ");
scanf("%f",&peso);
valortotal = valortotal+valor;
pesototal =  pesototal+peso;

printf("\nDigite o valor do produto 6: ");
scanf("%f",&valor);
printf("Agora digite o peso do produto 6: ");
scanf("%f",&peso);
valortotal = valortotal+valor;
pesototal =  pesototal+peso;

printf("\nDigite o valor do produto 7: ");
scanf("%f",&valor);
printf("Agora digite o peso do produto 7: ");
scanf("%f",&peso);
valortotal = valortotal+valor;
pesototal =  pesototal+peso;

printf("\nDigite o valor do produto 8: ");
scanf("%f",&valor);
printf("Agora digite o peso do produto 8: ");
scanf("%f",&peso);
valortotal = valortotal+valor;
pesototal =  pesototal+peso;

printf("\nDigite o valor do produto 9: ");
scanf("%f",&valor);
printf("Agora digite o peso do produto 9: ");
scanf("%f",&peso);
valortotal = valortotal+valor;
pesototal =  pesototal+peso;

printf("\nDigite o valor do produto 10: ");
scanf("%f",&valor);
printf("Agora digite o peso do produto 10: ");
scanf("%f",&peso);
valortotal = valortotal+valor;
pesototal =  pesototal+peso;

mediavalor= (valortotal/10);
mediapeso= (pesototal/10);
printf("o valor medio é %0.2f e o peso medio é %0.2f ", mediavalor,mediapeso);

 
return(0); 
}
