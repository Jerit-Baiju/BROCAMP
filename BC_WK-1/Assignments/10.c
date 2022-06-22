#include <stdio.h>

int main()
{
    int size;
    printf("enter the size of array - ");
    scanf("%d", &size);
    int array1[size];
    int array2[size];
    int temp[size];
    // getting input
    printf("enter the values of array 1 - ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("enter the values of array 2 - ");
    for (int j = 0; j < size; j++)
    {
        scanf("%d", &array2[j]);
    }
    // swapping arrays
    for (int index = 0; index < size; index++)
    {
        temp[index] = array1[index];
        array1[index] = array2[index];
        array2[index] = temp[index];
    }
    // printing array
    printf("ARRAY 1 - ");
    for (int k = 0; k < size; k++)
    {
        printf("%d ", array1[k]);
    }
    printf("\nARRAY 2 - ");
    for (int y = 0; y < size; y++)
    {
        printf("%d ", array2[y]);
    }
    printf("\n");
    return 0;
}