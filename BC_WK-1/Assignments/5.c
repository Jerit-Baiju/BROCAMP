#include <stdio.h>

int main()
{
    float percentage;
    printf("enter the percentage ");
    scanf("%f", &percentage);
    if (percentage > 100)
    {
        printf("percentage must be between 0-100\n");
    }
    else if (percentage >= 90)
    {
        printf("you obtained A grade\n");
    }
    else if (percentage >= 80)
    {
        printf("you obtained B grade\n");
    }
    else if (percentage >= 70)
    {
        printf("you obtained C grade\n");
    }
    else if (percentage >= 60)
    {
        printf("you obtained D grade\n");
    }
    else if (percentage >= 50)
    {
        printf("you obtained E grade\n");
    }
    else
    {
        printf("you have failed");
    }

    return 0;
}