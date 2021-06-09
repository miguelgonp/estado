#include <stdio.h>/
#include <stdlib.h>
#include <string.h>
int main() {
    char sigla[2];
    
    printf("digite seu estado:\n");
    scanf("%s", &sigla);
    
    printf(" seu estado e : %s\n", sigla);
    
    if(strcmp(sigla, "rj") == 0){
        printf("voce e carioca" );
    } else if (strcmp(sigla, "sp") == 0){
        printf("voce e paulista" );
    } else if (strcmp(sigla, "mg") == 0){
        printf("voce e mineiro" );
    } else if (strcmp(sigla, "ba") == 0){
        printf("voce e baiano" );
    }

    return 0; 
}

