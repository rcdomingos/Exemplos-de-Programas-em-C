#include <stdio.h>
#include <stdlib.h>


int main (){
 int deno, mult, i;
 char sim;	
	

while (sim != 's'){

printf("Qual tabuada deseja ver? ");
	scanf("%d",&deno);

	for(i=0;i <= 10; i++){
		mult=deno*i;
		printf("%d X %d = %d\n\a", deno,i,mult);
	}
	
	printf("Aperte S para sair ou digite 0 para continuar... ");
	scanf(" %c", &sim);
   
}
	return 0;
}
