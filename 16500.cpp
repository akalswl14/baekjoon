#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

string s;
vector<string> v;
int n,done=0;

void btk(string now){
   if(done==0 && now.size()==0){
      printf("1");
      done=1;
   }
   else{
      for(int i=0;i<n;i++)
         if(now.find(v[i])==0){
            btk(now.substr(v[i].size(),now.size()-v[i].size()));
         }
   }
}

int main(){
   cin>>s;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
      string in;
      cin>>in;
      v.push_back(in);
   }
   btk(s);
   if(done==0){
      printf("0");
   }
}