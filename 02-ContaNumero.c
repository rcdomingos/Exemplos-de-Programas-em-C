#include <stdio.h>
#include <stdlib.h>
// Disciplina: Linguagem e L�gica de programa��o
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos/Marcos Aurelio A M de Moraes
// Descri��o: Algoritimo que recebe um numero inicial e um numero final e exiba a contagem
// Fun��o : Conta Numero
// Data : 13/04/2018 

int main () {  

//declara��o das variaveis
int numeroinicial, numerofinal;  

//inicio do programa
printf("************** CONTA NUMERO **************\n");
printf("Digite o numero inicial: ");
scanf("%i",&numeroinicial);

printf("Digite o numero final: ");
scanf("%i",&numerofinal);

//valida��o do numero inicial ser maior que o numero final
if(numeroinicial<numerofinal){
	for (numeroinicial;numeroinicial<=numerofinal;numeroinicial++) {
		
//valida��o se o numero � par
		if (numeroinicial%4 == 0){
			printf ("%i \n",numeroinicial);
		}	 
	}
}else
	for (numeroinicial;numeroinicial>=numerofinal;numeroinicial--) {
//valida��o se o numero � par
		if (numeroinicial%4 == 0){
			printf ("%i \n",numeroinicial);
		}
	}

//%2 mostra o resto da divis�o	
	printf("\n\n");
	system ("pause");

return(0); 
}
