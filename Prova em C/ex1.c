#include <stdio.h>
float soma_fracoes(float n){ 
  float S=0, i;
  for(i=1;i<=n;i++){
  	S += 1/i;
  }	
  return S;
}
main()
{
  float num;
  printf("Soma de Fracoes - Funcao com parametros");
  printf("\n\nDigite o numero de fracoes: ");
  scanf("%f",&num);
  printf("\n\nA soma de %.0f fracoes vale: %.4f",num,soma_fracoes(num));
}