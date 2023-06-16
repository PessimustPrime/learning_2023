#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printGrade(int score) {
    if (score >= 90 && score <= 100) {
        printf("Grade A\n");
    } else if (score >= 75 && score <= 89) {
        printf("Grade B\n");
    } else if (score >= 60 && score <= 74) {
        printf("Grade C\n");
    } else if (score >= 50 && score <= 59) {
        printf("Grade D\n");
    } else if (score >= 0 && score <= 49) {
        printf("Grade F\n");
    } else {
        printf("Invalid score!\n");
    }
}

int main(int argc, char *argv[]) {
	int marks;
	printf("Enter Marks: ");
	scanf("%d", &marks);
	printGrade(marks);
	return 0;
}
