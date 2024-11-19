#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num = 0;
    int data[] = {3, 21, 35, 57, 24, 82, 8};

    printf("Before: \n");
    for (num = 0; num < 7; num++)
    {
        printf("%d ", data[num]);
    }

    printf("\nAfter : \n");
    for (num = 0; num < 7; num++)
    {
        printf("%d ", data[num] + 10); // 각 요소에 10을 더한 결과 출력
    }

    return 0;
}
