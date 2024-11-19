#include <stdio.h>

int main()
{
    int ary2[2][3] = {{4, 2, 3}, {5, 2, 3}};
    int* p = (int*)ary2; // 다차원 배열의 포인터

    printf("ary2를 이용한 출력:\n");
    for (int k = 0; k < 2; k++)
    {
        for (int i = 0; i < 3; i++)
            printf("%d ", ary2[k][i]);
        printf("\n");
    }
    puts("");

    printf("p를 이용한 출력:\n");
    for (int k = 0; k < 6; k++)
    {
        printf("%d ", *(p + k));
        if (k == 2) // 한 행 출력 후 줄바꿈
            printf("\n");
    }

    return 0;
}
