/*
    ������ж������ַ����Ļ����ж�
*/
#include"stdio.h"
#include"string.h"
int Is_huiwen(char *str) {
    int s_len = strlen(str);            //���Ӻ������ж������ַ����Ļ����ж�
    for(int i=0; i < s_len/2; i++)
        if(str[i] != str[s_len-i-1]) return 0;
    return 1;
}
int main()
{
        char *a = "abccba";
        printf("%d",Is_huiwen(a));
}
