#include <stdio.h>

int main()
{
    int num;
    int max = 1;
    printf("enter the number - ");
    scanf("%d", &num);
    do
    {
        int ans = max * num;
        printf("\n%d x %d = %d", max, num, ans);
        max = max + 1;
    } while (max <= 10);

    return 0;
}