#include <stdio.h>
#include <stdlib.h>




int triangulo(float x, float y, float z) {

	if (!(x < (y + z) && y < (x + z) && z < (x + y))) return 0;

	if (x == y && y == z) return 1;

	if (x != y && x != z && z != y) return 2;

	return 3;
}

// ---------------------------------------------------------

int main(void) {

	float n1, n2, n3;

	printf("Digite os tres lados de um triangulo: ");
	scanf(" %f%f%f", &n1, &n2, &n3);

	int result = triangulo(n1, n2, n3);
	char * str; 

	switch(result) {
		case 0:
			str = "nao formam um triangulo.";
			break;

		case 1:
			str = "forma um triangulo equilatero";
                        break;

		case 2:
			str = "nao formam um escaleno.";
                        break;

		case 3:
			str = "nao formam um isosceles.";
                        break;
	}

	printf("Os lados passados %s\n", str);

	return 0;
}
