/*
    程序实现对电话号码和人名的关联查询
*/
#include"stdio.h"
#include"string.h"
struct inform{
    char *name;
    char *phone_num;
};
int main()
{
    inform phoneBook[10] = {        //电话簿信息
        { "luoluo","110124124"},
        { "luolu","123523452"},
        { "xiaoli","110124144"},
        { "xiaomm","123432523"},
        { "dagewe","141523455"},
        { "jinjin","141543930"},
        { "llfsag","141584375"},
        { "llfwrg","141584565"},
        { "llfdgg","141554357"},
        { "dafdfg","141543484"},

    };
    inform *pm = phoneBook;
    char temp[] = "luoljkhk";
    while(1){
        int flag=1;    //标记是否找到相关串，找到值为0
      scanf("%s",&temp);
        for(int i=1; i>=0; i--)
            for(int j=0; j<10;j++)
                if(i && strstr( (pm+j) -> name, temp)){
                    printf("%s\n", (pm+j)->phone_num);
                    flag=0; //找与名字相关
                }
                else if(!i && strstr((pm+j) -> phone_num, temp)){
                    printf("%s\n", (pm+j) -> name);
                    flag=0;//找与号码相关
                }
        if( flag ) //对未找到的处理
            printf("No such name or phone_num\n");
    }

}
