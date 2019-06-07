#include <stdio.h>
#include <stdlib.h>


int main()
{

    char cadeia1 [] = "ola", cadeia2[] = "loa", i,j, aux;
    
    
    //Entrada de dados
    printf("\n Entre com a primeira frase: ");
    gets(cadeia1);
    
    printf("\n Entre com a segunda frase: ");
    gets(cadeia2);
    
    
    //Coloca as letras de cada frase em ordem alfabetica
    for(i = 0; i < strlen(cadeia1); i++){
        for(j = i+1; j< strlen(cadeia2); j++)){

            if(stricmp(cadeia1[i],cadeia1[j])>0)){
                strcpy(aux,cadeia1[i]);
                strcpy(cadeia1[i], cadeia1[j]);
                strcpy(cadeia1[j],aux);
            }
            if(stricmp(cadeia2[i],cadeia2[j])>0)){
                strcpy(aux,cadeia2[i]);
                strcpy(cadeia2[i], cadeia2[j]);
                strcpy(cadeia2[j],aux);
            }
             
           
       }
    }
    
    if((stricmp(cadeia1,cadeia2)) == 0){
        printf("\n\n São permutação! ");
    }else{
        printf("\n\n Não são permutação! ");
        
    }
    
    
    return 0;
}


