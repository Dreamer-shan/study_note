#include <stdio.h>

int main()
{
    float average(float array[],int n);
    int i;
    float score1[5],score2[10],aver1,aver2;
    printf("输入A班学生的成绩:");
    for(i=0;i<5;i++)
    {
        scanf("%f",&score1[i]);
    }
    aver1=average(score1,5);    //将数组名作为实参
    printf("A班的平均成绩是：%f\n",aver1);
    printf("输入B班学生的成绩:");
        for(i=0;i<10;i++)
    {
        scanf("%f",&score2[i]);
    }
      aver2=average(score2,10);
      printf("B班的平均成绩是：%f",aver2);
    return 0;
}
float average(float array[],int n)   //n在主函数中作为实参，表示数组大小
/*声明形参数组的大小是不起作用的，因为编译系统不会检查形参数组的大小，
只是将实参数组的首元素地址传递给形参数组名*/
{
    int i;
    float aver,sum=0;
    for(i=0;i<n;i++)
        sum=sum+array[i]; //从array[1]累加到array[n]
    aver=sum/n;
    return(aver);   //将aver作为返回值
}

 /* **********
 注   将数组元素作为实参时，向形参传递的是数组元素的值
      将数组名作为实参时，向形参（数组名或指针变量）传递的是数组元素的首地址
 */





