#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char *str, c;
  int i = 0, j = 1;

  str = (char*)malloc(sizeof(char)*1);

  printf("Enter String : ");

  while (c != '\n') {
    
    c = getc(stdin);

    
    str = (char*)realloc(str, j * sizeof(char));

    if(c>='a' && c<='z'){
    str[i] = c -32;
    }
    else if(c>='A' && c<='Z')
     {
        str[i] = c + 32;
     }
    else {
        str[i] = c;
     }

    i++;
    j++;
  } 
  str[i] = '\0';  
  printf("%s",str);
  free(str);
    return 0;
}