#include <stdio.h>

int main()
{
    void hanoi(int n,char A,char B,char C);
    int n;
    printf("请输入盘子数量:");
    scanf("%d",&n);
    printf("移动%d个盘子的顺序是:\n",n);
    hanoi(n,'A','B','C');  //'A''B''C'都是char类型的  所以要保持一致
    return 0;
}
 void hanoi(int n,char A,char B,char C)  //函数功能：将n个盘子从A经过B移动到C
{
    void move(char A,char C);
    if(n==1)
        move(A,C);          //如果n==1，直接把A移动到C
    else
    {
        hanoi(n-1,A,C,B);   //将n-1个盘子从A经过C移动到B
        move(A,C);
        hanoi(n-1,B,A,C);    //再将这n-1个盘子从B经过A移动到C
    }

}
void move(char A,char C)
{
    printf("%c--%c\n",A,C);
}

//  n个盘子共需要移动2的次方-1次




