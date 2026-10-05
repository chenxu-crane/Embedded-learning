#include<stdio.h>
#include<windows.h>

int main(){
    char s[10]={0};
    system("shutdown -s -t 60");
    printf("电脑将在60秒后关机，若要取消关机，请输入“cancel”。\n");
    scanf("%s",&s);
    if(strcmp(s, "cancel") == 0){
       system("shutdown -a");
       printf("关机已取消。\n");
    }else{
        printf("输入错误，关机未取消。\n");
    }
   return 0;
}