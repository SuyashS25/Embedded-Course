#include<stdio.h>
#include<string.h>

struct Employee{
int Emp_ID;
char name[50];
float salary;
};

int main(){
    struct Employee emp[6];
    for(int i=1;i<6;i++){
        printf("Enter the Employee id of %d : ",i);
        scanf("%d",&emp[i].Emp_ID);

        printf("Enter the name of %d employee : ", i);
        scanf(" %[^\n]", emp[i].name);

        printf("Enter the salary of %d employee : ",i);
        scanf("%f",&emp[i].salary);
    
    }

    for(int i=1;i<6;i++){
        printf("The name of %d employee is: %s",i,emp[i].name);
        printf("\n");
        printf("The employee id of %d employee is: %d",i,emp[i].Emp_ID);
        printf("\n");
        printf("The salary of %d employee is: %f",i,emp[i].salary);
        printf("\n");
        
    }

    // for finding the highest salary


    int max;
    float largest = emp[1].salary;
    for(int i=1;i<6;i++){
        if(largest<emp[i].salary){
            largest = emp[i].salary;
            max = i;
        };
        
    }

     printf("\n--- Employee with the highest salary ---\n");
    printf("Employee ID : %d\n", emp[max].Emp_ID);
    printf("Name        : %s\n", emp[max].name);
    printf("Salary      : %.2f\n", emp[max].salary);

    return 0;
}