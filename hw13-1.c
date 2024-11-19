#include <stdio.h>

int main()
{
    int i = 0x3C405B7B;
    char* p = (char*)&i;

    int value;

    for (value = 0; value <= 3; value++)
    {
        char ch = *(p + 3 - value);
        printf("주소 p + (%d) %3x ('%c')\n", 3 - value, ch, ch);
    }

    printf("*p++: %c \n", *p++); 
    *p--; // 포인터 복구

    printf("*++p: %c \n", *++p); 
    *--p; // 포인터 복구

    printf("(*p)++: %c \n", (*p)++); 
    (*p)--; // 원래 값으로 복구

    printf("++*p: %c\n", ++(*p));

    return 0;
}
