#include <stdio.h>
#include <limits.h>
int main(){
    signed int a = 5;
    unsigned short b = 10;
    int c = UCHAR_MAX;
    printf("%d", sizeof(a));//4
    printf("%d", sizeof(b=a+1));//2
    printf("%d\n", a);//5
    printf("%d", c);//2147483647
    return 0;
}