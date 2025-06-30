#include<stdio.h>
/*structure declaration*/
struct employee{
    char name[30];
    int empId;
    float salary;
};
int main(){
    /*Declare structure variables*/
    struct employee emp;
    /*read employee details*/
    printf("Enter details\n");
    printf("Name?:");
    gets(emp.name);
    printf("ID?:");
    scanf("%d",&emp.empId);
    printf("Salary?:");
    scanf("%f",&emp.salary);
    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s",emp.name);
    printf("ID:%d",emp.empId);
    printf("Salary:%f",emp.salary);
    return 0;
}