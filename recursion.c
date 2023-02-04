#include <stdio.h>

int arr[10], max, temp;

void average(int fe, int be);
void sorting(int a[], int m);
void sorting(int a[], int m)
{
    int temp;
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (a[i] >= a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
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
    

    sorting(arr, m);
    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr[i]);
    }
    max = (arr[0] + arr[m - 1]) / 2;
    average(1, m - 2);
    
    printf("\nmaximum of average%d", max);
}
void average(int fe, int be)
{
    if (fe == be)
    {
        return;
    }
    temp = (arr[fe] + arr[be]) / 2;
    if (max < temp)
    {
        max = temp;
    }
    average(fe+1, be-1);
}
