#include <stdio.h>
int add(int a, int b){return a+b;}
int subtract(int a,int b){return a-b;}
int product(int a,int b){return a*b;}
float divide(int num1,int num2){
    if(num2 == 0){
        printf("Error: can't divided by 0\n");
        return 0;
    }
    else {
        return(float) num1/num2;
    }
}
int main (){
    int num1,num2,choice;
    int intresult;
    float floatresult;
    char again;
    do {
        printf("\n1.add 2.subtract 3.product 4.divide\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        printf("enter 2 number: ");
        scanf("%d %d",&num1,&num2);
        if(choice == 1){
            intresult = add(num1,num2);
            printf("add = %d\n",intresult);
        }
        else if(choice == 2){
            intresult = subtract(num1,num2);
            printf("subtract = %d\n",intresult);
        }
        else  if(choice == 3){
            intresult = product(num1,num2);
            printf("product = %d\n",intresult);
        }
        else if(choice == 4){
            floatresult = divide(num1,num2);
            printf("divide = %.2f\n",floatresult);
        }
        else {
            printf("galt choice hai\n");
        }
        printf("\nwould you like to do more h/n: ");
        scanf(" %c",&again);
    } while(again == 'h' || again == 'H');
    printf("thank you bye bye\n");
    return 0;
}

