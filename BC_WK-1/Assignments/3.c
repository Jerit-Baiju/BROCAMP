#include <stdio.h>

int main()
{
    int principal;
    float rate, time, interest;
    printf("enter principal amount - ");
    scanf("%d", &principal);
    printf("enter rate - ");
    scanf("%f", &rate);
    printf("enter time - ");
    scanf("%f", &time);
    printf("Simple Interest - %f", (principal * rate * time) / 100);
}