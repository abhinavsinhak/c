#include <stdio.h>
struct student
{
    char regno[10];
    char name[20];
    char branch[10];
    float percent;
} s[10];
void sort_detail(int n)
{
    struct student a;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].percent <= s[j].percent)
            {
                a = s[i];
                s[i] = s[j];
                s[j] = a;
            }
        }
    }
}
void add_detail(int i)
{
    printf("Enter the name of student\n");
    scanf("%s", s[i].name);
    printf("enter the regestration no\n");
    scanf("%s", s[i].regno);
    printf("enter the branch\n");
    scanf("%s", s[i].branch);
    printf("enter the percentage\n");
    scanf("%f", &s[i].percent);
}
void display(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\t", s[i].name);
        printf("%s\t", s[i].regno);
        printf("%s\t", s[i].branch);
        printf("%0.01f\t", s[i].percent);
        printf("\n\n");
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
    printf("enter the percentage\n");
    scanf("%f", &s[k].percent);
}
void main()
{
    int n, i, t, indx;
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
    printf("detail of student\n");
    sort_detail(n);
    display(n);
}
