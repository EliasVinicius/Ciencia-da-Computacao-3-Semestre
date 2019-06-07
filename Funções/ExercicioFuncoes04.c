#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void bask(double a, double b, double c) {

        double delta = (pow(b, 2) - (4 * a * c)), x1 = 0.0, x2 = 0.0;

        printf("Delta = %.4f\n", delta);

	
        if(delta > 0) {
	
                x1 = (-(b) + sqrt(delta)) / 2 * a;
                x2 = (-(b) - sqrt(delta)) / 2 * a;
                printf("X1 = %lf, X2 = %lf\n", x1, x2);
        } else	
                if(delta == 0) {
                        x1 = (-(b) + sqrt(delta)) / 2 * a;
                        printf("X = %lf\n", x1);
                } else {
			printf("Nao existem raizes reais.\n");
		}
}

int main(void) {

	double a, b, c;

	printf("Entre com os valores de uma equacao do segundo grau: \n");
	scanf("%lf%lf%lf", &a, &b, &c);
	
	bask(a, b, c);

	return 0;
}
