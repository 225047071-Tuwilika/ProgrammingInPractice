#include <stdio.h>

int main()
{ 
    int existingLoan;
    float salary;
    int age;
    float loanAmount;
    char name[50];

    // Get existing loan status
    printf("Do you already have a loan? (1 = Yes, 0 = No): ");
    scanf("%d", &existingLoan);

    // Get salary
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    // First rejection condition
     if (existingLoan == 1 || salary <5000 ){
        printf("Not Qualified\n");
     }
     else { 

    // Get additional information
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter the amount of loan you want to borrow: ");
    scanf("%f", &loanAmount);

    printf("Enter your name: ");
    scanf("%s", name);

    // Check age and loan amount
    if (loanAmount > 50000 && age >= 60){
        printf("Too much loan for old person, Loan Reject\n");
    }
    else if (loanAmount > 50000 && age < 18){
        printf("Too much loan for minor person, Loan Reject\n");
    }
    else {
        printf("%s, you are qualified for the loan\n", name);
        }
    }    

    return 0;
} 