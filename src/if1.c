#include <stdio.h>
int main() {
    int pontuacao = 85;
    char conceito;
    if( pontuacao >= 90){ // primeira condição
        conceito = 'A';
    } else if( pontuacao >= 80){ // segunda condição, só avaliada se a primeira for falsa
        conceito = 'B';
    } else if ( pontuacao >= 70){ // terceira condição, so avaliada se as anteriores forem falsas
        conceito = 'C';
    } else if( pontuacao >= 60){ // quarta condição, so avaliada se as anteiores forem falsas
        conceito = 'D';
    } else{ // se nenhuma das confiçoes acimas forem verdadeiras
        conceito = 'F';
    }
    printf("pontuação: %d -> conceito: %c\n", pontuacao, conceito);

    return 0;
}