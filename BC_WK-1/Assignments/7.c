#include <stdio.h>

int main()
{
    int num;
    int max = 1;
    printf("enter the number - ");
    scanf("%d", &num);
    for (max; max <= 10; max++){
    printf("\n%d x %d = %d", max, num, max*num);
    }
    return 0;
}