#include <stdio.h>

int main(){

    int placa;
    printf("digite o numero final da sua placa de veiculo\n");
    scanf("%d", &placa);
    
    if(placa == 1){
        printf("rodizio de segunda-feira\n");
    }
    else if(placa == 2){
        printf("rodizio de segunda-feira\n");
    }

    else if(placa == 3){
        printf("rodizio de terça-feira\n");
    }
    else if(placa == 4){
        printf("rodizio de terça-feira\n");
    }

   else if(placa == 5){
        printf("rodizio de quarta-feira\n");
    }
    else if(placa == 6){
        printf("rodizio de quarta-feira\n");
    }
   else if(placa == 7){
        printf("rodizio de quinta-feira\n");
    }
    else if(placa == 8){
        printf("rodizio de quinta-feira\n");
    }
   else if(placa == 9){
        printf("rodizio de sexta-feira\n");
    }
    else if(placa == 0){
        printf("rodizio de sexta-feira\n");
    }

    else{
        printf("final de placa invalido\n");
    }

return 0;
}
