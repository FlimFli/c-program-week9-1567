#include<stdio.h>
#include<string.h>
int CallUseName()
{
    //Declarative string

    char firstName[] = "";
    char lastName[] = "";

    printf("Enter stings of User name:");
    scanf("%s", firstName);
    printf("%s\n", firstName);

    printf("Enter stings of User name:");
    scanf("%s", lastName);
    printf("%s", lastName);

    printf("%s", firstName);
    printf("%s", lastName);
}