#include <stdio.h> 
 
int main() 
{ 
    char name;
    int mark; 
 
    printf("Enter name: ");
    scanf("%s", &name);
    
    printf("Enter mark: "); 
    scanf("%d", &mark); 
 
    if (mark >= 80) 
    { 
        printf("You got a A\n"); 
    } 
    else if (mark >= 70) 
    { 
        printf("You got a B\n"); 
    }
    else if (mark >= 60) 
    { 
        printf("You got a C\n"); 
    }     
    else if (mark >= 50) 
    { 
        printf("You got a D\n"); 
    }
    else if (mark >= 40) 
    { 
        printf("You got a E\n"); 
    }
    else{ printf("Not Promoted");}   

    return 0;
    } 