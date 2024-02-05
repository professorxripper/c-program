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
    if(a > b )
    {
        if(a > c)
        {
            printf("First number is the biggest number");
        }
    }
    else if(b > a )
            if(b > c)
            {
                printf("Second number is the biggest number");
            }
    else
    {
        printf("Third number is the biggest number");
    }
    return 0;
}
