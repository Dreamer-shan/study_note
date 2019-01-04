#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char c;
    int letters=0,space=0,digit=0,others=0;
    while((c=getchar())!='\n')
    if(c>='a'&&c<='z'||c>='A'&&c<='Z')
        letters++;
     else if(c==' ')
        space++;
        else if(c>='0'&&c<='9')
            digit++;
            else others++;
            printf("字母数：%d\n 空格数：%d\n 数字数：%d\n 其他字符数:%d\n",letters, space, digit, others);
    return 0;
}
