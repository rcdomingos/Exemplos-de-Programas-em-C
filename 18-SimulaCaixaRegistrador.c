#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define MAXV 10
// Disciplina: Linguagem e Lógica de programação
// Professor: Thiago de Moraes
// Autores : Reginaldo C Domingos / Renata Carrilo
// Descrição: Programa para simular um caixa registrador,
// EXERCICIO 4)Programa que receba 10 preços de itens de uma compra, ao término some de modo a ter um
// total da compra, feito isso, receba a quantidade paga pelo usuário e exiba um alerta caso falte dinheiro,
// ou a quantidade de troco a ser devolvida caso haja troco(em caso de valor igual exibir 0).
// Função : Caixa Registrador
// Data : 22/06/2018

int main(){
    //definir o idioma em portugues
	setlocale(LC_ALL, "Portuguese");
    //variaveis utilizadas
	int i;
	float precos[MAXV], totalcompra=0, totalpago = 0,troco=0, ajustpago;
    //logica do programa

    printf("************ COMPRAS *************\n");
    printf("Digite o valor dos itens comprados\n");
    for (i = 0; i< MAXV; i++){
        printf("Item %d: ",i+1);
        scanf("%f",&precos[i]);
        totalcompra = totalcompra+precos[i];
    }

    printf("\nTodal da compra: %0.2f reais\n", totalcompra);

    printf("\n*********** PAGAMENTO ************\n");
    printf("Valor Recebido: ");
    scanf("%f",&totalpago);
    troco = totalpago - totalcompra;


    while(totalpago < totalcompra){
        printf("\nO valor pago esta menor que o valor total da compra\n");
        printf("Por favor digite o valor restante, faltam %0.2f reais: ", troco);
        scanf("%f",&ajustpago);
        totalpago = totalpago + ajustpago;
        troco = totalpago - totalcompra;
    }
    system("CLS");
    printf("***** PAGAMENTO PROCESSADO *******\n\n");
    printf("Total:R$ %0.2f \nPago:R$ %0.2f \nTroco:R$ %0.2f\n",totalcompra,totalpago,troco);
    printf("\nAgradecemos pela sua preferência\n");

    printf("\n**********************************\n");


return 0;
	}
