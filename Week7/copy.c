#include <stdio.h>
#include <string.h>
#include <type.h> // Required for tolower()

int main() { 
    char name1[] = "I am the Original one";
    char name2[] = "I am the Copied one";

    // Copy original names into temporary variables so we don't destroy the user's oeiginal
    //strcpy(name1, name2);

    printf("%s\n", name1);

    return 0;