#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

    char *jagged[12], c;
    char a[20];int t;
    printf("enter the student name\n");
    gets(a);
    jagged[0] = malloc(strlen(a)+1);
    jagged[0] = a;
    printf("enter the student id\n");
    scanf("%s",a);
    jagged[1] = malloc(strlen(a)+1);
    jagged[1] = a;
    printf("enter the department\n");
    scanf("%s",a);
    jagged[2] = malloc(strlen(a)+1);
    jagged[2] = a;

}