#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
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

    // int a=0;
    // scanf("%d", &a);
    // if(a%1==0){
    //     printf("是整数");
    //     if(a>=0){
    //         printf("是正整数");}
    // }else{
    //     printf("不是整数");}
    // int i=0;
    // while(i<=10){
    //     printf("%d", i);
    //     i++;
    // }
    // printf("\n");
    // int a=0;
    // while(a<=10){
    //     printf("%d", a);
    //     ++a;
    // }

    // int a=1234;
    // int b=521;
    // while(a%10!=0){
    //     int c=a%10;
    //     a=a/10;
    //     printf("%d", c);
    // }
    // printf("\n");
    // while(b%10!=0){
    //     int d=b%10;
    //     b=b/10;
    //     printf("%d", d);
    // }

    // for(int i=0; i<10; i++){
    //     printf("%d", i);
    // }
    // printf("\n");
    // for(int i=0; i<10; ++i){
    //     printf("%d", i);
    // }

    // int a=0;
    // int sum=0;
    // for(a=1;a<=100;a++){
    //     if(a%3==0){
    //         sum+=a;
    //     }
    // }
    // printf("%d", sum);

    // int num=0;
    // int sum=0;
    // scanf("%d", &num);
    // do{
    //     num/=10;
    //     sum++;
    // }while(num!=0);
    // printf("%d", sum)；

    // int a=0;
    // int i=0;
    // int sum=0;
    // for(a=100;a<=200;a++){
    //     for(i=2;i<=a;i++){
    //         if(a%i==0){
    //             break;
    //         }
    //     }
    //     if(i==a){
    //         sum++;
    //         printf("%d ", a);
    //     }
    // }
    // printf("总共有%d个数", sum);

    // srand((unsigned int)time(NULL));
    // printf("%d\n",rand());
    // printf("%d\n",rand());
    // printf("%d\n",rand());
    // printf("%d\n",rand());
    // printf("%d\n",rand());
    
    char in[]={"abcdefghijklmnopqrstuvwxyz"};
    char out[]={"##########################"};
    int i=sizeof(in);
    int o=sizeof(out);
    int num=(sizeof(in)-2)/2;
    for(int a=0; a<=num; a++)
    {
        out[a]=in[a];
        out[sizeof(in)-a-2]=in[sizeof(in)-a-2];
        printf("%s\n", out);
    }
    printf("%d\n", in[26]);
    printf("%d\n", i);
    printf("%d\n", o);
    printf("%s\n", in);
    return 0;
}