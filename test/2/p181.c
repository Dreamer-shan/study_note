#include <stdio.h>

int main()
{
    int max4(int a,int b,int c,int d);
    int a,b,c,d,m;
    printf("请输入四个整数:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    m=max4(a,b,c,d);    //调用的时候只需要代入实参，不需要加上变量类型。
    printf("max is %d",m);
    return 0;
}
    int max4(int a,int b,int c,int d)
    {
        int max2(int a,int b);  //对max2的函数声明
        return (max2(max2(max2(a,b),c),d));  //3次调用max2，就可以比较出abcd四个数字的大小

    }
    int max2(int a,int b)
    {
    return(a>=b?a:b);
    }




