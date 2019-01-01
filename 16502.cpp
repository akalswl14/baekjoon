#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int time,m;
vector<vector<pair<int,float> > > v(26);
queue<pair<float,int> > q;

int main(){
   scanf("%d%d",&time,&m);
   while(m--){
      char from,to;
      float p;
      scanf(" %c %c %f",&from,&to,&p);
      v[from-'A'].push_back(make_pair(to-'A',p));
   }
   for(int i=0;i<4;i++)
      q.push(make_pair(0.25,i));

   while(time--){
      int save_q_size=q.size();
      while(save_q_size--){
         int now=q.front().second;
         float p=q.front().first;
         q.pop();
         for(int i=0;i<v[now].size();i++)
            q.push(make_pair(p*v[now][i].second,v[now][i].first));
      }
   }
   float save[4]={};
   while(q.size()){
      save[q.front().second]+=q.front().first;
      q.pop();
   }
   for(int i=0;i<4;i++)
      printf("%.2f\n",save[i]*100);
}