/*
    ��100-200֮�䲻�ܱ�3��7��������
*/
#include"stdio.h"
int main()
{
    int inum;
    for(inum=100;inum<=200;inum++)
        if(inum%3&&inum%7)
        printf("%d\t",inum);
    return 0;
}
