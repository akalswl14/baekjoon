#include <cstdio>
#include <queue>
#include <vector>
#include <functional>

int main(){
	priority_queue <int, vector <int>, greater <int>	> pq;
	int N; cin >> N;
	for(int i=0;i<N;i++){
		int tmp; cin >> tmp;
		if(tmp = 0){
			if(pq.empty()){
				printf("0\n");
			}
			else{
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else{
			pq.push(tmp);
		}
	}
}