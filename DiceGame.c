#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int d[2],total = 0;

    srand((unsigned int)time(NULL));

    printf("Rolling dice...\n");
    for(int i = 0 ; i < 2 ; i++){
        d[i] = rand() % 7;
        total += d[i];
        printf("Die %d: %d\n", i + 1, d[i]);
    }
    printf("Total value: %d\n", total);


    return 0;
}