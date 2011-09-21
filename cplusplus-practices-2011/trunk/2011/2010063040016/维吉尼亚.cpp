#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char mingwen[100];
char miwen[100]; 
char miyue[100];
char mi[100];
void encode(char mingwen[]) 
   {
        int i,k;
        for(i=0;i<strlen(mingwen);i++)
        {
			if(i>=strlen(miyue)) 
			{
				k=i%strlen(miyue);
				mi[i]=miyue[k];
			}
			else
			{
				mi[i]=miyue[i];
			}
		}
		mi[strlen(mingwen)]='\0';
		for(i=0;i<strlen(mingwen);i++)
		{
			miwen[i]=mingwen[i]+mi[i]-'A';
			if(miwen[i]>=96)
			{
				miwen[i]=miwen[i]-26;
			}
		}
		miwen[strlen(mingwen)]='\0';
		printf("%s",miwen);
        printf("\n");
    } 
void decode(char miwen[])
{
		int i,k;
        for(i=0;i<strlen(miwen);i++)
        {
			if(i>=strlen(miyue)) 
			{
				k=i%strlen(miyue);
				mi[i]=miyue[k];
			}
			else
			{
				mi[i]=miyue[i];
			}
		}
		mi[strlen(miwen)]='\0';
		for(i=0;i<strlen(miwen);i++)
		{
			mingwen[i]=miwen[i]-mi[i]+'A';
			if(mingwen[i]<=64)
			{
				mingwen[i]=mingwen[i]+26;
			}
		}
		mingwen[strlen(miwen)]='\0';
		printf("%s",mingwen);
        printf("\n");
}
main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int a;
	printf("Plese enter the number:\n1------encode;\n2------decode;\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
        		printf("Please enter the MingWen:\n");
       	 		scanf("%s",&mingwen);
       	 		printf("Please enter the MiYue:\n");
        		scanf("%s",&miyue);
				encode(mingwen);
					break;
		case 2:
				printf("Please enter the MiWen:\n");
        		scanf("%s",&miwen);
        		printf("Please enter the MiYue:\n");
        		scanf("%s",&miyue);
        		decode(miwen);
					break;
		default:
				printf("Sorry.Wrong Number!\n");
					break;
	}
      return 0;	
      system("pause"); 
}
