#include <stdio.h>
#include <stdlib.h>
int main()
{
    char diamond[][5]={{' ',' ','*'},{' ','*',' ','*',},{'*',' ',' ',' ','*'},{' ','*',' ','*',},{' ',' ','*'}};
    int i,k;     //' '�м�Ҫ����ո��ʾ�ո��ַ�������ᱨ��������ʾΪ�յ��ַ�����
    for(i=0;i<5;i++)
    {
        for(k=0;k<5;k++)
            printf("%c",diamond[i][k]);
        printf("\n");
    }


    return 0;
}
