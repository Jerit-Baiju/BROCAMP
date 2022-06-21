#include <stdio.h>

int main()
{
    int inp;
    int sum = 0;
    printf("enter a limit ");
    scanf("%d", &inp);
    for (int i = 1; i <= inp; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);

    return 0;
}