#include <stdio.h>
#include <stdlib.h>

void maiormenor() {
	int i = 0, atual = 0, menor = 0, maior = 0;

	printf("Digite 10 numeros: \n");

	scanf("%d", &atual);

	menor = maior = atual; 
	
	for (i = 0; i < 9; i++) {
		scanf("%d", &atual);

		if(atual < menor) menor = atual;

		if(atual > maior) maior = atual;
	}

	printf("Maior = %d, Menor = %d\n", maior, menor);
}

// ---------------------------------------------------------

int main(void) {

	maiormenor();

	return 0;
}
