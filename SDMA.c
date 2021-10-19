#include<stdio.h>

int main()
{
    int a,b;
    float result=0;
    int num1=0, num2=0, num3=0, num4=0, num5=0;
    printf("What you want to do user? \n 1. Add\n 2. Subtract\n 3. Divide\n 4. Multiply\n Choose a option from menu: ");
    scanf("%d", &a);
    if (a==1){
        printf("Great! You choosed Addition, Now please enter the number of operation you want to perform.\n");
    }else if (a==2){
        printf("Great! You choosed Subtraction, Now please enter the number of operation you want to perform.\n");
    }else if (a==3){
        printf("Great! You choosed Division, Now please enter the number of operation you want to perform.\n");
    }else if (a==4){
        printf("Great! You choosed Multiplication, Now please enter the number of operation you want to perform.\n");
    }
    printf("Enter number of operation (2,3,4,5):");
    scanf("%d", &b);
    printf("Enter a number for value Num1:");
    scanf("%d", &num1);
    printf("Enter a number for value Num2:");
    scanf("%d", &num2);
    if(b==3||b==4||b==5){
            printf("Enter a number for value Num3:");
            scanf("%d", &num3);
    }
    if(b==4||b==5){
            printf("Enter a number for value Num4:");
            scanf("%d", &num4);
    }
    if(b==5){
            printf("Enter a number for value Num5:");
            scanf("%d", &num5);
    }

    // 2 Level Operation //

    if (a==1 && b==2){
        result=num1+num2;
        printf("Total Sum for the Number of  %d + %d = %f", num1,num2,result);

    }else if (a==2 && b==2) {
        result=num1-num2;
        printf("Total Subtract for the Number of  %d - %d = %f", num1,num2,result);

    }else if (a==3 && b==2){
        result=num1/num2;
        printf("Total Divide for the Number of  %d / %d = %f", num1,num2,result);

    }else if (a==4 && b==2){
        result=num1*num2;
        printf("Total Multiply for the Number of  %d * %d = %f", num1,num2,result);
    }

    // 3 Level Operation //

    if (a==1 && b==3){
        result=num1+num2+num3;
        printf("Total Sum for the Number of  %d + %d + %d = %f", num1,num2,num3,result);

    }else if (a==2 && b==3) {
        result=num1-num2-num3;
        printf("Total Subtract for the Number of  %d - %d - %d = %f", num1,num2,num3,result);

    }else if (a==3 && b==3){
        result=num1/num2/num3;
        printf("Total Divide for the Number of  %d / %d / %d = %f", num1,num2,num3,result);

    }else if (a==4 && b==3){
        result=num1*num2*num3;
        printf("Total Multiply for the Number of  %d * %d * %d = %f", num1,num2,num3,result);
    }

    // 4 Level Operation //

    if (a==1 && b==4){
        result=num1+num2+num3+num4;
        printf("Total Sum for the Number of  %d + %d + %d + %d = %f", num1,num2,num3,num4,result);

    }else if (a==2 && b==4) {
        result=num1-num2-num3-num4;
        printf("Total Subtract for the Number of  %d - %d - %d - %d = %f", num1,num2,num3,num4,result);

    }else if (a==3 && b==4){
        result=num1/num2/num3/num4;
        printf("Total Divide for the Number of  %d / %d / %d / %d = %f", num1,num2,num3,num4,result);

    }else if (a==4 && b==4){
        result=num1*num2*num3*num4;
        printf("Total Multiply for the Number of  %d * %d * %d * %d = %f", num1,num2,num3,num4,result);
    }

    // 5 Level Operation //

    if (a==1 && b==5){
        result=num1+num2+num3+num4+num5;
        printf("Total Sum for the Number of  %d + %d + %d + %d + %d = %f", num1,num2,num3,num4,num5,result);

    }else if (a==2 && b==5) {
        result=num1-num2-num3-num4-num5;
        printf("Total Subtract for the Number of  %d - %d - %d - %d - %d = %f", num1,num2,num3,num4,num5,result);

    }else if (a==3 && b==5){
        result=num1/num2/num3/num4/num5;
        printf("Total Divide for the Number of  %d / %d / %d / %d / %d = %f", num1,num2,num3,num4,num5,result);

    }else if (a==4 && b==5){
        result=num1*num2*num3*num4*num5;
        printf("Total Multiply for the Number of  %d * %d * %d * %d * %d = %f", num1,num2,num3,num4,num5,result);
    }


     return 0;

}