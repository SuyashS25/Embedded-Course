#include <stdio.h>
#include <string.h>



struct employee {
    int id;
    char name[50];
    float salary;
};

void sal_incre(struct employee *e) {
    printf("Enter new salary: ");
    scanf("%f", &(*e).salary);
    printf("The new salary is: %.2f\n", (*e).salary); 
}

int main() {
    struct employee e1;


    printf("Enter ID: ");
    scanf("%d", &e1.id);

    printf("Enter name: ");
    scanf(" %[^\n]",e1.name);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);

     sal_incre(&e1);  

    return 0;
}