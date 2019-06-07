#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define max 10 


int vetA[max], vetB[max], vetC[max * 2];


bool repetido(int, int);
void mescla(void);
int compara(const void*, const void*);

// -------------------------------------------------------------------

int main(void) {

	int i = 0;

	
	printf("Vetor A: \n");
        for(i = 0; i < max; i++) {
                printf("vetA[%d] = ", i);
                scanf("%d", &vetA[i]);
        }

	printf("Vetor B: \n");
        for(i = 0; i < max; i++) {
                printf("vetB[%d] = ", i);
                scanf("%d", &vetB[i]);
        }

	qsort(vetA, max, sizeof(int), compara);
	qsort(vetB, max, sizeof(int), compara);

	
	mescla();

	return 0;

} 

//---------------------------------------------------------------------


bool repetido(int n, int limite) {
        int i = 0;
        for(i = 0; i < limite * 2; i++)
                if(vetC[i] == n) return true;

	return false;
}

// -------------------------------------------------------


void mescla() {
        int i = 0, j = 0, lidos = 0;


        for(i = 0; i < max; i++) {

                if(! (repetido(vetA[i], lidos))) {
                        vetC[j++] = vetA[i];
                        lidos++;
                }
        }

        for(i = 0; i < max; i++) {
                if(! (repetido(vetB[i], lidos))) {
                        vetC[j++] = vetB[i];
                        lidos++;
                }
        }
	
        qsort(vetC, lidos, sizeof(int), compara); 
        for(i = 0; i < lidos; i++) {
                printf("\nvetC[%d]\n", vetC[i]);
        }
}

// -------------------------------------------------------

int compara(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;

    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}
