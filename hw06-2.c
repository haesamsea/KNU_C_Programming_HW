#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int p;

    do
    {
        printf("1. 파일\n");
        printf("2. 편집\n");
        printf("3. 보기\n");
        printf("하나를 선택하시오.\n");
        scanf("%d", &p);

    } while (p >= 4 || p <= 0);

    printf("선택된 메뉴는 %d", p);

    return 0;
}
