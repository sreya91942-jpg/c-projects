#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int guess, secret;
    srand(time(0));
    secret = rand()%100+1;
    do{
        printf("guess the number: ");
        scanf("%d", &guess);
        if(guess < secret){
            printf("this number is small, think about a large number\n");
        }
        else if(guess > secret){
            printf("this number is large, think about a small number\n");
        }
    } while(guess != secret);
    printf("good job! you won! the correct number is %d", secret);
    return 0;
}