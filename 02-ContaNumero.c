#include <stdio.h>
#include <stdlib.h>
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos/Marcos Aurelio A M de Moraes
// Descrição: Algoritimo que recebe um numero inicial e um numero final e exiba a contagem
// Função : Conta Numero
// Data : 13/04/2018 

int main () {  

//declaração das variaveis
int numeroinicial, numerofinal;  

//inicio do programa
printf("************** CONTA NUMERO **************\n");
printf("Digite o numero inicial: ");
scanf("%i",&numeroinicial);

printf("Digite o numero final: ");
scanf("%i",&numerofinal);

//validação do numero inicial ser maior que o numero final
if(numeroinicial<numerofinal){
	for (numeroinicial;numeroinicial<=numerofinal;numeroinicial++) {
		
//validação se o numero é par
		if (numeroinicial%4 == 0){
			printf ("%i \n",numeroinicial);
		}	 
	}
}else
	for (numeroinicial;numeroinicial>=numerofinal;numeroinicial--) {
//validação se o numero é par
		if (numeroinicial%4 == 0){
			printf ("%i \n",numeroinicial);
		}
	}

//%2 mostra o resto da divisão	
	printf("\n\n");
	system ("pause");

return(0); 
}
