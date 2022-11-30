#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void ma (opt2){

    int n1, n2;
    float res;
    system("cls");

     if (opt2 == '/' )
    {
        printf (" You have selected: Division");
    }
    else if (opt2 == '*')
    {
        printf (" You have selected: Multiplication");
     }

    else if (opt2 == '-')
    {
        printf (" You have selected: Subtraction");
     }
        else if (opt2 == '+')
    {
        printf (" You have selected: Addition");
     }
    printf (" \n Enter the first number: ");
    scanf(" %d", &n1);
    printf (" Enter the second number: ");
    scanf (" %d", &n2);

    switch(opt2)
    {
        case '+':
            res = n1 + n2;
            printf (" Addition of %d and %d is: %.2f", n1, n2, res);
            break;

        case '-':
            res = n1 - n2;
            printf (" Subtraction of %d and %d is: %.2f", n1, n2, res);
            break;

        case '*':
            res = n1 * n2;
            printf (" Multiplication of %d and %d is: %.2f", n1, n2, res);
            break;

        case '/':
            if (n2 == 0)
            {
                printf (" \n Divisor cannot be zero. Please enter another value ");
                scanf ("%d", &n2);
                }
            res = n1 / n2;
            printf (" Division of %d and %d is: %.2f", n1, n2, res);
            break;
        default:
            printf (" Something is wrong!! Please check the options ");
    }
    char e;
    printf("\n are you want to exit (y/n):");
    scanf(" %c",&e);
    if (e == 'n'){
    main();
    }
    else {
    return 0;
    }
}


int fac() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
char e;
    printf("\n are you want to exit (y/n):");
    scanf(" %c",&e);
    if (e == 'n'){
    main();
    }
    else {
    return 0;
    }
}

void sqroot(){
    {
   double number, squareRoot;

   printf("Enter a number: ");
   scanf("%lf", &number);

   squareRoot = sqrt(number);

   printf("Square root of %.2lf =  %.2lf", number, squareRoot);
char e;
    printf("\n are you want to exit (y/n):");
    scanf(" %c",&e);
    if (e == 'n'){
    main();
    }
    else {
    return 0;
    }
}
}

 void power(){
    int base, exp;
    double result;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an power: ");
    scanf("%d", &exp);

    result = pow(base,exp);
    printf("Answer = %.2lf", result);
    char e;
    printf("\n are you want to exit (y/n):");
    scanf(" %c",&e);
    if (e == 'n'){
    main();
    }
    else {
    return 0;
    }
}

void per(){
    system("cls");
     float percentage;
   int mainN , smal;

    printf("enter total number:");
    scanf(" %d",&mainN);
    system("cls");
    printf("Input Percentage number for %d :",mainN);
    scanf(" %d",&smal);


   percentage = (float)smal / mainN * 100.0;

   printf("Percentage = %.2f%%", percentage);

char e;
    printf("\n are you want to exit (y/n):");
    scanf(" %c",&e);
    if (e == 'n')
        {
        main();
    }
    else
    {
    return 0;
    }
}


int main(){
    system("cls");
    int option ;
    printf("choose an operation \n");
    printf("\n");
    printf("[1]calculate with + , - , * , /   \n");
    printf("[2]calculate factorial  \n");
    printf("[3]calculate squareRoot \n");
    printf("[4]calculate square \n");
    printf("[5]calculate Percentage \n");
    printf("enter the number for operation:");
    scanf("%d",&option);
    system("cls");
    char opt;
    switch(option){
        case 1:
            printf("Choose an operator(+, -, *, /) to perform the operation in C Calculator:");
            scanf(" %c",&opt);
            ma(opt);
        break;
        case 2:
            fac();
        break;
        case 3:
            sqroot();
        break;
        case 4:
            power();
        break;
        case 5:
            per();
        break;
        default:
            printf("ok");
}



    return 0;
};
