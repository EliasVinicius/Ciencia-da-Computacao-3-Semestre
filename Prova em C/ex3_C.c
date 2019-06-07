int main()
{
    char str[1000] = "Trabalho de Auxilio do Mauricio !";
    char frase;
    for(int i =0; i<strlen(str); i++){
        int frase=0;
        for(int v =0; v<5; v++){
            if(str[i] == ' ') frase= 1;
        }
        if(frase == 1){
            str[i] = '&';
        }
    }
    printf("%s",str);
    return 0;
}