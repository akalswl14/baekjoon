#include <stdio.h>
#include <queue>

using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	queue<int> Q;
	for(int i=1;i<=N;i++){
		Q.push(i);
	}
	while(Q.size() !=1){
		Q.pop();
		int x = Q.front();
		Q.pop();
		Q.push(x);
	}
	printf("%d\n",Q.front());
}