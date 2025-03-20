//Accept number of students from user. I need to give 5 apples to each student. How many apples are required? 

#include<stdio.h>

int main() {
    int students, apples_per_student = 5, total_apples;

    printf("\n\n\t Enter the number of students: ");
    scanf("%d", &students);

    total_apples = students * apples_per_student;

    printf("\n\n\t Total apples required: %d", total_apples);
}

