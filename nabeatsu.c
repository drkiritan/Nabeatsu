#include <stdio.h>

int main(void) {
    int a, b, i, n;

    printf("整数１を入力してください: ");
    scanf("%d", &a);
    printf("整数２を入力してください: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++) {
        printf("%d", i);

        n = i;

        if (n % 3 == 0) {
            printf("^^; ");
            continue;
        }

        if (n < 0) {
            n *= -1;
        }

        while (n > 0) {
            if (n - n / 10 * 10 == 3) {
                printf("^^;");
                break;
            }

            n /= 10;
        }

        printf(" ");
    }

    putchar('\n');

    return 0;
}