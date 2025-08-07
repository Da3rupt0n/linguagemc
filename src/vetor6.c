#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    char cidade[10]="guaralhos";
    int i;
    for(i = 0; i < 10; i++){
        printf("%c | ", cidade[i]);
    }
    printf("\n");
    return 0;
}