#include <stdio.h>

int main()
{ 
    int number[6];
      for(int i=0;i<6;i++) {
        printf("Enter number%d \n",i+1);
        scanf("%d", &number[i]);
      }
    for(int i=0;i<6;i++){
        printf("%d\n", number[i]);
    }
    return 0;
} 