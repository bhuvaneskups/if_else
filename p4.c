#include<stdio.h>
int main()  {
    int age;
    char gen;

    printf("Enter Gender: ");
    scanf("%c",&gen);
    printf("Enter Age: ");
    scanf("%d",&age);

    if(gen=='M'||gen=='m'||gen=='F'||gen=='f')  {
      if( age>=21 || (gen=='F'|| gen=='f') && age>=18)
        printf("Eligible\n");
      else printf("Not Eligible\n");
    }
    else printf("Invalid Gender\n");

    return 0;
}
