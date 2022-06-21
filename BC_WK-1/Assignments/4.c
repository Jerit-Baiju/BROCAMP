#include <stdio.h>

int main()
{
    float mark;
    printf("enter the mark - ");
    scanf("%f", &mark);
    if (mark > 100)
    {
        printf("enter the mark between 0-100\n");
    }
    else if (mark >= 50)
    {
        printf("Passed\n");
    }

    else
    {
        printf("failed\n");
    }
    return 0;
}