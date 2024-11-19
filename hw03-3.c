#include <stdio.h>

int main(void)
{
    int korean = 91;
    int math = 96;
    int english = 89;
    float sum = korean + math + english;

    printf("[평균 계산 프로그램]\n");
    printf("국어 점수를 입력하시오: %d\n", korean);
    printf("수학 점수를 입력하시오: %d\n", math);
    printf("영어 점수를 입력하시오: %d\n", english);
    printf("세 과목의 평균 점수는 %f점입니다.\n", sum / 3);

    return 0;
}
