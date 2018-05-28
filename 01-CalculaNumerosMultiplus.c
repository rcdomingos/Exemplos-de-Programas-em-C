#include <stdio.h>
#include <stdlib.h>
// Disciplina: Linguagem e L�gica de programa��o
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos/Marcos Aurelio A M de Moraes
// Descri��o: Verifica quais s�o o multiplos de um determindao numero
// Fun��o : Verificar seus divisores
// Data : 13/04/2018 

int main () {  

//declara��o das variaveis
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

//valida��o do numero inicial ser maior que o numero final
if(numeroinicial<numerofinal){
	for (numeroinicial;numeroinicial<=numerofinal;numeroinicial++) {
		
//valida��o se o numero � par
		if (numeroinicial%numero == 0){
			printf ("%i,",numeroinicial);
		}	 
	}
}else
	for (numeroinicial;numeroinicial>=numerofinal;numeroinicial--) {
//valida��o se o numero � par
		if (numeroinicial%numero == 0){
			printf ("%i, ",numeroinicial);
		}
	}

//%2 mostra o resto da divis�o	
	printf("\n\n");
	system ("pause");

return(0); 
}
	

