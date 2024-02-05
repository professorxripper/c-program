#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    if(a > b && a > c)
    {
        printf("First number is the largest number");
    }
    else if(b > a && b > c)
    {
        printf("Second number is the largest number");
    }
    else if(a == b  || a == c)
        printf("Numbers can't be the same value");
    else
    {
        printf("Third number is the largest number");
    }
    return 0;
}
