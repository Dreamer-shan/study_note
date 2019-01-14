#include <stdio.h>

int main()
{   void exchange(int *p1,int *p2,int *p3);
    int *p1,*p2,*p3,a,b,c;   //要换n个数，就要定义n个变量，用n个指针指向他们；
    printf("输入三个整数:");
    scanf("%d %d %d",&a,&b,&c);
    p1=&a;
    p2=&b;
    p3=&c;
    exchange(p1,p2,p3);   //变量名做实参
    printf("排列顺序是:%d %d %d",*p1,*p2,*p3); //*p1是一个值（变量）
    return 0;
}
void exchange(int *p1,int *p2,int *p3)
{
    void swap(int *pt1,int *pt2);
    if(*p1<*p2)
        swap(p1,p2);
    if(*p1<*p3)
        swap(p1,p3);
    if(*p2<*p3)
        swap(p2,p3);
}
void swap(int *pt1,int *pt2)   //变量互换
{
    int p;
    p=*pt1,*pt1=*pt2;*pt2=p;
}




