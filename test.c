#include <stdio.h>
#include <limits.h>
int main(){
    // signed int a = 5;
    // unsigned short b = 10;
    // int c = UCHAR_MAX;
    // printf("%d", sizeof(a));
    // printf("%d", sizeof(b=a+1));//2
    // printf("%d\n", a);//5
    // printf("%d", c);//2147483647

    // int a=3.14;
    // float b=3.14;
    // printf("%d", a);//3.00
    // printf("%.2f", b);//3.140000
    // double c=a+6+b;
    // printf("%.2f\n", c);
    // printf("%6.2f\n", 3.1415);//8
    // printf("%.8s\n", "3.141592689");//8

    // int score=0;
    // int score1=0;
    // int score2=0;
    // int score3=0;
    // printf("请输入语文成绩：");
    // //scanf("%d", &score1);
    // printf("请输入数学成绩：");
    // //scanf("%d", &score2);
    // printf("请输入英语成绩：");
    // //scanf("%d", &score3);
    // scanf("%d%*c%d%*c%d", &score1, &score2, &score3);
    // score = score1 + score2 + score3;
    // printf("总成绩为：%d\n", score);
    // printf("语文成绩为：%d\n", score1);
    // printf("数学成绩为：%d\n", score2);
    // printf("英语成绩为：%d\n", score3);

    int a=0;
    scanf("%d", &a);
    if(a%1==0){
        printf("是整数");
        if(a>=0){
            printf("是正整数");}
    }else{
        printf("不是整数");}
    return 0;
}