#include <stdio.h>

int main() {
    int marks;

    
    printf("Enter the marks of the student : ");
    scanf("%d", &marks);

    
    if (marks > 90) {
        printf("\nGrade: A");
    } else if (marks > 75 && marks <= 90) {
        printf("\nGrade: B\n");
    } else if (marks > 50 && marks <= 75) {
        printf("\nGrade: C\n");
    } else if (marks >= 0 && marks <= 50) {
        printf("\nGrade: D\n");
    } else {
        printf("\nInvalid marks! .\n");
    }

    return 0;
}
