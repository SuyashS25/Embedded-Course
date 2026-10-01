#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int roll;
    int marks[3];
};

int main() {
    struct student s1;
    strcpy(s1.name, "Suyash");
    s1.roll = 67;
    s1.marks[0] = 100;
    s1.marks[1] = 99;
    s1.marks[2] = 98;

    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += s1.marks[i];
    }
    float percentage = total / 3.0;   

    printf("The name of the student is: %s\n", s1.name);
    printf("The roll number of the student is: %d\n", s1.roll);
    printf("The marks of %s are:", s1.name);
    for (int i = 0; i < 3; i++) {
        printf(" %d", s1.marks[i]);
    }
    printf("\n");
    printf("Total marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}