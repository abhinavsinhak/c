#include <stdio.h>
#include <string.h>
struct student
{
    char regno[10];
    char name[20];
    char branch[10];
    int roll;
} s[10];

void add_detail(int i)
{
    printf("Enter the name of student\n");
    scanf("%s", s[i].name);
    printf("enter the regestration no\n");
    scanf("%s", s[i].regno);
    printf("enter the branch\n");
    scanf("%s", s[i].branch);
    printf("enter the roll no\n");
    scanf("%d", &s[i].roll);
}
void display(char a[], int n)
{    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        if (strcmp(s[i].name, a) == 0 || strcmp(s[i].branch, a) == 0)
        {
            printf("%s\t", s[i].name);
            printf("%s\t", s[i].regno);
            printf("%s\t", s[i].branch);
            printf("%d\t", s[i].roll);
            printf("\n\n");
        }
    }
}
void dis_Roll(int a, int n)
{     printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].roll == a)
        {
            printf("%s\t", s[i].name);
            printf("%s\t", s[i].regno);
            printf("%s\t", s[i].branch);
            printf("%d\t", s[i].roll);
            printf("\n\n");
        }
    }
}
void update(int k)
{
    printf("enter the name to update\n");
    scanf("%s", s[k].name);
    printf("enter the regestration no\n");
    scanf("%s", s[k].regno);
    printf("enter the branch\n");
    scanf("%s", s[k].branch);
    printf("enter the roll no\n");
    scanf("%d", &s[k].roll);
}
void main()
{
    int n, i, t, indx, s;
    char a[10];
    printf("Enter the no of student\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        add_detail(i);
    }

    while (1)
    {
        printf("want to update type 0 for no and 1 for yes\n");
        scanf("%d", &t);
        if (t == 0)
        {
            break;
        }
        printf("enter the serial no of details\n");
        printf("enter the index\n");
        scanf("%d", &indx);
        indx = indx - 1;
        update(indx);
    }
    printf("enter the searching method \n enter 0 for name 1 for branch\n 2 for roll no\n");
    scanf("%d", &s);
    if (s == 0)
    {
        printf("enter the name for search");
        scanf("%s", a);
        display(a, n);
    }
    else if (s == 1)
    {
        printf("enter the name for search");
        scanf("%s", a);
        display(a, n);
    }
    else if (s == 2)
    {
        printf("enter the roll for search");
        scanf("%d", &indx);
        dis_Roll(indx, n);
    }
}
