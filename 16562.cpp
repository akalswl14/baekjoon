#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

struct DS{
  vector<int> par,rank;
  DS(int n) : par(n), rank(n){
    for(int i=0;i<n;i++)
      par[i]=i;
  }

  int find(int u){
    if(u == par[u]) return u;
    return par[u] = find(par[u]);
  }

  void merge(int u, int v){
    u = find(u); v = find(v);
    if(u == v) return;
    if(rank[u] < rank[v]) swap(u,v);
    par[u] = v;
  }

  void add(int n,int u){
    rank[n] = u;
    return;
  }
};

int n,m,k,tem,rtn=0;

int main(){
  scanf("%d%d%d",&n,&m,&k);
  DS sets(n+1);
  for(int i=0;i<n;i++){
    scanf("%d",&tem);
    sets.add(i+1,tem);
  }
  for(int i=0;i<m;i++){
    int x,y;
    scanf("%d%d",&x,&y);
    sets.merge(x,y);
  }
  vector<int> v;
  for(int i=0;i<=n;i++){
    v.push_back(0);
  }
  for(int i=1;i<=n;i++){
    tem = sets.find(i);
    if(v[tem]!=1){
      v[tem] = 1;
      rtn += sets.rank[tem];
    }  
  }
  if(k<rtn){
    printf("Oh no\n");
    return 0;
  }
  printf("%d\n",rtn);
  return 0;
}
