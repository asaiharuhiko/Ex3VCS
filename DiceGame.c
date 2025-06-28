#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int d[2],total = 0;
    char name[50];

    srand((unsigned int)time(NULL));

    printf("What is your name?\n");
    printf("> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Rolling dice...\n");
    for(int i = 0 ; i < 2 ; i++){
        d[i] = rand() % 7;
        total += d[i];
        printf("Die %d: %d\n", i + 1, d[i]);
    }
    printf("Total value: %d\n", total);
    if(total > 7){
        printf("You won\n");
    } else{
        printf("You lost\n");
    }

    return 0;
}