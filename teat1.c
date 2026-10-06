#include<stdio.h>
#include<windows.h>
#include<time.h>

int main(){
    // char s[10]={0};
    // system("shutdown -s -t 60");
    // printf("电脑将在60秒后关机，若要取消关机，请输入“cancel”。\n");
    // scanf("%s",&s);
    // if(strcmp(s, "cancel") == 0){
    //    system("shutdown -a");
    //    printf("关机已取消。\n");
    // }else{
    //     printf("输入错误，关机未取消。\n");
    // }

    char s[20]={0};
    int a;
    int times=0;
    int num;
    int left=0;
    int right;
    srand((unsigned int)time(NULL));
    for(a=0;a<20;a++){
        s[a]=rand()%100;
    }
    for (a = 0; a < 20; a++){
        printf("%d ", s[a]);
    }
    printf("请输入你希望查找的数字：\n");
    scanf("%d", &num);
    right = sizeof(s)/sizeof(s[0]) - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(s[mid] == num){
            printf("找到了，位置为：%d\n", mid);
            break;
        }else if(s[mid] < num){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
        times++;
    }
    if(left > right){
        printf("未找到该数字。\n");
    }
    printf("查找次数：%d\n", times);
    return 0;
}