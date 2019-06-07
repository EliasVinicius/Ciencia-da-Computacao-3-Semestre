#include <stdio.h>
#include <stdlib.h>

void divisores (int n) {
	int i = 1;
	printf("Divisores: ");
	for (i = 1; i < n; i++) {
		if (n % i == 0) { 
			printf(" %d  ", i); 
		}
	}
	printf("\n");
}

// ---------------------------------------------------------

int main(void) {

	float num;

	printf("Digite um numero: ");
	scanf(" %f", &num);

	divisores(num);

	return 0;
}
