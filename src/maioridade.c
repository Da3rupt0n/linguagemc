#include <stdio.h>

int main(){
    int idade;
    printf("digite sua idade e depois clique em enter\n");
    scanf("%d", &idade);
    if (idade >17){
        printf("o usuario tem acesso já que sua idade é %d\n", idade);
    }
    else{
        printf("o usuario não tem acesso por que sua idadae é %d\n", idade);
    }
    return 0;

}