#include <stdio.h>

int main(){

    int value = 0x2F24263F;
    int* pi = &value; 
    char* pc = (char*) &value;
    for (int i = 0; i <= 3; i++)
    {   
        char ch = *(pc + i);
        printf("%c %u\n", ch, pc + i);
    }

    return 0;
} 