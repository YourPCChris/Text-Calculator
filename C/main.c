//Practicing C manual memory management 


#include <stdio.h>
#include <stdlib.h>


typedef Calc
{
    double num1;
    double num2;
    char op;
    double result;
}
void freeCalc(*Calc calc){free(calc);}
void Calculate(*Calc calc)
{
    switch(calc->op)
    {
        case '+':
            calc->result = calc->num1 + calc->num2;
            break;
        case '-':
            calc->result = calc->num1 - calc->num2;
            break;
        case '*':
            calc->result = calc->num1 * calc->num2;
            break;
        case '/':
            calc->result = calc->num1 / calc->num2;
        default:
            fprintf(stderr, "Invalid Operator");
            break;
    }
}


int main()
{
    printf("We Ball");

    Calc* calc = malloc(sizeof(Calc));
    if (calc == NULL){
        fprintf(stderr, "Failed to allocate memory for calculator");
        retun 1;
    }

    printf("Enter First Number: ");
    if (scanf("%lf", calc->num1) != 1){
        fprintf(stderr, "Invalid Input\n");
        freeCalc(calc);
    }

    printf("Enter Second Number\n");
    if (scanf("%lf", calc->num2) != 1){
        fprintf(stderr, "Invalid Input\n");
    }

    printf("Enter operator: ");
    while (scanf("%lf", calc->op) != 1 || (calc->op != '+' && calc->op != '-' && calc->op != '*' && calc->op != '/'))
    {
        fprintf(stderr, "Invalid operator\n");
        printf("Enter operator: ");
    }

    Calculate(calc);
    printf("Result : %lf", calc->result);

    freeCalc(calc);
    return 0;
}