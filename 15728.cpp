#include <stdio.h>
#include <algorithm>
#include <vector>
#include <functional>
#include <utility>

using namespace std;
int N,K;
vector<pair<int,int> > v;

int main(){
	scanf("%d %d", &N,&K);
	int share[N],team[N];
	for(int i=0;i<N;i++){
		scanf("%d",&share[i]);
	}
	for(int i=0;i<N;i++){
		scanf("%d",&team[i]);
	}
	sort(share,share+N);
	sort(team,team+N);
	for(int i=0;i<N;i++){
		if(team[i]<0){
			v.push_back(make_pair(team[i]*share[0],i));
		}else{
			v.push_back(make_pair(team[i]*share[N-1],i));
		}
	}
	sort(v.begin(),v.end(),greater<pair<int,int> >());
	printf("%d\n",v[K].first);
	return 0;
}
