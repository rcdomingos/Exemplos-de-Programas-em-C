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

float nota1,nota2,nota3,nota4,nota5,nota6,nota7,nota8,nota9,nota10, notatotal,medianota;

setlocale(LC_ALL, "Portuguese");
printf("****** BEM VINDO AO SISTEMA DE CALCULO DE VALOR E nota MEDIO ******\n");

printf("Digite a nota do aluno 1: ");
scanf("%f",&nota1);

printf("Digite a nota do aluno 2: ");
scanf("%f",&nota2);

printf("Digite o nota do aluno 3: ");
scanf("%f",&nota3);

printf("Digite o nota do aluno 4: ");
scanf("%f",&nota4);

printf("Digite o nota do aluno 5: ");
scanf("%f",&nota5);

printf("Digite o nota do aluno 6: ");
scanf("%f",&nota6);

printf("Digite o nota do aluno 7: ");
scanf("%f",&nota7);

printf("Digite o nota do aluno 8: ");
scanf("%f",&nota8);

printf("Digite o nota do aluno 9: ");
scanf("%f",&nota9);

printf("Digite o nota do aluno 10: ");
scanf("%f",&nota10);

notatotal =  nota1+nota2+nota3+nota4+nota5+nota6+nota7+nota8+nota9+nota10;
medianota= (notatotal/10);

if (nota1>=medianota) {
printf("\n Aluno 1 Aprovado");
}else{
printf("\n Aluno 1 Reprovado");
}

if (nota2>=medianota) {
printf("\n Aluno 2 Aprovado");
}else{
printf("\n Aluno 2 Reprovado");
}

if (nota3>=medianota) {
printf("\n Aluno 3 Aprovado");
}else{
printf("\n Aluno 3 Reprovado");
}

if (nota4>=medianota) {
printf("\n Aluno 4 Aprovado");
}else{
printf("\n Aluno 4 Reprovado");
}
 
 if (nota5>=medianota) {
printf("\n Aluno 5 Aprovado");
}else{
printf("\n Aluno 5 Reprovado");
}

if (nota6>=medianota) {
printf("\n Aluno 6 Aprovado");
}else{
printf("\n Aluno 6 Reprovado");
}

if (nota7>=medianota) {
printf("\n Aluno 7 Aprovado");
}else{
printf("\n Aluno 7 Reprovado");
}

if (nota8>=medianota) {
printf("\n Aluno 8 Aprovado");
}else{
printf("\n Aluno 8 Reprovado");
}

if (nota9>=medianota) {
printf("\n Aluno 9 Aprovado");
}else{
printf("\n Aluno 9 Reprovado");
}

if (nota10>=medianota) {
printf("\n Aluno 10 Aprovado");
}else{
printf("\n Aluno 10 Reprovado");
}


return(0); 
}
