#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a > b)
    {
        printf("%d is the biggest number", a);
    }
    else
    {
        printf("%d is the biggest number",b);
    }
    return 0;
}
