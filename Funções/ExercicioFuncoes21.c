#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void matrizSimetrica(int n) {

	bool simetrica = true;
	int matriz[n][n];

	int i = 0, j = 0;

	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("posicao [%d][%d] = ", i, j);
			scanf(" %d", &matriz[i][j]);
		}
	}

	for(i = 0; i < n; i++) {
                for(j = i; j < n; j++) { 
                        if(matriz[i][j] != matriz[j][i]) {
			
				simetrica = false; 
				break; 
			}
		}
		
	}

	printf((simetrica) ? "Eh simetrica\n" : "Nao eh simetrica\n");
}

// -----------------------------------------------------------------

int main(void) {

	int num;

	printf("Ler uma matriz quadrada de ordem N = ");
	scanf(" %d", &num);

	matrizSimetrica(num);

	return 0;
}
