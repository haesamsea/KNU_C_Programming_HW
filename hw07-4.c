#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num = 0;

    printf("1에서 9 사이의 정수를 입력하시오 >> ");
    scanf("%d", &num);

    if ((num >= 1) && (num <= 9)) // 유효한 숫자인 경우
    {
        for (int i = 1; i < (num + 1); i++) // 각 행 반복
        {
            for (int j = 1; j < i + 1; j++) // 왼쪽 숫자 출력
            {
                printf("%d", j);
            }

            for (int j = num - 1; j > i; j--) // 오른쪽 * 출력
            {
                printf("*");
            }

            printf("\n");
        }
    }
    else
    {
        printf("1에서 9까지의 정수가 아닙니다. 입력 오류입니다");
    }

    return 0;
}
