#include <stdio.h>
#include <string.h>

char c[]="AAAAAAAAAAAAAAAA";
int main(void)
{
    char arr[8];
    /*执行复制，如果c 长度超过8，则出现缓冲区溢出*/
    strcpy(arr, c);
    for(int i=0;i<8&&arr[i];i++)
    {
        printf("\\0x%x",arr[i]);
    }
    printf("\n");
    return 0;
}