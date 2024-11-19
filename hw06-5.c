#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x = 0;
    int sum = 0;

    printf("양의 정수 입력: ");
    scanf("%d", &x);

    printf("1부터 %d까지의 합: ", x);

    for (x > 0, sum = 0; x >= 1;)
    {
        sum += x--;
    }

    printf("%d", sum);

    return 0;
}
