#include <stdio.h>
int main()
{
    char string1[100], string2[100], i, j;

    printf("Enter first string: ");
    scanf("%s", string1);

    printf("Enter second string: ");
    scanf("%s", string2);

    
    for(i = 0; string1[i] != '\0'; ++i);

    for(j = 0; string2[j] != '\0'; ++j, ++i)
    {
        string1[i] = string2[j];
    }

    string1[i] = '\0';
    printf("After concatenation: %s", string1);

    return 0;
}
