#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Disciplina: Linguagem e L�gica de programa��o
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos/Marcos Aurelio A M de Moraes
// Descri��o: Calcula quantidade de adubo e sementes
// Fun��o : Calcula adubo e sementes
// Data : 13/04/2018 

int main () {  

float tamplantacao, qtdadubo, qtdsementes;  

setlocale(LC_ALL, "Portuguese");
printf("************** BEM VINDO AO SISTEMA DE CALCULO DE PLANTA��O **************\n");
printf("Digite o tamanho da area de planta��o em m2: ");
scanf("%f",&tamplantacao);
qtdadubo = (tamplantacao*1.5);
qtdsementes = (tamplantacao*1);

printf("Sua planta��o tem %0.2f m2 e voc� precisara de: \n",tamplantacao);
printf("%0.2f Kg de Sementes e %0.2f kg de adubo", qtdsementes, qtdadubo );
 
return(0); 
}
