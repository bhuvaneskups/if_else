#include<stdio.h>
#include<ctype.h>
int main()  {
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(islower(ch)) printf("Lower case character.\n");
    else if(isupper(ch)) printf("Upper case character.\n");
    else if(isdigit(ch)) printf("Digit\n");
    else printf("Special character.\n");
    return 0;
}
