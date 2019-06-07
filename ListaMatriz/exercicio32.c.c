int M = 5, N = 2; 
 int matriz[2][5] = {{1,2,3,4,5},{6,7,8,9,10}}; 
  int _tmp;  
  int coluna, linha, pos; 
   for(coluna=0; pos=M-1; coluna < M/2; coluna; pos--) {     
   for(linha=0; linha < N; linha++) {        
   _tmp = matriz[linha][pos];       
    matriz[linha][pos] = matriz[linha][coluna];      
	  matriz[linha][coluna] = _tmp;   
	    } 
		 }
