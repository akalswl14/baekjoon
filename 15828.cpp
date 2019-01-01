#include <stdio.h>
#include <queue>

using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	queue<int> Q;
	int x=0;
	scanf("%d",&x);
	while(x!=-1){
		if(x != 0){
			if(Q.size() != N){
				Q.push(x);
			}
		}
		else{
			Q.pop();
		}
		scanf("%d",&x);
	}
	if(Q.empty()){
		printf("empty\n");
	}
	else{
		while(!Q.empty()){
			printf("%d\n",Q.front() );
			Q.pop();
		}
	}
}