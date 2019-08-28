#include <stdio.h>
#include <algorithm>

using namespace std;

int N;
int price[1001][3];
int rtn[1001][3];

int main(){
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&price[i][0]);
		scanf("%d",&price[i][1]);
		scanf("%d",&price[i][2]);
	}
	rtn[0][0] = price[0][0];
	rtn[0][1] = price[0][1];
	rtn[0][2] = price[0][2];
	for(int i=1;i<N;i++){
		rtn[i][0] = min(rtn[i-1][1],rtn[i-1][2])+price[i][0];
		rtn[i][1] = min(rtn[i-1][0],rtn[i-1][2])+price[i][1];
		rtn[i][2] = min(rtn[i-1][1],rtn[i-1][0])+price[i][2];
	}
	printf("%d\n",min(rtn[N-1][0],min(rtn[N-1][1],rtn[N-1][2])));
}
