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
    if(rank[u] > rank[v]) swap(u,v);
    par[u] = v;
    if(rank[u] == rank[v]) ++rank[v];
  }
};

int n,m;
int main(){   
	scanf("%d%d",&n,&m);
   	DS sets(n+1);
   	for(int i=0;i<m;i++){
   		int x, a, b;
      	scanf("%d%d%d",&x,&a,&b);
      	if(x==0){
      		sets.merge(a,b);
      	}else{
      		if(sets.find(a)==sets.find(b)){
      			printf("YES\n");
      		}else{
      			printf("NO\n");
      		}
      	}
   	}
}
