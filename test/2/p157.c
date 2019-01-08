#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c1[5],c2[5],c3[5];
    scanf("%s %s %s",c1,c2,c3);
    printf("%s %s %s",c1,c2,c3);   //c1,c2,c3前面不能加取地址符，因为数组名就相当于一个指针。

    return 0;
}
