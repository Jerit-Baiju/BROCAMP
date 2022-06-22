#include <stdio.h>

int main()
{
    int size, temp;
    printf("enter the size of array - ");
    scanf("%d", &size);
    int array[size];
    // getting input
    printf("enter the values of array - ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}