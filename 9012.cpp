#include <stdio.h>
#include <stack>

using namespace std;

int main(){
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
      stack<int> s;
      int god=1;
      char word[55]={};
      scanf("%s",word);
      for(int j=0;word[j];j++)
         if(word[j]=='('){
            s.push(1);
         }
         else{
            if(s.empty()){
               good=0; 
            }
            else s.pop();
         }
      if(good==1 && s.empty())
         printf("YES\n");
      else printf("NO\n");
   }
}