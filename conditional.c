#include <stdio.h>
int main()  {
    int i;
    if((i=0) || (i=5))
      printf("True\n");
    else
      printf("False\n");
    printf("i=%d\n",i);
    return 0;
}
