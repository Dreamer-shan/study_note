#include <stdio.h>

int main()
{
    float average(float array[10]);
    int i;
    float score[10],aver;
    printf("请输入10个学生的成绩\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&score[i]);   //输入10个学生的成绩
    }
    aver=average(score);     //将数组名作为实参
    printf("平均成绩是：%f",aver);


    return 0;
}
float average(float array[10])
{
    float sum=0;  //sum的初值为0
    float aver;
    int i;
    for(i=0;i<10;i++)
    {
        sum=sum+array[i];  //i一定要定义为整型变量 不然会报错
    }
    aver=sum/10;
    return(aver);   //将aver作为返回值
}

 /* **********
 注   将数组元素作为实参时，向形参传递的是数组元素的值
      将数组名作为实参时，向形参（数组名或指针变量）传递的是数组元素的首地址
 */





