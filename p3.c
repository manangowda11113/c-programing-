#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary_period;
    float income_tax;
};

int main() {
    struct Employee emp;

    // Read employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary for the Period: ");
    scanf("%f", &emp.salary_period);

    // Calculate 10% income tax
    emp.income_tax = emp.salary_period * 0.10f;

    // Display all details
    printf("\n--- Employee Details ---\n");
    printf("Employee ID   : %d\n", emp.id);
    printf("Employee Name : %s\n", emp.name);
    printf("Salary Period : %.2f\n", emp.salary_period);
    printf("Income Tax (10%): %.2f\n", emp.income_tax);

    return 0;
}
