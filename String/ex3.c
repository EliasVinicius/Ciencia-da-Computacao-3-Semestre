#include <stdio.h>
#include <string.h>
int main ()
{
  int op,i,k,flagcima,flagvertical,flag=0,cont=0;
  char frase[100],chave[100],cifra[100],alfabeto[26],nfrase[100];
    alfabeto[0] = 'A';
    for (i=1;i<26;i++) {
        alfabeto[i] = alfabeto[i-1] + 1 ;   
    }
    while (flag!=1)  {
      printf("\n\nEscolha uma das seguintes opcoes:\n\t 1 - Cifrar Mensagem \n\t 2 - Decifrar Mensagem \n\t 3 - Sair\nOpcao: ");
    scanf("%d",&op);
        switch (op) {
           case 1: {
                printf("Insira o texto a cifrar:\n");
                fgets(frase,100,stdin);
                for (i=0;i<strlen(frase);i++) {
	  if (frase[i] != ' ') {
	    nfrase[cont] = toupper(frase[i]);
	    cont++;
	  }
	}
	nfrase[cont] = '\0';
	scanf("%*[^\n]");
	printf("Insira a palavra-chave:\n");
                fgets(chave,100,stdin);
                for (i=0;i<strlen(chave);i++) chave[i] = toupper (chave[i]);
	printf("\npalavra sem espacos: %s\n",nfrase);
                for (k=0;k<strlen(frase);k++) {    
                    for (i=0;i<26;i++) {
                        if (frase[k] == alfabeto[i]) flagcima = i;    
                    }
                    for (i=0;i<26;i++) {
                        if (chave[k%strlen(chave)] == alfabeto[i]) flagvertical = i;
                    }
                cifra[k] = ((flagcima + flagvertical) % 26) + 65;
                }    
                cifra[strlen(frase)] = '\0';
                printf("\nTexto Cifrado: %s\n",cifra); 
	break;
            }
