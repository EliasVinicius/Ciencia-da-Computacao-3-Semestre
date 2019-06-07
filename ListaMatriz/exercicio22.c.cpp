#include<stdio.h>
 
int main(){
	int i,j,n,m;
	int A[3][3], giro[3][3];
	

	printf("Numero de linhas : ");
	scanf("%d",&n);
	printf("NUmero de colunas : ");
	scanf("%d",&m);
	printf("Entre com os elementos da matriz :\n");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d",&A[i][j]);
		}
	}
	
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			giro[i][j] = A[n-i-1][m-j-1];
		}
	}
	

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d ",giro[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
