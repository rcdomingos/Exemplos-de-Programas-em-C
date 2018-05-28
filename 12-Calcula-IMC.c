#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 2
#define MCAT 7

//1 crie um programa que calcula o IMC (Peso/ altura²) de 10 individuas e no final exiba um lista de indice IMC de todos os 10
//e mostrar quantos estão em cada categoria
//e quem tem o maior e menor peso, maior e menor altura
//IMC mais alto, mais baixo e media
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	int i, pmaior , pmenor, palto, pbaixo,ppesado,pleve ;
	float vpeso[MAX], valt[MAX], vimc[MAX];
	float media, maior, menor, alto, baixo,pesado,leve;
    int vcat[MCAT] = {0,0,0,0,0,0,0};

//Receber as informações e Calcular o IMC
	for (i = 0; i < MAX; i++){
		printf("Digite as informações da pessoa %d\n", i + 1);
		printf("Peso: ");
		scanf("%f", &vpeso[i]);
		printf("Altura: ");
		scanf("%f", &valt[i]);
		vimc[i] = (vpeso[i]/(valt[i]*valt[i]));
//		printf ("IMC= %f", vimc[i]);
	}
// Imprimir os IMCs dos individuos
	printf("\n*** RESULTADO DO CALCULO DO IMC DE CADA PESSOA ***\n");
	for (i = 0; i < MAX; i++){
		printf("A pessoa %d tem o IMC: %0.2f\n", i + 1, vimc[i]);

	}
// Verificar a categoria de cada individuo
		for (i = 0; i < MAX; i++){
	 		if (vimc[i]<17){
                vcat[0]++;;
			 }else if(vimc[i]>=17 && vimc[i]<=18.49){
			 	vcat[1]++;
			 }else if(vimc[i]>=18.5 && vimc[i]<=24.99){
			 	vcat[2]++;
			 }else if(vimc[i]>=25 && vimc[i]<= 29.99){
			 	vcat[3]++;;
			 }else if(vimc[i]>=30 && vimc[i] <= 34.99){
			 	vcat[4]++;;
			 }else if(vimc[i]>=35 && vimc[i] <=39.99){
			 	vcat[5]++;
			 }else {
			 	vcat[6]++;;
			 }
         }
//imprimindo as categorias
	printf("\n*** RESULTADO DAS CATEGORIAS DO IMC POR GRUPO ***\n");
	printf("%d Estão Muito abaixo do Peso\n",vcat[0]);
	printf("%d Estão Abaixo do Peso\n",vcat[1]);
	printf("%d Estão Com o peso Normal\n",vcat[2]);
	printf("%d Estão Acima do Peso\n",vcat[3]);
	printf("%d Estão com Obesidade 1\n",vcat[4]);
	printf("%d Estão com Obesidade 2 (severa)\n",vcat[5]);
	printf("%d Estão com Obesidade 3 (mórbida)\n",vcat[6]);

//verificando media, maior e menor dos IMC
	for (i = 0; i < MAX; i++){
			if(i==0){
				maior = vimc[i];
				menor = vimc[i];
				pmaior = 0;
				pmenor = 0;
				media = 0;
			}
			if (vimc[i] >= maior){
				maior = vimc[i];
				pmaior = i+1;
			}
			if (vimc[i] <= menor){
				menor = vimc[i];
				pmenor = i+1;
			}
			media = media + vimc[i];
        }

//verificando quem tem o maior e menor peso
	for (i = 0; i < MAX; i++){
			if(i==0){
				pesado = vpeso[i];
				leve = vpeso[i];
				ppesado = 0;
				pleve = 0;
			}
			if (vpeso[i] >= pesado){
				pesado = vpeso[i];
				ppesado = i+1;
			}
			if (vpeso[i] <= leve){
				leve = vpeso[i];
				pleve = i+1;
			}
    }

//verificando quem é o mais alto e o mais baixo
	for (i = 0; i < MAX; i++){
			if(i==0){
				alto = valt[i];
				baixo = valt[i];
				palto = 0;
				pbaixo = 0;
			}
			if (valt[i] >= alto){
				alto = valt[i];
				palto = i+1;
			}
			if (valt[i] <= baixo){
				baixo = valt[i];
				pbaixo = i+1;
			}
    }

//imprimindo os resultados obtdos nas pesiquisas
	printf("\n******** RESULTADO DOS TESTES REALIZADOS *******");
	printf("\n************* CLASSIFICAÇÃO POR IMC ************\n");
	printf(" A Pessoa %d tem o IMC mais auto de %0.2f\n",pmaior,maior );
	printf(" A Pessoa %d tem o IMC mais baixo de %0.2f\n",pmenor,menor );
	printf(" A Media dos IMCs foi de: %0.2f\n",(media/MAX));
	printf("\n********** CLASSIFICAÇÃO POR TAMANHO ***********\n");
	printf(" A Pessoa %d é a mais alta com %0.2f metros\n",palto,alto );
	printf(" A Pessoa %d é a mais baixa com %0.2f metros\n",pbaixo,baixo );
	printf("\n************ CLASSIFICAÇÃO POR PESO ************\n");
	printf(" A Pessoa %d é a mais pesada com %0.2f kilos\n",ppesado,pesado );
	printf(" A Pessoa %d é a mais leve com %0.2f kilos\n",pleve,leve );
	printf("************************************************\n");

	return 0;
}
