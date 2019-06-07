#include <stdio.h>
main()
{
  int matA[5][5],matB[5][5],matC[5][5],i,j;
  
  printf("Matriz A\n\n");						//Lê matriz A
  for(i=0;i<5;i++){
  	for(j=0;j<5;j++){
  	  printf("\nDigite [%d][%d]: ",i,j);
  	  scanf("%d",&matA[i][j]);
    }
  }
  
printf("Matriz B \n\n"); 						//Lê Matriz B
  for(i=0;i<5;i++){
  	for(j=0;j<5;j++){
  	  printf("\nDigite [%d][%d]: ",i,j);
  	  scanf("%d",&matB[i][j]);
    }
  }  
  printf("Matriz A \n\n");						//Imprime Matriz A
  for(i=0;i<5;i++){
  	for(j=0;j<5;j++){
      printf("%d\t",matA[i][j]);		
  	}
  	printf("\n");
  }
  
  printf("Matriz B \n\n"); 						//Imprime Matriz B
  for(i=0;i<5;i++){
  	for(j=0;j<5;j++){
  	  printf("%d\t",matB[i][j]);
  }
  	  printf("\n");
}

  printf("\n\n Diferença A - B\n\n");
  for(i=0;i<5;i++){
  	for(j=0;j<5;j++){
  		matC[i][j] = matA[i][j] - matB[i][j];
  		printf("%d\t",matC[i][j]);
  	}
  	printf("\n");
  }
}
