#include <stdio.h>
#include <queue>

using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	queue<int> Q;
	for(int i=0;i<N;i++){
		char order[7]={};
		scanf("%s",order);
		if(order[0]=='p'){
			if(order[1]=='u'){
				int x;
				scanf("%d", &x);
				Q.push(x);
			}
			else{
				if(Q.empty()){
					printf("-1\n");
				}
				else{
					printf("%d\n",Q.front());
					Q.pop();
				}
			}
		}
		else if(order[0]=='s'){
			printf("%d\n",Q.size());
		}
		else if(order[0]=='e'){
			printf("%d\n",Q.empty());
		}
		else if(order[0]=='f'){
			if(Q.empty()){
					printf("-1\n");
			}
			else{
					printf("%d\n",Q.front());
			}
		}
		else if(order[0]=='b'){
			if(Q.empty()){
					printf("-1\n");
			}
			else{
					printf("%d\n",Q.back());
			}
		}
	}
}