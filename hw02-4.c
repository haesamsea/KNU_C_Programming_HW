#include <stdio.h>

int main(void){

    printf("literal의 저장 공간 크기\n");
    printf("(1) 10: %d Byte\n", sizeof(10));
    printf("(2) 0X18: %d Byte\n", sizeof(0X18));
    printf("(3) 17.1e-3: %d Byte\n", sizeof(17.1e-3));
    printf("(4) 3.14: %d Byte\n", sizeof(3.14));
    printf("(5) 'A': %d Byte\n", sizeof('A'));
    printf("(6) 3.14F: %d Byte\n", sizeof(3.14F));

    return 0;
}