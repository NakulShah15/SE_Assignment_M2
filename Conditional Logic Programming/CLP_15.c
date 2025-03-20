//15. Write a C program to determine eligibility for admission to a professional course based on the following criteria Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ---- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible. Topics Covered Control statements Conditional Statements 

#include <stdio.h>

int main() {
    int maths, physics, chemistry, totalAll, totalMathsPhysics;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);
    
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    totalAll = maths + physics + chemistry;
    totalMathsPhysics = maths + physics;

    printf("Total marks of Maths, Physics and Chemistry: %d\n", totalAll);
    printf("Total marks of Maths and Physics: %d\n", totalMathsPhysics);

    if ((maths >= 65 && physics >= 55 && chemistry >= 50 && totalAll >= 190) ||
        (totalMathsPhysics >= 140)) {
        printf("The candidate is Eligible for admission.\n");
    } else {
        printf("The candidate is Not Eligible.\n");
    }
    return 0;
}

