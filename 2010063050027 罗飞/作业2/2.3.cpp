/*
    ����ʵ�ֶԵ绰����������Ĺ�����ѯ
*/
#include"stdio.h"
#include"string.h"
struct inform{
    char *name;
    char *phone_num;
};
int main()
{
    inform phoneBook[10] = {        //�绰����Ϣ
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
        int flag=1;    //����Ƿ��ҵ���ش����ҵ�ֵΪ0
      scanf("%s",&temp);
        for(int i=1; i>=0; i--)
            for(int j=0; j<10;j++)
                if(i && strstr( (pm+j) -> name, temp)){
                    printf("%s\n", (pm+j)->phone_num);
                    flag=0; //�����������
                }
                else if(!i && strstr((pm+j) -> phone_num, temp)){
                    printf("%s\n", (pm+j) -> name);
                    flag=0;//����������
                }
        if( flag ) //��δ�ҵ��Ĵ���
            printf("No such name or phone_num\n");
    }

}
