#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Escreva uma função que some dois inteiros e retorne o valor da soma.

int soma(int x, int y){
	printf("Soma: %d", (x + y));
	return (0);
}

int main(int argc, char *argv[]) {

	//int saida;
	int x, y;
	printf("Digite o primeiro valor: \n");
	scanf("%d", &x);
	printf("Digite o segundo valor: \n");
	scanf("%d", &y);
	soma(x, y);
	return (0);
}
