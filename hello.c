#include <stdio.h>

/* 第 1 周位运算练习热身：按 F5 直接编译并调试本文件 */
int main(void)
{
    unsigned int x = 0x5A;

    printf("Hello, Embedded!\n");
    printf("x = 0x%X\n", x);
    printf("bin = ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (x >> i) & 1u);
    }
    printf("\n第0位置1: x | 0x01 = 0x%X\n", x | 0x01u);
    printf("sizeof(int) = %u bytes\n", (unsigned)sizeof(int));
    return 0;
}
