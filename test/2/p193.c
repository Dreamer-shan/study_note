#include <stdio.h>

int main()
{
    float average(float array[],int n);
    int i;
    float score1[5],score2[10],aver1,aver2;
    printf("����A��ѧ���ĳɼ�:");
    for(i=0;i<5;i++)
    {
        scanf("%f",&score1[i]);
    }
    aver1=average(score1,5);    //����������Ϊʵ��
    printf("A���ƽ���ɼ��ǣ�%f\n",aver1);
    printf("����B��ѧ���ĳɼ�:");
        for(i=0;i<10;i++)
    {
        scanf("%f",&score2[i]);
    }
      aver2=average(score2,10);
      printf("B���ƽ���ɼ��ǣ�%f",aver2);
    return 0;
}
float average(float array[],int n)   //n������������Ϊʵ�Σ���ʾ�����С
/*�����β�����Ĵ�С�ǲ������õģ���Ϊ����ϵͳ�������β�����Ĵ�С��
ֻ�ǽ�ʵ���������Ԫ�ص�ַ���ݸ��β�������*/
{
    int i;
    float aver,sum=0;
    for(i=0;i<n;i++)
        sum=sum+array[i]; //��array[1]�ۼӵ�array[n]
    aver=sum/n;
    return(aver);   //��aver��Ϊ����ֵ
}

 /* **********
 ע   ������Ԫ����Ϊʵ��ʱ�����βδ��ݵ�������Ԫ�ص�ֵ
      ����������Ϊʵ��ʱ�����βΣ���������ָ����������ݵ�������Ԫ�ص��׵�ַ
 */





