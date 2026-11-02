#include <stdio.h>
int main(){
    int num1, num2, choice;
    while(choice != 0){
        printf("\n1. sum 2. diffrence 3. product 4. divide 0. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
        if(choice == 1){
            printf("enter two number: ");
            scanf("%d %d", &num1, &num2);
            printf("sum = %d\n", num1+num2);
        }
        else if(choice == 2){
            printf("enter two number: ");
            scanf("%d %d", &num1, &num2);
            printf("diffrence = %d\n", num1-num2);
        }
        else if(choice == 3){
            printf("enter two number: ");
            scanf("%d %d", &num1, &num2);
            printf("product = %d\n", num1*num2);
        }
        else if(choice == 4){
            printf("enter two number: ");
            scanf("%d %d", &num1, &num2);
            if(num2 == 0){
                printf("error: cannot divide bye zero\n");
            }
            else{
                printf("divide = %d\n", num1/num2);
            }
        }
        else if(choice == 0){
            printf("thank you bye bye\n");
        }
        else{
            printf("wrong choice\n");
        }
    }
    return 0;
}