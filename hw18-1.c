#include <stdio.h>

void arraycopy(int* from, int* to, int size);
void arrayprint(int* p, int size);

int main(void)
{
    int to[] = {13, 34, 28, 56, 73, 45};
    int from[] = {3, 5, 1, 6, 7};

    arraycopy(from, to, 5);

    printf("From 배열: ");
    arrayprint(from, 5);

    printf("To 배열: ");
    arrayprint(to, 6);

    return 0;
}

void arraycopy(int* from, int* to, int size)
{
    for (int i = 0; i < size; i++)
        *(to + i) = *(from + i); // 배열 요소 복사
}

void arrayprint(int* p, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", *(p + i)); // 배열 요소 출력
    puts("");
}
