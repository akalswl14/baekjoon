#include <iostream>
#include <stack>
#include <string>

using namespace std;
stack <int> stk;
queue <int> q;
stack <int> final;

int main(){
	int N; cin >> N;
	for(int i=0;i<N;i++){
		int num; cin >> num;
		q.push(num);
	}
	for(int i=0;i<N;i++){
		int x,y;
		x = q.top();
		q.pop();
		if(!q.empty()){
			y = q.top();
			if(x>y){
				stk.push(x);
			}
			else{
				final.push(x);
			}
		}
		else{
			final.push(x);
		}
	}
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			final
		}
	}
}