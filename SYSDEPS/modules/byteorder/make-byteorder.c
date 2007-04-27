#include <stdio.h>

int main()
{
  int i;
  char b;
  
  i = 127; 
  b = *(char*)&i;
  
  printf("#ifndef _BYTEORDER_H\n");
  printf("#define _BYTEORDER_H\n");
  printf("\n");

  printf("#define E_LITTLE_ENDIAN 1\n");
  printf("#define E_BIG_ENDIAN 0\n");

  if(b == i) {
    printf("#define BYTEORDER E_LITTLE_ENDIAN\n");
    fprintf(stderr,"byteorder: little\n");
  } else {
    printf("#define BYTEORDER E_BIG_ENDIAN\n");
    fprintf(stderr,"byteorder: big\n");
  }

  printf("\n");
  printf("#endif\n");

  return 0;
}
