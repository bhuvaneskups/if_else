#include<stdio.h>
int main()  {
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)  {
      printf("%c is an uppercase alphabet.\n",ch);
    }
    else if(ch>=97 && ch<=122)  {
      printf("%c is an lowercase alphabet.\n",ch);
    }
    else   {
      printf("%c is not an alphabet.\n",ch);
    }
    return 0;
}
