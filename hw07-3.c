#include <stdio.h>
#include <math.h>

int main(void)
{
    int num = 8; // 삼각형 높이 설정

    for (int i = 0; i < num; i++) // 각 행 반복
    {
        for (int j = num - 1; j > i; j--) // 왼쪽 공백
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) // 숫자 출력
        {
            int c = j - i;
            printf("%d", abs(c)); // 숫자의 절댓값 출력
        }

        printf("\n");
    }

    return 0;
}
