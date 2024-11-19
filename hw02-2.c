#include <stdio.h>
#define PI 3.141595

int main(void){

    float data1 = 5.37;
    double catt, diff;

    diff = data1 * data1 * PI;
    catt = data1 * 2 * PI;

    printf("원 반지름: %f\n", data1);
    printf("원 면적: %f\n", diff);
    printf("원 둘레: %f\n", catt);

    return 0;

}