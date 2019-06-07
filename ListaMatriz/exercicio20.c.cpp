#include <stdio.h>
 #include <stdlib.h>

main()
 {
 float m[12][4], total=0, mes=0;
 int i, j, opcao;

 for (i=0; i<12; i++) {
 printf("\nInforme as vendas do mes %d:\n", i+1);
 for (j=0; j<4; j++) {
 printf("\nSemana %d:\n", j+1);
 scanf("%f", &m[i][j]);
 }
 }
 for (i=0; i<12; i++) {
 mes = 0;
 printf("Mes %d:\n", i+1);
 for (j=0; j<4; j++) {
 printf("Total vendido na semana %d: %f\n", j, m[i][j]);
 mes += m[i][j];
 total += m[i][j];
 }
 printf("\nTotal vendido no mes %d: %f\n", i+1, mes);
 }
 printf("\nTotal vendido no ano: %f\n", total);
 }
