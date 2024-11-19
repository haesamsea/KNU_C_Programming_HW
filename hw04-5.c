#include <stdio.h>

int main(void)
{
    printf("1, %d\n", 3 && 1 || 0);
    printf("2, %d\n", 5 - 1 != sizeof(int));
    printf("3, %d\n", 3 == 4 ? 3 - 5 : 4 % 3);
    printf("4, %d\n", 0 || 2);
    printf("5, %d\n", ~5 >> 2 << 3 << 1);
    printf("6, %d\n", 3 / !0 == 0);
    printf("7, %f\n", (double)((int)3.4 + 5.5));
    printf("8, %d\n", 1 | 3 & 11);
    printf("9, %d\n", sizeof 'a' + sizeof(char));
    printf("10, %d\n", sizeof 'a' + 'a');

    int a, b;
    a = 1;
    printf("11, %d\n", b = a = 3);

    a = 0;
    a = 16;
    printf("12, %d ", a << 2);
    printf("%d", a <<= 2);

    return 0;
}
