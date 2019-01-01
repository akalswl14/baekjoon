#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;
 
int main(){
    int T; scanf("%d",&T);
    for(int i=0; i<T; i++){
        queue<pair<int, int> > q;
        int N,M,ans=1; scanf("%d %d",&N,&M);

        for(int j=0; j<N; j++){
            int n; scanf("%d",&n);
            q.push(make_pair(n,j));
        }
        while(1){
            int top = 0, tidx = 0;
            for(int j=0; j<q.size(); j++){
                if(q.front().first > top){
                    top = q.front().first;
                    tidx = q.front().second;
                }
                pair<int, int> temp = q.front();
                q.pop();
                q.push(temp);
            }

            while(q.front().second != tidx){
                pair<int, int> temp = q.front();
                q.pop();
                q.push(temp);
            }
    

            if(q.front().second == M){
                printf("%d\n",ans);
                break;
            }
            else ans++; q.pop();
        }
    }
}