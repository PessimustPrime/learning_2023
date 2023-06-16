#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int findMax(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}


int findMaxT(int num1, int num2) {
    int max = (num1 > num2) ? num1 : num2;
    return max;
}

int main(int argc, char *argv[]) {
	int a,b, max1, max2;
	a = 10;
	b = 20;
	
	max1 = findMax(a,b);
	
	max2 = findMaxT(a,b);
	
	printf("%d",max1);
	
	return 0;
}
