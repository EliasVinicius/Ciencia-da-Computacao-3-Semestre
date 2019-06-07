#include<stdio.h>
main()
{
 int matriz[3][3];
 int m,n,i,j;
 printf("Entre com as linhas e colunas : ");
 scanf("%d%d",&m,&n);
 
 printf("Entre com os elementos \n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&matriz[i][j]);
  }
 }
 
 
 printf("Matriz depois de 90° graus \n");
 for(i=0;i<n;i++)
 {
  for(j=m-1;j>=0;j--)
  {
   printf("%d  ",matriz[j][i]);
  }
  printf("\n");
 }
 
 return 0;
 
}

