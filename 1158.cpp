#include<cstdio>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

queue <int> q;

int main(){
  int save;
  int n; cin >> n;
  int m; cin >> m;
  for(int i=1;i<=n;i++){
    q.push(i);
  }
  printf("<");
  while(!q.empty()){
    for(int i=0;i<m-1;i++){
      save = q.front();
      q.push(save);
      q.pop();
    }
    if(q.size() == 1){
      printf("%d",q.front());
    }
    else{
      printf("%d, ",q.front());
    }
    q.pop();
  }
  printf(">");
}