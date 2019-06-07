#include<stdio.h>
void printMt(int mat[][3]) {
        int i, j;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    }

{
    int i,j,t;
    for(i=0;i<3/2;i++)
   {
     for( j=i;j<3;j++)
     {
       t=mat1[j][3-i-1];
       mat1[j][3-i-1]=mat1[j][i];
       mat1[j][i]=t;
     }
   }
      printf("270 graus \n");
      printMt(mat1);
}
int main()
{

 for(i=0;i<3;i++)
 {
  for( j=i;j<3;j++)
  {
    t=mat[i][j];
    mat[i][j]=mat[j][i];
    mat[j][i]=t;
  }
 }

}
