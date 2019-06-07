int main()
{

    char vogais[] = {'a','e','i','o','u'};
    char str[1000] = "Trabalho de Auxilio do Mauricio !";
    for(int i =0; i<strlen(str); i++){
        int vogal=0;
        for(int v =0; v<5; v++){
            if(str[i] == vogais[v]) vogal= 1;
        }
        if(vogal == 1){
            str[i] = '@';
        }
    }
    printf("%s",str);
    return 0;
}
