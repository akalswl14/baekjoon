#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

struct DS{
  vector<int> par, rank;
  DS(int n) : par(n), rank(n){
    for(int i=0;i<n;i++)
      par[i]=i;
   for(int i=0;i<n;i++)
     rank[i]=1;
  }

  int find(int u){
    if(u == par[u]) return u;
    return par[u] = find(par[u]);
  }

  void merge(int u, int v){
    u = find(u); v = find(v);
    if(u == v) return;
    if(u==1){
      par[v]=1;
      if(rank[1]==rank[v]) ++rank[1];
    }else if(v==1){
      par[u]=1;
      if(rank[1]==rank[u]) ++rank[1];
    }else{
      if(rank[u] > rank[v]) swap(u,v);
      par[u] = v;
      if(rank[u] == rank[v]) ++rank[v];
    } 
  }
};

int n,m,tem,rtn=0;
int main(){
  scanf("%d",&n);
  DS sets(n+1);
  scanf("%d",&m);
  for(int i=0;i<m;i++){
    int x,y;
    scanf("%d%d",&x,&y);
    sets.merge(x,y);
  }
  for(int i=2;i<=n;i++){
    tem = sets.find(i);
    if(tem == 1){
      rtn++;
    }
  }
  printf("%d\n", rtn);
  return 0;
}
