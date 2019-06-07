#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool parouimpar(int n) {
	
	return (n % 2 == 0) ? false : true;
}

// ---------------------------------------------------------

int main(void) {

	int num;

	printf("Digite um numero: ");
	scanf(" %d", &num);
	
	printf("O numero informado e %s\n", (parouimpar(num) ? ("impar") : ("par")));

	return 0;
}
