#include <stdio.h>

int main()
{
    int a[6] = {11, 22, 33, 44, 55, 66};
    int* p = &a[0]; // 배열 시작 포인터
    int* q = &a[5]; // 배열 끝 포인터

    for (int k = 0; k < 3; k++)
    {
        printf("%d ", *(q - k)); // 끝에서 앞으로 이동
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *(p + 2 - i)); // 시작에서 2번째부터 뒤로 이동
    }

    return 0;
}
