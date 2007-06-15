#include <stdio.h>

int main()
{
  int i;
  char b;
  
  i = 127; 
  b = * (char *) &i;
  
  if (b == i)
    printf("little\n");
  else
    printf("big\n");

  return 0;
}
