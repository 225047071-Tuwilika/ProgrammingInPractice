#include <stdio.h> 

int main() { 
 
    char supplierName[50];
    char email[30];
    char phone[20];
    char town[20];

printf("Enter the SupplierName: \n");
fgets(supplierName, sizeof(supplierName),stdin);
supplierName[strcspn(supplierName, "\n")] = '\0'; // Removes the trailing newline

printf("Enter the email: \n");
fgets(email, sizeof(email),stdin);
email[strcspn(email, "\n")] = '\0'; // Removes the trailing newline

printf("Enter the phone: \n");
fgets(phone, sizeof(phone),stdin);
phone[strcspn(phone, "\n")] = '\0'; // Removes the trailing newline

printf("Enter the town: \n");
fgets(town, sizeof(town),stdin);
town[strcspn(town, "\n")] = '\0'; // Removes the trailing newline

Pintf("--- SUPPLIER DETAILS ---\n");
printf("Name :%s\n, supplierName");
printf("Email :%s\n, email");
printf("Phone :%s\n, phone");
printf("Town :%s\n, town");

printf("Enter supplier to search: ");
fgets(searchName, sizeof(searchName), stdin);

// simple apporach way to remove a newline
searchName[strcmp(, searchName) == '\0']; 