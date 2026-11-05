#include <stdio.h>
int add(int a, int b){return a+b;}
int subtract(int a,int b){return a-b;}
int product(int a,int b){return a*b;}
float divide(int a, int b){return(float) a/b;}
int main(){
    int num1,num2,choice;
    int intresult;
    float floatresult;
    char again;
    do{
        printf("\n1.add 2.subtacr 3.product 4.edivide\n");
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
        else if(choice == 3){
         intresult = product(num1,num2);
         printf("product = %d\n",intresult);
        }
        else if(choice == 4){
            floatresult = divide(num1,num2);
            printf("divide = %.2f\n",floatresult);
        }
        else {
            printf("Galt choice hai\n");
        }
        printf("\nwould you like to do more h/n: ");
        scanf(" %c",&again);
    } while(again == 'h' || again == 'H');
    printf("thank you bye bye\n");
    return 0;
}
