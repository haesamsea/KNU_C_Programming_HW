#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char A = 107; // 정답 문자
    char G;       // 사용자가 입력한 문자
    int T = 0;    // 시도 횟수

    printf("알파벳 소문자 하나를 추측해 보시오\n");

    do {
        scanf(" %c", &G); // 공백 문자를 제거하기 위해 " %c" 사용
        T++;

        if (G < A)
        {
            printf("입력한 문자의 아스키 코드 값이 더 작습니다\n");
        }
        else if (G > A)
        {
            printf("입력한 문자의 아스키 코드 값이 더 큽니다\n");
        }

    } while (G != A);

    printf("정답입니다! 시도 횟수는 %d번!\n", T);

    return 0;
}
