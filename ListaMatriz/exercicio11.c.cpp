#include <stdio.h>
main()
{
  int matA[3][4],matB[3][4],matC[3][4],i,j;
  
  printf("Matriz A\n\n");						//Lê matriz A
  for(i=0;i<3;i++){
  	for(j=0;j<4;j++){
  	  printf("\nDigite [%d][%d]: ",i,j);
  	  scanf("%d",&matA[i][j]);
    }
  }
  
printf("Matriz B \n\n"); 						//Lê Matriz B
  for(i=0;i<3;i++){
  	for(j=0;j<4;j++){
  	  printf("\nDigite [%d][%d]: ",i,j);
  	  scanf("%d",&matB[i][j]);
    }
  }  
  printf("Matriz A \n\n");
  for(i=0;i<3;i++){
  	for(j=0;j<4;j++){
      printf("%d\t",matA[i][j]);		
  	}
  	printf("\n");
  }
  printf("\n\n Triplo da Matriz A \n\n");
  for(i=0;i<3;i++){
  	for(j=0;j<4;j++){
  		matB[i][j] = matA[i][j]*3;
  		printf("%d\t",matB[i][j]);
  	}
  	printf("\n");
  }
}
