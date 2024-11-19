#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int iterative_factorial(int a)
{
    int result = 1;
    for (int k = 1; k <= a; k++) 
    {
        result *= k;
    }
    return result;
}

int recursive_factorial(int a)
{
    if (a <= 1)
        return 1;
    else
        return a * recursive_factorial(a - 1);
}

int main()
{
    int num;

    while (1)
    {
        printf("양의 정수 1개를 입력하세요 (종료: 음수): ");
        scanf("%d", &num);

        if (num < 0)
            break;

        printf("일반 함수 호출: %d! = %d\n", num, iterative_factorial(num));
        printf("재귀 함수 호출: %d! = %d\n", num, recursive_factorial(num));
    }

    return 0;
}
