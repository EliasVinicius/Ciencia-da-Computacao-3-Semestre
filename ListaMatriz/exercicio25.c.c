#include <stdio.h>
main()
{
  int M[3][3],i,j,det=0;
  printf("Determinante de uma matriz M de 3x3: \n\n");	
  printf("Carregando a matriz M de 3x3... \n\n");
  for(i=0;i<3;i++){
  	for(j=0;j<3;j++){
  	  printf("\nDigite M[%d][%d]: ",i,j);	
  	  scanf("%d",&M[i][j]);
	}
  }
  det = M[0][0]*M[1][1]*M[2][2] + M[0][1]*M[1][2]*M[2][0] + M[0][2]*M[1][0]*M[2][1] - (M[0][2]*M[1][1]*M[2][0] + M[0][0]*M[1][2]*M[2][1] + M[0][1]*M[1][0]*M[2][2]);
  system("cls");
  printf("Matriz M de 3x3... \n\n");
  for(i=0;i<3;i++){
  	for(j=0;j<3;j++){
  	  printf("%d\t",M[i][j]);
	}
	printf("\n");
  }
  printf("\n\ndet(M) = %d",det);
}
