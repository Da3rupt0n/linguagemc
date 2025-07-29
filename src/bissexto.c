#include <stdio.h>

int main(){
    int ano;


    printf("digite um ano e tecle enter\n");
    scanf("%d", &ano);

    if ( ano % 4 == 0){
        printf("este ano %d é bissexto\n", ano);
    }
    else{
        printf("este ano %d não é bissexto\n", ano);
    }
    
    return 0;
}