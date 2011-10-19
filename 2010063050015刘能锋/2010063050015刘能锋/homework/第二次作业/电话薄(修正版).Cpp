//可以实现模糊查询号码或名字中间的信息，而不仅仅从头开始查找 
// 
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
   strcpy(list[0].name,"小红");strcpy(list[0].number,"13527890432");
   strcpy(list[1].name,"小刚");strcpy(list[1].number,"13143890432");
   strcpy(list[2].name,"金大宝");strcpy(list[2].number,"13178890764");
   strcpy( list[3].name,"花无缺");strcpy(list[3].number,"18932890432");
   strcpy( list[4].name,"花无水");strcpy(list[4].number,"13643859234");
   strcpy(list[5].name,"李刚刚");strcpy(list[5].number,"13892890432");
   strcpy(list[6].name,"文大大");strcpy(list[6].number,"13632432325");
   strcpy(list[7].name,"金山");strcpy(list[7].number,"18932890487");
   strcpy(list[8].name,"赵云");strcpy(list[8].number,"13434354352"); 
   strcpy(list[9].name,"赵大强");strcpy(list[9].number,"13932893877");
  
   int i=0,j,k,num;
   char shuru[20];
   for(;;)
	{  num=0;
	 for(i=0;i<10;i++) list[i].tag=0;
	 cin>>shuru;
	 //gets(shuru);
	if(shuru[0]>='0'&&shuru[0]<='9') //判断输入的号码时 
     { 	  for(j=0;j<10;j++)          //遍历电话薄，查找 
             { i=0;
			 while(list[j].number[i])
			   { k=0; 
			    if(shuru[k]==list[j].number[i])
                      { while(shuru[k]!='\0'&&shuru[k]==list[j].number[i])
					      {   k++;i++;} 
						  if(shuru[k]=='\0') list[j].tag=1;	//找到 
                        }
					else i++;					
			    }
             }
        printf("您所要查询的信息是？…\n");//输出超找的信息 
 	   for(i=0;i<10;i++)
 	      {if(list[i].tag==1)   //查到就tag==1 
		    {printf("%s\t",list[i].name);
    		 printf("%s\n",list[i].number);	
    		}   
			else num++;}
	 if(num==10) printf("未查到您需要查的信息\n");		 
     }
     else{ 		  for(j=0;j<10;j++)          //遍历电话薄，查找 
             { i=0;
			 while(list[j].name[i])
			   { k=0; 
			    if(shuru[k]==list[j].name[i])
                      { while(shuru[k]!='\0'&&shuru[k]==list[j].name[i])
					      {   k++;i++;} 
						  if(shuru[k]=='\0') list[j].tag=1;	//找到 
                        }
					else i++;					
			    }
             }
     	 printf("您所要查询的信息是？…\n");
 	   for(i=0;i<10;i++)
 	      {if(list[i].tag==1)
		    {printf("%s\t",list[i].name);
    		 printf("%s\n",list[i].number);	
    		}   
    		else num++;} 
        if(num==10) printf("未查到您需要查的信息\n");		 		
     }
	}
}
