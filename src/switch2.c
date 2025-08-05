#include <stdio.h>
#include <stdlib.h>

int main(){
    // chamar o comando system("clear") para limpar a tela do terminal
    system("clear");
    //criar a variavel do tipo char paraguardar a operações matematicas
    // que poderá ser, + - * ou /
    char ch;
    //criar a variavel para guardar dois números para as operações 
    //matematicas
    int a, b;
    printf("Digite uma operação matematica: + , - , * , / \n");
    //vamos capturar o sinal digitado pelo usuario e alocar variavel
    // ch. usaremos o comando getchar, que vem da biblioteca stdlib
    // caso voce queira usar o scanf, poderia ser feito da seguinte forma 
    // scanf("%c",&ch)
    ch = getchar();
    printf("Digite dois numeros inteiros separados por espaço. \n");
    scanf("%d%d", &a, &b);
    switch (ch){
    case '+':{
        int c = a + b;
        printf("o resultado  da soma é %d\n",c);
    }
    break;
    case '-':{
        int d = a - b;
        printf("o resultado  da subtração é %d\n",d);
    }
    break;
    case '*':{
        int e = a * b;
        printf("o resultado  da multiplicação é %d\n",e);
    }
    break;
    case '/':{
        int f = a / b;
        printf("o resultado  da divisão é %d\n",f);
    }
    break;
    default:
    printf("operação invalida\n");
}
return 0;
    
}