#include <stdio.h>
#include <stdlib.h>

void primos() {
	int inicio = 5000, fim = 7000;
	int i = 0, j = 0, encontrados = 0;

	for(i = inicio; i <= fim; i++) {
		int count = 0;
		for(j = 1; j <= i; j++) {
			if(i % j == 0) {
				if(++count > 2) break;
			}
			if(i == j) {
				encontrados++;
				printf("%d\t", i);
				if(encontrados % 10 == 0) printf("\n");
			}
		}
	}

	printf("\n\nForam encontrados %d numeros primos entre %d e %d!\n", encontrados, inicio, fim);
}

// ------------------------------------------------------

int main() {
	primos();

	return 0;
}
