#include <stdio.h>

int isMultiple(int n)
{
    if (n % 3)
    return 0;
    return 1;
}

int isInclude3(int n)
{
    if (n < 0)
    n *= -1;

    while (n > 0)
    {
        if (isMultiple(n % 10))
        return 1;
        n /= 10;
    }

    return 0;
}

void nabeatsu(int start, int goal)
{
    for (int i = start; i <= goal; i++)
    {
        printf("%d", i);
        
        if (isMultiple(i) || isInclude3(i))
        printf("^^;");

        printf(" ");
    }
    putchar('\n');
}

int main(void)
{
    int start, goal;
    
    printf("整数１を入力してください: ");
    scanf("%d", &start);
    printf("整数２を入力してください: ");
    scanf("%d", &goal);

    nabeatsu(start, goal);
    
    return 0;
}