//Practicing C manual memory management 
//Practicing Manual Memory Management in C
//


#include <stdio.h>
#include <stdlib.h>


typedef struct {
	double num1;
	double num2;
	double result;
	char operator;
} Calc;
void freeCalc(Calc* calc){free(calc);}
void calculate(Calc* calc){
	switch(calc->operator){
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
			break;
		default:
			fprintf(stderr, "Invalid operator\n");
			break;
	}
}


int main()
{
	printf("We Ball\n");

	Calc* calc = (Calc*)malloc(sizeof(Calc));
	if (calc == NULL){
		fprintf(stderr, "Memory allocation failed\n");
		return 1;
	}

	printf("Enter first number: ");
	if (scanf("%lf", &calc->num1) != 1){
		fprintf(stderr, "Invalid input\n");
		freeCalc(calc);
		return 1;
	}

	printf("Enter second number: ");
	if (scanf("%lf", &calc->num2) != 1){
		fprintf(stderr, "Invalid input\n");
		freeCalc(calc);
		return 1;
	}


	//Force correct operator input 
	printf("Enter operator: ");
	while (scanf(" %c", &calc->operator) != 1 || (calc->operator != '+' && calc->operator != '-' && calc->operator != '*' && calc->operator != '/')){
		fprintf(stderr, "Invalid operator\n");
		printf("Enter operator: ");
	}

	printf("Calculating...\n");
	calculate(calc);
	printf("Result: %.2f\n", calc->result);

	freeCalc(calc);
	return 0;
}
