#include<iostream>
using namespace std;
typedef struct{
	char name[15];
	char number[12];
	int tag;
}phonenumber;
int main()
{ 
   phonenumber list[10];//初始化电话薄信息 
   strcpy(list[0].name,"ldsfh");strcpy(list[0].number,"13527890432");
   strcpy(list[1].name,"alex");strcpy(list[1].number,"13143890432");
   strcpy(list[2].name,"jingtao");strcpy(list[2].number,"13178890764");
   strcpy( list[3].name,"huas");strcpy(list[3].number,"18932890432");
   strcpy( list[4].name,"jingguo");strcpy(list[4].number,"13643859234");
   strcpy(list[5].name,"huad");strcpy(list[5].number,"13892890432");
   strcpy(list[6].name,"jiabao");strcpy(list[6].number,"13632432325");
   strcpy(list[7].name,"ldfsg");strcpy(list[7].number,"18932890487");
   strcpy(list[8].name,"jieren");strcpy(list[8].number,"13434354352"); 
   strcpy(list[9].name,"alessd");strcpy(list[9].number,"13932893877");
  
   int i=0,j,num;
   char shuru[20];
   for(;;)
	{  num=0;
	 list[0].tag=0;list[1].tag=0;list[2].tag=0;list[3].tag=0;list[4].tag=0;
     list[5].tag=0;list[6].tag=0;list[7].tag=0;list[8].tag=0;list[9].tag=0; 
	 cin>>shuru;
	 //gets(shuru);
	if(shuru[0]>='0'&&shuru[0]<='9') //判断输入的号码时 
     {  i=0;
	   while(shuru[i]!='\0'&&shuru[i]!='\n') 
        {  
		  for(j=0;j<10;j++)          //遍历电话薄，查找 
     	     if(shuru[i]!=list[j].number[i]) list[j].tag=1; 
     	     i++;  
        }
        printf("您所要查询的信息是？…\n");
 	   for(i=0;i<10;i++)
 	      {if(list[i].tag==0)
		    {printf("%s\t",list[i].name);
    		 printf("%s\n",list[i].number);	
    		}   
			else num++;}
	 if(num==10) printf("未查到您需要查的信息\n");		 
     }
     else{  i=0;
     	while(shuru[i]!='\0'&&shuru[i]!='\n') 
        { 
		  for(j=0;j<10;j++)          //遍历电话薄，查找 
     	  if(shuru[i]!=list[j].name[i]) list[j].tag=1;
			  
     	     i++;
        }
     	 printf("您所要查询的信息是？…\n");
 	   for(i=0;i<10;i++)
 	      {if(list[i].tag==0)
		    {printf("%s\t",list[i].name);
    		 printf("%s\n",list[i].number);	
    		}   
    		else num++;} 
        if(num==10) printf("未查到您需要查的信息\n");		 		
     }
	}
}
