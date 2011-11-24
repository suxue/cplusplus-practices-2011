#include<iostream> 
#include<string> 
#include<vector> 

using namespace std; 

string trim (string inStr ) 
{ 
 string outStr = inStr; 
 outStr.erase(0,outStr.find_first_not_of(" ")); 
 outStr.erase(outStr.find_last_not_of(" ") + 1); 
 return outStr; 
} 

vector<string> setParamIntoVector(string inStr, char c) 
{ 
 vector<string> v ; 

 trim(inStr); 
 inStr.erase(0,6); 
 inStr.erase(inStr.length()-1); 
 trim(inStr); 
 int j = inStr.find(c); 
 while(j>=0) 
 { 
  v.push_back(trim(inStr.substr(0,j-1))); 
  cout<<"which is pushed in:"<<trim(inStr.substr(0,j-1))<<endl; 
  inStr.erase(0,j+1); 
  if(inStr.find(c)== string::npos) 
  { 
   v.push_back(trim(inStr)); 
   cout<<"which is pushed in:"<<inStr<<endl; 
   break; 
  }
  else 
  { 
   j = inStr.find(c); 
  } 
 }
 return v; 
}
 int main()
{ 
 string s = "funcB(/B839 , 2 ,UTF8sting )"; 
 vector<string> paramVect = setParamIntoVector(s,','); 
 return 0; 
}