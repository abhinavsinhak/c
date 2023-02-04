#include <stdio.h>
int arr[10];
int flag = 0;
void checker(int n, int m);
void checker(int n, int m)
{

    if (n >= m)
    {
        return;
    }
    if (n % 2 == 0)
    {
        if (arr[n] % 2 == 0)
        {
            flag = 1;
            checker(n + 1, m);
        }
        else
        {
            flag = 0;
            printf("not good no\n");

            return;
        }
    }
    else
    {
        if (arr[n] % 2 != 0)
        {
            flag = 1;
            checker(n + 1, m);
        }
        else
        {
            flag = 0;
            printf("not good no");
        }
    }
}
void main()
{
    int m;
    printf("enter the no of element\n");
    scanf("%d", &m);
    printf("enter the elements\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    checker(0, m - 1);
    if (flag == 1)
    {
        printf("good no\n");
    }
}