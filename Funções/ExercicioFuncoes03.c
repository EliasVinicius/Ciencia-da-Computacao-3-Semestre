#include <stdio.h>
#include <regex.h>
#include <stdlib.h>
#include <stdbool.h>

bool valida(char strdata[]) {
	regex_t er; 		
	bool result = false;	


	regcomp(&er, "(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[012])/([12][0-9]{3})", REG_EXTENDED|REG_NOSUB);

	
	if((regexec(&er, strdata, 0, NULL, 0)) == 0)
		result = !result; 

	return result; 
}

// ----------------------------------------------------------------------------------------------------

int main(void) {
	char data[10];

	printf("Entre com uma data no formato dd/mm/yyyy: ");
	scanf("%s", data);
	
	printf((valida(data)) ? ("\nA data e valida!\n") : ("\nA data e invalida.\n"));

	return 0;
}
