#include <stdio.h>

// vamos incluir uma nova biblioteca de sistema
// que possui o comando clear
#include <stdlib.h>

int main(){
    //vamos chamar a função do sistema para executar 
    // o comando clear ( limpar a tela de terminal)
    system("clear");

    int nummes;
    printf("============ programa mês ============\n");
    printf("\n pergunte ao programa qual é mês de número: ");
    scanf("%d", &nummes);
    printf("\n\n============================================\n");

    switch (nummes){
    case 1:
    printf("janeiro\n");
    break;
    case 2:
    printf("fevereiro\n");
        break;
        case 3:
        printf("março\n");
        break;
        case 4:
        printf("abril\n");
        break;
        case 5:
        printf("maio\n");
        break;
        case 6:
        printf("junho\n");
        break;
        case 7:
        printf("julho\n");
    break;
    case 8:
    printf("agosto\n");
    break;
    case 9:
    printf("setembro\n");
    break;
    case 10:
    printf("outubro\n");
    break;
    case 11:
    printf("novembro\n");
    break;
    case 12:
    printf("dezembro");
    break;
    default:
    printf("este més não extiste\n");
        }
        return 0;

}