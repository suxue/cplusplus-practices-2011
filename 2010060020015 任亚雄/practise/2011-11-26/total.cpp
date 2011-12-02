//the total of the class grade
#include<iostream>
#include<stdlib.h>
using namespace std;
const int MaxN=100;
const double Rate=0.6;
class Score
{
 private:
        long No;
        char *Name;
        int Peace;
        int Final;
        double Total;
 public:
        Score(long no=0,char *name,int peace,int final)
        {
          No=no;
          Name=name;
          Peace=peace;
          Final=final;                               
        }             
        void  Count()
        {
          Total=Peace*Rate+Final*(1-Rate)+0.5;                                             
        }
        void Showscore()
        {
        cout<<No<<"\t"<<Name<<"\t"<<Peace<<"\t"<<Final<<"\t"<<Total<<endl;                                                                                   
        }
};
        int main()
        {
         Score ClassScore2[3]={Score(200607001,"LiuNa",80,79),
              Score(200607002,"CuiPeng",90,85),Score(200607003,"ZhouJun",75,55)};
         for(int i=0;i<3;i++)
         ClassScore2[i].Count();
         for(int i=0;i<3;i++)
         ClassScore2[i].Showscore();
         system("pause");
         return 0;                                                                                                                                                     
         }
