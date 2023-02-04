#include <stdio.h>
#include <string.h>

// Compiler version gcc  6.3.0
void max_min(char a[]);
void max_min(char a[])
{
  int temp = 0, t = 0, j, k;
  char b[10], c[10];
  int a_len = strlen(a);
  for (int i = 0; i < a_len; i = j + 1)
  {
    j = i;
    while (a[j] != ' ' && j < a_len)
    {
      b[temp++] = a[j];
      j++;
    }

    if (temp > t)
    {
      t = temp;
      strcpy(c,b);
    }
    temp = 0;
  }

  for (int i = 0; i < t; i++)
  {
    printf("%c", c[i]);
  }
}
int main()
{
  char a[100];
  printf("enter the sentence\n");
  gets(a);
  max_min(a);

  return 0;
}