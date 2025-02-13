# include <stdio.h>
#include<stdlib.h>
int main (void)
{
int  i=1234;
printf("i=%+08d\n",i);
    printf("請按 Enter 鍵以繼續...");
    getchar();  // 等待使用者輸入
    return 0;
}