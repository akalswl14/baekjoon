#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
   vector<int> v;
   int n,num;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
      scanf("%d",&num);
      v.push_back(num);
   }
   sort(v.begin(),v.end());
   for(int i=v.size()-1;i>=0;i--){
      printf("%d\n",v[i]);
   }
}