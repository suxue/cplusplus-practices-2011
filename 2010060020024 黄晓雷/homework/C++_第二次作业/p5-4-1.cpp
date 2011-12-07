/*
 *  Author: Huangxiaolei
 *  Date:   2011/10/24
 *  Function: 输入10个整数，将这10个整数安升序排列输出，并且奇数在前，偶数在后。
 *  Input:  10 9 8 7 6 5 4 3 2 1
 *  Output: 1 3 5 7 9 2 4 6 8 10 
 */
 #include<iostream>
 #include<stdlib.h>
 using namespace std;

 int main(){
 	 const int N=100;
     int i,j,len;
     //输入排序的数 
     cout<<"Input the length of the array:";
     cin>>len;
     int a[N];
     cout<<"Please input the number:";
     for(i=0;i<len;i++){
	     cin>>a[i];
     }
     cout<<endl;
     //升序排列 
     for (i=0;i<len-1;i++){
        for (j=i+1;j<len;j++){  
            if (a[i]>a[j]){  
	             int temp;
                 temp=a[i];      
	             a[i]=a[j];
                 a[j]=temp;
            }
        }
	} 
	int x1=0,x2=0, b[2][N];
	for(i=0;i<len;i++){
        if(a[i]%2!=0){
			 b[0][x1]=a[i];
			 x1++;
        }else{
			 b[1][x2]=a[i];
			 x2++;
        } 
    }
    int n;
    cout<<"The result is:   ";
    for(i=0;i<x1;i++){
        cout<<b[0][i]<<'\t';	   
    }
    for(i=0;i<x2;i++){
        cout<<b[1][i]<<'\t';	   
    }
	cout<<endl;
	system("pause");
	return 0;
}	 
			 
	
			   

     
