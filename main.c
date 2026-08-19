#include <stdio.h>

int main() { 
    char municipality[50];
    char mayor[50];
    int population;

    printf("Municipal Financial Managment System\n");
    printf("Welcome to Windhoek Municipaliy\n\n");

    printf("Enter municipality Name: ");
    scanf("%49s", municipality);

    printf("Enter mayor: ");
    scanf("%49s", mayor);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n--- Report ---\n");
    printf("Municipality: %s\n", municipality);
    printf("Mayor: %s\n", mayor);
    printf("Population: %d\n", population);

    return 0;
} 