#include <stdio.h>

int main()
{
    void hanoi(int n,char A,char B,char C);
    int n;
    printf("��������������:");
    scanf("%d",&n);
    printf("�ƶ�%d�����ӵ�˳����:\n",n);
    hanoi(n,'A','B','C');  //'A''B''C'����char���͵�  ����Ҫ����һ��
    return 0;
}
 void hanoi(int n,char A,char B,char C)  //�������ܣ���n�����Ӵ�A����B�ƶ���C
{
    void move(char A,char C);
    if(n==1)
        move(A,C);          //���n==1��ֱ�Ӱ�A�ƶ���C
    else
    {
        hanoi(n-1,A,C,B);   //��n-1�����Ӵ�A����C�ƶ���B
        move(A,C);
        hanoi(n-1,B,A,C);    //�ٽ���n-1�����Ӵ�B����A�ƶ���C
    }

}
void move(char A,char C)
{
    printf("%c--%c\n",A,C);
}

//  n�����ӹ���Ҫ�ƶ�2�Ĵη�-1��




