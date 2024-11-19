#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = 0;
    int result;

    printf("x=0, y=0일때 ");
    printf("%d ", x && y);
    printf("%d ", x || y);
    printf("%d\n", !x);
    result = y++;

    printf("x=0, y=1일때 ");
    printf("%d ", x && y);
    printf("%d ", x || y);
    printf("%d\n", !x);
    result = x++;
    result = y--;

    printf("x=1, y=0일때 ");
    printf("%d ", x && y);
    printf("%d ", x || y);
    printf("%d\n", !x);
    result = y++;

    printf("x=1, y=1일때 ");
    printf("%d ", x && y);
    printf("%d ", x || y);
    printf("%d\n", !x);

    return 0;
}
