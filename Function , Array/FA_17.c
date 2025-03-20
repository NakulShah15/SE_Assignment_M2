//17.WAP to show  difference between Structure and Union. 

#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

union Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct Student s1;
    union Employee e1;

    printf("Size of Structure: %lu bytes\n", sizeof(s1));
    printf("Size of Union: %lu bytes\n\n", sizeof(e1));

    s1.id = 101;
    strcpy(s1.name, "John");
    s1.marks = 85.5;

    printf("Structure Data:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n\n", s1.marks);

    e1.id = 202;
    printf("Union Data:\n");
    printf("ID: %d\n", e1.id);

    strcpy(e1.name, "Alice");
    printf("Name: %s\n", e1.name);

    e1.salary = 50000.50;
    printf("Salary: %.2f\n\n", e1.salary);

    printf("After modifying salary in Union:\n");
    printf("ID: %d (Corrupted)\n", e1.id);
    printf("Name: %s (Corrupted)\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);

    return 0;
}

