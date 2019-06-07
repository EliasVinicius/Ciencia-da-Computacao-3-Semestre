#include <stdio.h>
main()
{
  int mat[4][5],soma,i,j;
  
  printf("Matriz A\n\n");						//Lê matriz A
  for(i=0;i<4;i++){
  	for(j=0;j<5;j++){
  	  printf("\nDigite [%d][%d]: ",i,j);
  	  scanf("%d",&mat[i][j]);
    }
  } 
  printf("Matriz A \n\n");						//Imprime Matriz A 
  for(i=0;i<4;i++){
  	for(j=0;j<5;j++){
  		soma= soma+mat[i][j];
      printf("%d\t",soma);		
  	}
  	printf("\n");
  }
}
