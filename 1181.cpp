#include <stdio.h>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>
#include <iostream>

using namespace std;

int main(){
   int n;
   string s;
   scanf("%d",&n);
   vector<pair<int,string> > v;

   for(int i=0; i<n; i++){
      cin >> s;
      v.push_back(make_pair(s.length(),s));
   }

   sort(v.begin(),v.end());

   for(int i=0; i<v.size(); i++){
      if(v[i].second != v[i+1].second){
         printf("%s\n",v[i].second.c_str());
      }
   }
}