#include <stdio.h>
#include <string.h>

int isvogal(int c)
{
    if((c >= 'A')&&(c <= 'Z'))
        c = 'a' + (c - 'A');
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
    }
    return 0;
}

int main(int argc, char* argv[])
{
    char frase[256];
    int i = 0;
    
    printf("Insira uma frase:\n");
    fgets(frase, 256, stdin);
    
    while(frase[i] != 0)
    {
        if(isvogal(frase[i]))
            frase[i] = '*';
        i++;
    }
    printf("Frase: %s\n", frase);
    return 0;
}
