#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physicsMarks, mathMarks, chemistryMarks, totalMarks, percentage;
     
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter Marks for Physics: ");
    scanf("%f", &physicsMarks);
    printf("Enter Marks for Math: ");
    scanf("%f", &mathMarks);
    printf("Enter Marks for Chemistry: ");
    scanf("%f", &chemistryMarks);

 
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300) * 100;


    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

