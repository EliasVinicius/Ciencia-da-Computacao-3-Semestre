#include <stdio.h>
main()
{
  int mat[10][10],i,j;
  printf("Matriz de 10x10\n\n");
  for(i=0;i<10;i++){
  	for(j=0;j<10;j++){
  	  printf("\nDigite mat[%d][%d]: ",i,j);
  	  scanf("%d",&mat[i][j]);
    }
  }

  printf("MAtriz 10x10: \n\n");
  for(i=0;i<10;i++){
  	for(j=0;j<10;j++){
      printf("%d\t",mat[i][j]);		
  	}
  	printf("\n");
  }
  printf("\n\nMatriz Superior\n\n");
  for(i=0;i<10;i++){
  	for(j=0;j<10;j++){
  		if(i < j){ printf("%d\t",mat[i][j]); }  
		  else{ printf("\t");  }   		
  	}
  	printf("\n");
  }
}


