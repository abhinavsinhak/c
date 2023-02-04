#include <stdio.h>
int fab(int arr[], int x, int n);
int min(int a, int b);
void main()
{
    int arr[10], n, x, fn;

    printf("enter the no of elements\n");
    scanf("%d", &n);

    printf("enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the searching element\n");
    scanf("%d", &x);

    fn = fab(arr, x, n);

    if (fn >= 0)
    {
        printf("found at index %d\n", fn);
    }
    else
    {
        printf("no not found\n");
    }
}
int fab(int arr[], int x, int n)
{
    int a1, a2, a;

    a2 = 0;
    a1 = 1;
    a = a2 + a1;

    while (a < n)
    {
        a2 = a1;
        a1 = a;
        a = a2 + a1;
    }
    int offset = -1;

    while (a > 1)
    {
        int i = min(offset + a2, n - 1);

        if (x > arr[i])
        {
            a = a1;
            a1 = a2;
            a2 = a - a1;
            offset = i;
        }
        else if(x<arr[i]){
            a = a2;
            a1 = a1-a2;
            a2= a -a1;
        }
        else{
            return i;
        }
    }
    if(a1 && arr[offset +1]==x){
        return offset + 1;
    }
    return -1;
}
int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
        return a;
}