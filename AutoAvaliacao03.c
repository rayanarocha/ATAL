#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Escrever um programa ue leia um caracter digitado pelo usu�rio, imprima o caracter digitado e o c�digo ASCII correspontente a esse caracter.

//LETRA A

int main(int argc, char *argv[]) {
	
	char c;
	printf("Digite um caracter: \n");
	scanf("%c", &c);
	printf("Caracter digitado %c", c);
	printf(" e seu valor na tabela ASCII �: %d\n", c);
		
	//LETRA B
	
	char str1[10] = "cavalo";
	char str2[10] = "tigre";
	
	printf("Segunda letra da string %s\n ", str1, " �: %s\n", str1[1]);
	printf("Segunda letra da string %s\n ", str2, " �: %s\n", str2[1]);
	
	return 0;
}
