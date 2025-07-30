#include <stdio.h>

int main(){
    int nota;
    printf("digite a nota do aluno: ");
    scanf("%d", &nota);

    if (nota >= 90){
        printf("conceito: A\n");
    } else if (nota >= 80){
        printf("conceito: B\n");
    } else if (nota >= 70){
        printf("conceito: C\n");
    } else if ( nota>= 60){
        printf("conceito: D\n");
    } else {
        printf("conceito: F\n");
    }

    return 0;
}