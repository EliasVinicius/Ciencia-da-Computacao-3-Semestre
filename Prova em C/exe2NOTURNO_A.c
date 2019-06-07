#include<stdio.h> 
#include<stdlib.h> 

main() { 
int x, y, z, vetor[12]; 

for (int i = 1; i <= 12; i++) { 
printf ("Digite seu %d valor: ", i); 
scanf ("%d", &vetor[i]); 
} 

printf("Quais valores voce quer somar? Digite a primeira posicao: "); 
scanf("%d", &x); 
printf("Digite a segunda posicao: "); 
scanf("%d", &y); 
printf("Voce escolheu os valores: %d e %d \n", vetor[x],vetor[y]); 

z = (vetor[x] + vetor[y]); 

printf("O valor da soma e: %d \n", z); 

system ("PAUSE"); 
}
