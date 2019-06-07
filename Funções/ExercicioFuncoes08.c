#include <stdio.h>
#include <stdlib.h>



char * categoria (unsigned short age) {

	return (age >= 18) ? "Adulto" : (age >= 14)  ?  "Juvenil B" : (age >= 11) ? "Juvenil A" : (age >= 8) ? "Infantil B" : (age >= 5) ? "Infantil A" : "Idade nao permitida";
}

// --------------------------------------------------------------------------------------------------

int main(void) {

	int idade;

	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);

	printf("A classificacao do nadador eh: %s\n", categoria(idade));

	return 0;
}
