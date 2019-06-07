#include <stdio.h>
#include <stdlib.h>
main()
{
      int n, i, j, m[50][50], mt[50][50], simetrica=1;
      printf("Programa para verificar se uma matriz A eh anti-simetrica.\n\n");
      printf("Digite a ordem da matriz: ");
      scanf("%d", &n);
      printf("\nDigite as entradas da matriz:\n\n");
      for(i = 1; i <= n; i++)
      {
            for(j = 1; j <= n; j++)
            {
                  printf("a%d%d = ", i, j);
                  scanf("%d", &m[i][j]);
                  mt[j][i] = m[i][j];
                  m[i][j] = -m[i][j];
            }
      }
      for(i = 1; i <= n; i++)
      {
            for(j = 1; j <= n; j++)
            {
                  if(m[i][j] != mt[i][j])
                  {
                        simetrica = 0;          
                  }
            }
      }
      if(simetrica == 0)
      {
                   printf("\nA matriz fornecida NAO eh anti-simetrica.\n\n");
      }
      else
      {
          printf("\nA matriz fornecida eh anti-simetrica.\n\n");
      }
      system("pause");
}

