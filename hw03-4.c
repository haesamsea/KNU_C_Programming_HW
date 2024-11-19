#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main(void)
{
    int k = 0;
    int m = 0;
    int n = 0;

    printf("3개의 숫자를 순서대로 입력하시오: ");
    scanf_s("%d , %d, %d", &k, &m, &n);

    int result = k + m * n;

    printf("\n%d + %d * %d = %d\n", k, m, n, result);
    return 0;
}
