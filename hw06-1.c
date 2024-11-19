#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, result = 0;
    char z;

    printf("연산자를 입력하시오: ");
    scanf("%c", &z);

    printf("두 개의 숫자를 입력하시오: ");
    scanf("%d %d", &x, &y);

    switch (z)
    {
        case '+':
            printf("%d + %d = %d", x, y, x + y);
            break;

        case '-':
            printf("%d - %d = %d", x, y, x - y);
            break;

        case '*':
            printf("%d * %d = %d", x, y, x * y);
            break;

        case '/':
            printf("%d / %d = %.2f", x, y, x / (double)y);
            break;

        default:
            printf("올바르지 않은 연산자입니다.");
            break;
    }

    return 0;
}
