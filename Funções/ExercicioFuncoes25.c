#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
	
	return (n < 2) ? n : (fibonacci(n - 1) + fibonacci(n - 2));
}

// ---------------------------------------------------------------

int main(void) {

	int num, i = 0;

	printf("Informe um numero: ");
	scanf("%d", &num);
	for(i = 0; i < num; i++)
		printf("%d\t", fibonacci(i + 1));

	printf("\n");
	return 0;
}
