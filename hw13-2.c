#include <stdio.h>

int main()
{
    int ary[3] = {8, 2, 8};
    int* p = ary; // 배열 이름 자체가 첫 번째 요소의 포인터

    printf("ary를 이용한 출력:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", ary[i]);
    }
    puts("");

    printf("p를 이용한 출력:\n");
    for (int k = 0; k < 3; k++)
    {
        printf("%d ", *(p + k));
    }

    return 0;
}
