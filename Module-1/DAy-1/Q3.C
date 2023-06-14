#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    int physicsMarks, mathMarks, chemistryMarks;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Marks of Physics: ");
    scanf("%d", &physicsMarks);

    printf("Enter Marks of Math: ");
    scanf("%d", &mathMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%d", &chemistryMarks);

    int totalMarks = physicsMarks + mathMarks + chemistryMarks;
    float percentage = (float)totalMarks / 3;

    printf("\nSummary:\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physicsMarks);
    printf("Math Marks: %d\n", mathMarks);
    printf("Chemistry Marks: %d\n", chemistryMarks);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}