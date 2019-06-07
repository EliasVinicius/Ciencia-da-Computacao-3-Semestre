int main()
{

    char consoantes[] = {'b','B','c','C','d','D','f','F','g','G','h','H','j','J','k','K','l','L','M','m','n','N','p','P','q','Q','r','R','s','S','t','T','v','V','w','W','x','X','y','Y','z','Z'};
    char str[1000] = "Trabalho de Auxilio do Mauricio !";
    for(int i =0; i<strlen(str); i++){
        int consoante=0;
        for(int v =0; v<38; v++){
            if(str[i] == consoantes[v]) consoante= 1;
        }
        if(consoante == 1){
            str[i] = '#';
        }
    }
    printf("%s",str);
    return 0;
}
