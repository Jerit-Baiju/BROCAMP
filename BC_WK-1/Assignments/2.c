#include <stdio.h>

int main()
{
    int num_1;
    float num_2, sum;
    printf("Enter two numbers ");
    scanf("%d%f", &num_1, &num_2);
    sum = num_1 + num_2;
    printf("the sum is %f", sum);
    return 0;
}