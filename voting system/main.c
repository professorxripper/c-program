#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if( age >= 18 )
    {
        printf("You can give vote");
    }
    else
    {
        printf("You are not eligible  for vote");
    }
    return 0;
}
