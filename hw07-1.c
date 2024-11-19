#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int p = 1, i = 0, count = 0; // 초기화
    printf("정수 1개를 입력하세요: ");
    scanf("%d", &i); // i까지의 숫자 출력

    while (p <= i) // p가 i보다 작거나 같을 때까지 반복
    {
        if ((p % 2 == 0) || (p % 5 == 0)) // 2의 배수 또는 5의 배수는 제외
        {
            printf(""); // 출력 없음
        }
        else
        {
            printf("%d ", p); // 조건에 맞는 숫자 출력
        }

        p++;      // p 증가
        count++;  // 카운트 증가

        if (count % 10 == 0) // 10개마다 줄바꿈
        {
            puts("");
        }

        continue;
    }

    return 0;
}
