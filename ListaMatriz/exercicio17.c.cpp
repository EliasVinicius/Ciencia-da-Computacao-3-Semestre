#include <stdio.h>
main()
{
  int mat[5][3],m[5][3],s,sal[5];
  
  for (m=0;m<5;m++){
  	  	printf("Manicure: %d\n",m);
  			for(s=0;s<1;s++){
	  	  		printf("Digite o numero de pes feitos: ");
		  			scanf("%d",&mat[m][s]);
		}
	}
	
	for (m=0;m<5;m++){
		  printf("Manicure: %d\n",m);
  				for(s=0;s<1;s++){
	  	  			printf("Digite o numero de maos feitas: ");
		  			scanf("%d",&mat[m][s]);
		}
	}	
	
	for (m=0;m<5;m++){
		  printf("Manicure: %d\n",m);
  				for(s=0;s<1;s++){
	  	 		 printf("Digite o numero de serviço de podologia feitos :  ");
		  		scanf("%d",&mat[m][s]);
		  
		}
	}	
		
		


		printf("Salario das manicures \n");
			for(m=0;m<5;m++){
				for(s=0;s<3;s++){
					printf("Manicure %d: %d\n",m[m][s]);
		}
	}
}




