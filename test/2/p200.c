#include <stdio.h>
float Max,Min;
int main()
{
    float average(float array[],int n);
    int i,score[10];
    float ave;
    printf("请输入10个学生的成绩:");
    for(i=0;i<10;i++)
    {
        scanf("%f",&score[i]);
    }
    //错误代码
    /*
    输入：1 2 3 4 5 6 7 8 9 10
    printf("最大值是:%f\n",Max);    //max = 0
    printf("最小值是:%f\n",Min);    //min = 0
    printf("平均值是:%f\n",average());   // average() = 5.5
        因为程序是由上往下运行的，从第一行开始，return 结束
        所以在没用进入对max,min进行处理的函数之前就已经输出了max,min
        所以输出结果错误。
    */
    ave=average(score,10);

    printf("最大值是:%f\n",Max);
    printf("最小值是:%f\n",Min);
    printf("平均值是:%f\n",ave);  //程序是由上往下运行的


    return 0;
}
float average(float array[],int n)
{   int i;
    float aver,sum=array[0];
    Max=Min=array[0];
    for(i=1;i<n;i++)
    {
        if(array[i]>Max)
        {Max=array[i];}
          else if(array[i]<Min)
            Min=array[i];
            sum=sum+array[i];
    }
    aver=sum/n;
    return(aver);
}






