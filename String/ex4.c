#include <stdio.h>
#include <string.h>

void main(void){
int i=0;
char vet[100];

    printf("Digite uma frase:\n");
    gets(vet);     /* lê a frase digitada e armazena na variável vet, 
                   incluíndo caracteres em branco */
    // "minha primeira frase"     total de palavras deverá ser 3

    while(strtok(NULL, " \t"))
       i++;


    printf("O total de palavras e %d \n", i);
}
