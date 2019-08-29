#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int N;
int x,y;
vector<pair<int,int> > v;

int main(){
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d%d",&x,&y);
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<N;i++){
		printf("%d %d\n",v[i].first, v[i].second );
	}
}
