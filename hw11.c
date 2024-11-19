#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void)
{
    int guess, input, num = 0;

    srand((long)time(NULL));
    guess = rand() % MAX + 1;

    printf("1에서 %d 사이에서 한 정수가 결정되었습니다.\n", MAX);
    printf("기회는 총 7번입니다\n");
    printf("이 정수는 무엇일까요? 입력해 보세요. : ");

    while (scanf("%d", &input))
    {
        if (num < 6) // 6번 이하의 시도일 경우
        {
            if (input > guess)
                printf("입력한 수 %d보다 작습니다. 다시 입력하세요. : ", input);
            else if (input < guess)
                printf("입력한 수 %d보다 큽니다. 다시 입력하세요. : ", input);
            else
            {
                puts("정답입니다!");
                break;
            }
            num++; // 시도 횟수 증가
        }
        else // 시도 횟수가 7번을 넘은 경우
        {
            printf("모든 기회를 쓰셨습니다. 정답은 %d였습니다.\n", guess);
            break;
        }
    }

    return 0;
}
