#include <stdio.h>

int main()
{
    float average(float array[10]);
    int i;
    float score[10],aver;
    printf("������10��ѧ���ĳɼ�\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&score[i]);   //����10��ѧ���ĳɼ�
    }
    aver=average(score);     //����������Ϊʵ��
    printf("ƽ���ɼ��ǣ�%f",aver);


    return 0;
}
float average(float array[10])
{
    float sum=0;  //sum�ĳ�ֵΪ0
    float aver;
    int i;
    for(i=0;i<10;i++)
    {
        sum=sum+array[i];  //iһ��Ҫ����Ϊ���ͱ��� ��Ȼ�ᱨ��
    }
    aver=sum/10;
    return(aver);   //��aver��Ϊ����ֵ
}

 /* **********
 ע   ������Ԫ����Ϊʵ��ʱ�����βδ��ݵ�������Ԫ�ص�ֵ
      ����������Ϊʵ��ʱ�����βΣ���������ָ����������ݵ�������Ԫ�ص��׵�ַ
 */





