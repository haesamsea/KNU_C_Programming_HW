#include <stdio.h>

void backword(char str[]);
#define MAX 81

int main()
{
    char str[MAX];
    printf("한 줄의 문장을 입력하세요. >> \n");
    gets(str);

    printf("\n입력한 각각의 단어를 반대로 출력합니다.\n");
    backword(str);
}

void backword(char str[])
{

    int i = 0;
    while (str[i]) i++;
    for (--i; i >= 0; --i) {
        printf("%c", str[i]);
    }

    putchar('\n');
}
