#include <stdio.h>
int main()
{
    int num, a;

    printf("Enter an integer: ");
    scanf("%d",&num);

    for(a=1;a<=10; ++a)
    {
        printf("%d * %d = %d \n", num, a, num*a);
    }
    
    return 0;
}
