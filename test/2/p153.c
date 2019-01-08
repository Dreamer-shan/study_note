#include <stdio.h>
#include <stdlib.h>
int main()
{
    char diamond[][5]={{' ',' ','*'},{' ','*',' ','*',},{'*',' ',' ',' ','*'},{' ','*',' ','*',},{' ',' ','*'}};
    int i,k;     //' '中间要打个空格表示空格字符，否则会报错，错误显示为空的字符常量
    for(i=0;i<5;i++)
    {
        for(k=0;k<5;k++)
            printf("%c",diamond[i][k]);
        printf("\n");
    }


    return 0;
}
