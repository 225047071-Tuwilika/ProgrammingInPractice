#include <stdio.h>

int main()
{
    int number[6];
    int i = 0;
    
    while (i<6){
        printf("Enter number % \n",i+1);
        scanf("%d", &number[i]);
        i++;
    }

    i=0;
    while(1<6){
        printf("%d", number[1]);
        i++;
    }

    return 0;
}