#include"stdio.h"
#include"string.h"
struct inform{
    char *name;
    char *phone_num;
};
int main()
{
    inform phoneBook[10] = {        //�绰����Ϣ
        { "jiayii","110124124"},
        { "durant","123523452"},
        { "garnett","110124144"},
        { "erdaye","123432523"},
        { "lamoard","141523455"},
        { "messi","141543930"},
        { "aguero","141584375"},
        { "tevez","141584565"},
        { "adriano","141554357"},
        { "davis","141543484"},

    };
    inform *pm = phoneBook;
    char temp[] = "wangjiahao";
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
