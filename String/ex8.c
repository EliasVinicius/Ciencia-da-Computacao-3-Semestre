#include <stdio.h>

main(){
    char str[30];
    int i, j, count = 0, aux = 0, c = 1;

    puts("Informe a String");
    gets(str);

    while (str[count] != '\0'){
        count++;
    }

    for(i = 0; i < count; i++){ 
        aux = 1; 
        for(j = i + 1; j < count; j++){ 
            if(str[i] == str[j]){ 
                aux++; 
            } else
                break;
        }   
        if(i == 0) 
          c = 1; 
        else{
          for(j = i - 1; j >= 0; j--){ 
            if(str[i] != str[j])
              c = 1;
            else{ 
              c = 0;
              break;
            }
          }

