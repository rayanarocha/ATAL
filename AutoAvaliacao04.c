#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Escreva um programa que coloque os números de 1 a 100 na tela na ordem inversa (começando de 100 e terminando em 1)

//LETRA B

int main(int argc, char *argv[]) {
	
	int i;
	for(i = 100; i >= 1; i = i - 1) {
		printf("%d\n ", i);
	}	
	
	//Escreva um programa que leia uma string conte quantos caracteres desta string são iguais a 'a' e substitua os que forem iguais a 'a' por b.
	//O programa deve imprimir o número de caracteres modificados e a string modificada.
	
	//LETRA C
	
	int j, cont;
	char string[10];
	printf("Digite uma palavra: \n");
	gets(string);
	printf("Frase digitada %s\n", string);
	cont = 0;
	
	for(j = 0; string[j] != '\0'; j = j + 1){
		if(string[j] == 'a'){
			cont = cont + 1;
			string[j] = 'b';
		}
	}
	
	printf("Quantidade de caracteres iguais a 'a' é: %d ", cont);
	printf("%s", string);
	
	return 0;
}
