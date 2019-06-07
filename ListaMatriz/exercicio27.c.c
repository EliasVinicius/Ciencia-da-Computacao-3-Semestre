#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char* argv[]){
    
    int A[2][2],B[2][2];
    int i,j,cont=0;
    
   for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("Informe o elemento da linha %d da coluna %d: ",i+1,j+1);
        scanf("%d", &A[i][j]);
        
        B[i][j] = A[i][j];
        if(A[i][j]!=B[i][j]){
            cont++;
        }
    }
}
    if(cont>0){
        printf("\n\nA matriz nao e simetrica!!\n\n");
    }else{
        printf("\n\nA matriz e simetrica!!\n\n");
    }
    
    system("PAUSE");
    return 0;
}
