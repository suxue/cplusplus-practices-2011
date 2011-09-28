/*
    正向逆向输出26个大写英文字母
*/
#include"stdio.h"
int main()
{
    int icontrol=64;
    while(icontrol++<90)
        printf("%c",icontrol);
    printf("\n");
    while(icontrol-->65)
        printf("%c",icontrol);
    return 0;
}
