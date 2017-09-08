#include <stdio.h>

int main()
{
    int arr[100];
    int i, maximum, minimum, size ,sum;

  
    printf("Enter size of the array: ");
    scanf("%d", &size);

  
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

  
    maximum = arr[0];
    minimum = arr[0];

   
   
    for(i=1; i<size; i++)
    {
  
        if(arr[i]>maximum)
        {
            maximum = arr[i];
        }

        if(arr[i]<minimum)
        {
            minimum = arr[i];
        }
    }

  
    printf("maximumimum element = %d\n", maximum);
    printf("minimumimum element = %d", minimum);
sum=maximum+minimum;
printf("the sum of the maximum and the minimum number is : ",sum);

    return 0;
}
