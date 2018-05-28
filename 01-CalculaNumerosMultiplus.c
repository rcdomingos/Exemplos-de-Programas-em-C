#include <stdio.h>
#include <stdlib.h>
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos/Marcos Aurelio A M de Moraes
// Descrição: Verifica quais são o multiplos de um determindao numero
// Função : Verificar seus divisores
// Data : 13/04/2018 

int main () {  

//declaração das variaveis
int numero, numeroinicial, numerofinal;  

//inicio do programa
printf("********************************************************\n");
printf("*************** VERIFICA NUMERO MULTIPLO ***************\n");
printf("********************************************************\n");
printf("Digita o numero que deseja descorbrir seus multiplos: ");
scanf("%i",&numero);

printf("Digite o numero inicial: ");
scanf("%i",&numeroinicial);

printf("Digite o numero final: ");
scanf("%i",&numerofinal);

//validação do numero inicial ser maior que o numero final
if(numeroinicial<numerofinal){
	for (numeroinicial;numeroinicial<=numerofinal;numeroinicial++) {
		
//validação se o numero é par
		if (numeroinicial%numero == 0){
			printf ("%i,",numeroinicial);
		}	 
	}
}else
	for (numeroinicial;numeroinicial>=numerofinal;numeroinicial--) {
//validação se o numero é par
		if (numeroinicial%numero == 0){
			printf ("%i, ",numeroinicial);
		}
	}

//%2 mostra o resto da divisão	
	printf("\n\n");
	system ("pause");

return(0); 
}
	

