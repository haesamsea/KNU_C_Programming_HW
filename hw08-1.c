#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 11

int main()
{
    int num, sum = 0; // num: 배열에 저장할 숫자, sum: 합계
    int array[NUMBER]; // 배열 선언

    for (num = 0; num < 10; num++)
    {
        scanf("%d", &array[num]); // 입력받은 값을 배열에 저장
        sum += array[num];        // 합계 계산
    }

    array[10] = sum; // 마지막 배열 요소에 합계를 저장
    printf("%d", array[10]); // 합계 출력
    return 0;
}
