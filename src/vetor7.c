#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    char nome[10]="robereto";
    char sobrenome[6]="gomes";
    printf("letra==============dec==================Bin====================memoraia\n");
    int i;
    for(i = 0; i < 10; i++){
    printf("%c=============%d===========%i=============%p\n", nome[i], nome[i], nome[i],&nome[i]);
    }
    return 0;
}