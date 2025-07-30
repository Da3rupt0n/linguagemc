#include <stdio.h>
int main(){
    int placa;
    printf("digite o numero final da placa de seu automotivo e digite enter\n");
    scanf("%d", &placa);

    if(placa == 1 || placa == 2){
        printf("rodizio de segunda-feira\n");
    }
    else if(placa == 3 || placa == 4){
        printf("rodizio de terçã-feira\n");
    }
    else if(placa == 5 || placa == 6){
        printf("rodizio de quarta-feira\n");
    }
    else if(placa == 7 || placa == 8){
        printf("rodizio de quinta-feira\n");
    }
    else if(placa == 9 || placa == 0){
        printf("rodizio de sexta-feira\n");
    }
    else{
        printf("sem rodizio encontrado, tipo de placa não encontrada\n");
    }


    return 0;
}