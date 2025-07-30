#include <stdio.h>

int main(){
    int valor = 15;
    if (valor < 0){
        printf("o valor %d é negativo. \n", valor);
    } else if (valor >= 0 && valor <= 10){// verifica se o valor esta entre 0 e 10 (inclusive)
        printf("o valor %d está entre 0 e 10. \n", valor);
    } else if (valor > 10 && valor <= 20){// verifica se o valor está entre 11 e 20 (inclusive)
        printf("o valor %d esta entre 11 e 20. \n", valor);
    } else {// se não se encaixar em nenhuma das condições anteriores
        printf("o valor valor %d é maoir que 20. \n", valor);
    }

    return 0;
}