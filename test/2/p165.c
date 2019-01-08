#include <stdio.h>
#include <string.h>
int main()
{   char str [3][20];
    char string[20];
    int i;
    for(i=0;i<3;i++)
    {
        gets(str[i]);
    }
    if(strcmp (str[1],str[0])>0 )
        strcpy(string,str[1]);
    else
        strcpy(string,str[0]);
    if(strcmp (string,str[2])<0)
        strcpy(string,str[2]);
    printf("\n the largest string is:\n%s",string);
    return 0;
}
