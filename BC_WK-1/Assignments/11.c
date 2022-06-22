#include <stdio.h>

int main()
{
    int size;
    printf("enter the size of an array - ");
    scanf("%d", &size);
    int array[size];
    int num = 0;
    // setting array
    printf("enter the values of array - ");
    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &array[i]);
    }
    // no of even nums
    for (int j = 1; j <= size; j++)
    {
        if (array[j] % 2 == 0)
        {
            num = num + 1;
        }
    }
    printf("%d", num);
    return 0;
}