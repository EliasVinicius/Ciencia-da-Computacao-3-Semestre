#include <stdio.h>
#include <stdlib.h>

char conceito(float m) {
	
	return (m >= 9.0) ? 'A' : (m >= 7.0) ? 'B' : (m >= 5.0) ? 'C' : 'D';
}

// ---------------------------------------------------------

int main(void) {

	float num;

	printf("Digite a nota de media do aluno: ");
	scanf(" %f", &num);
	
	printf("O conceito final e %c\n", conceito(num));

	return 0;
}
