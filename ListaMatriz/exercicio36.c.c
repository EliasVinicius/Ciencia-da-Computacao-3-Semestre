#include <stdio.h>
 #include <stdlib.h>

 //retorna o maior elemento do vetor
 int maxVet(int *vet, int tam) {
 if (tam == 1)
 return vet[0];
 else {
 int aux;
 aux = maxVet(vet, tam-1);
 if (aux > vet[tam-1])
 return aux;
 else
 return (vet[tam-1]);
 }
 }

 //retorna o menor elemento do vetor
 int minVet(int *vet, int tam) {
 if (tam == 1)
 return vet[0];
 else {
 int aux;
 aux = minVet(vet, tam-1);
 if (aux < vet[tam-1])
 return aux;
  else
 return (vet[tam-1]);
 }
 }


 //retorna a soma dos elementos do vetor
 int somaVet(int *vet, int ultPos) {
 if (ultPos > 0)
 return vet[ultPos] + somaVet(vet, ultPos-1);
 else
 return vet[ultPos];
 }

 //retorna o produto dos elementos do vetor
 int multVet(int *vet, int ultPos) {
 if (ultPos > 0)
 return vet[ultPos] * multVet(vet, ultPos-1);
 else
 return vet[ultPos];
 }

 //retorna a media dos elementos do vetor
 float mediaVet(int *vet, int ultPos, int tam) {
 if (ultPos == tam-1)
 return (vet[ultPos] + mediaVet(vet, ultPos-1, tam)) / tam;
 if (ultPos > 0 && ultPos != tam-1)
 return vet[ultPos] + mediaVet(vet, ultPos-1, tam);
 else
 return vet[ultPos];
 }

 void main()
 {
 int vet[20], i, max, min;
 int soma, prod;
 float media;

 for (i=0; i<20; i++) {
 printf("Informe um valor inteiro %d: \n", i+1);
 scanf("%d", &vet[i]);
 }

 max = maxVet(vet, 20);
 min = minVet(vet, 20);
soma = somaVet(vet, 19);
 prod = multVet(vet, 19);
 media = mediaVet(vet, 19, 20);
 printf("Maior: %d \n", max);
 printf("Menor: %d \n", min);
 printf("Soma: %d \n", soma);
 printf("Produto: %d \n", prod);
 printf("Media: %f \n", media);
 }

