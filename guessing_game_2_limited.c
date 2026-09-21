#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int guess, secret;
    int try = 0;
    srand(time(0));
    secret = rand()%100+1;
    do{
        printf("guess the number 1 - 100: ");
        scanf("%d", &guess);
        try = try + 1;
        if(guess < secret){
            printf("this number is small, think about a large number\n");
        }
        else if(guess > secret){
            printf("this number is large, think about a small number\n");
        }
    } while(guess != secret && try <= 7);
    if(guess == secret){
    printf("good job! you won! the correct number is %d and try %d\n", secret, try);
    }
    else{
        printf("game over! the correct number %d and you  can't try %d anymore \n", secret, try);
    }
    return 0;
}