#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;

    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("Minimum number is: %d", a);
    }
    else
    {
        printf("Minimum number is: %d", b);
    }

    return 0;
}

