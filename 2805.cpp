#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long N,M,tem;
long long mid, ex_mid;
long long highest = 0;
vector<long long> tree;

long long lensum(int m){
	long long rtn = 0;
	for(int i=0;i<N;i++){
		if(m < tree[i]){
			rtn += (tree[i]-m);
		}
	}
	return rtn;
}

void bs(int x, int y, int key){
	while(x+1<y) {
		int mid = (x+y)/2;
		long long s = lensum(mid);
		if(s >= key) x = mid;
		else y = mid;
	}
	printf("%d\n", x);
}

int main(){
	scanf("%lld",&N);
	scanf("%lld",&M);
	for(int i=0;i<N;i++){
		scanf("%lld",&tem);
		tree.push_back(tem);
	}
	sort(tree.rbegin(),tree.rend());
	highest = tree[0];
	bs(0,1000000000,M);
	return 0;
}
