#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j,tam; // declaração da variavel index's e da variavel que receberá o tamanho da string
    char frase[100],conversao[100]; // declaração de vetores
    
    printf("Digite uma frase: ");
    gets(frase); // ler a string incluindo o espaço
    printf("\n");
    
    tam = strlen(frase); // a funcao strlen() lê o tamanho da string e atribui a variavel tam.
    
    for (i=0,j=0;i <= tam; i++) // inicio do laco de repeticao
    {
        conversao[j]=frase; // conversao na posicao j recebendo frase na posicao i
        conversao[j+1]=frase; // conversao na posicao j+1 recebendo frase na posicao i novamente.
        j=j+2; // a cada dois caracteres o vetor conversao na posicao j tera de receber frase na posicao i novamente
               // portanto, faz-se necessário que j pule duas posições para que conversao na posicao j não seja substituido por frase na posicao i
    }
    
    printf("A String modificada e: %s",conversao); // resultado final
    
}
