#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int secret, guess;
    int attempts = 0;
    srand(time(0));
    secret = rand()%100+1;
    while(guess != secret && attempts < 5){
        printf("guess the number 1 - 100: ");
        scanf("%d", &guess);
        attempts++;
        if(guess < secret){
            printf("this number is small, think about a large number\n");
        }
        else if(guess > secret){
            printf("this number is large, think about a small number\n");
        }
    }
    if(guess == secret){
        printf("good job! you won! the correct number is %d and attempts %d\n", secret, attempts);
    }
    else{
        printf("game over! the correct number %d and can't attempts %d anymore\n", secret, attempts);
    }
    return 0;
}