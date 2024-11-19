#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num, score, max = 0;
    int data[10] = {0}; // 0부터 9까지의 빈도 저장

    printf("0부터 9까지 정수를 입력하시오.\n");

    for (num = 0; num < 20; num++) // 20개의 정수 입력
    {
        do
        {
            scanf("%d", &score);
        } while (!(score >= 0 && score <= 9)); // 0~9 범위 내의 정수만 허용

        data[score]++; // 입력된 값의 빈도 증가
    }

    for (num = 0; num < 10; num++) // 가장 많이 나온 숫자 찾기
    {
        max = (data[num] > data[max]) ? num : max;
    }

    printf("0~9 중 가장 많이 나온 숫자는 %d이고, %d번 나왔습니다.", max, data[max]);
    return 0;
}
