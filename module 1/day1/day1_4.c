#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float num1, num2, result;
	
	char o;
	
	
	printf("First num: ");
	scanf("%f",&num1);
	printf("Operator : ");
	scanf(" %c",&o);
	printf("Second num: ");
	scanf("%f",&num2);
	
	
	switch (o){
		case '+':
			result = num1+num2;
			break;
			
		case '-':
			result = num1-num2;
			break;
			
		case '*':
			result = num1*num2;
			break;
			
		case '/':
			result = num1/num2;
			break;
	}
	
	printf("Result: %.2f\n", result);
	
	return 0;
}
