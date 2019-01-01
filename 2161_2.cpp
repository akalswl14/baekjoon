#include <iostream>
#include <queue>

using namespace std;
queue <int> q;
queue <int> trash;

int main(){
	int N; cin >> N;
	int x,y;
	for(int i=0;i<N;i++){
		q.push(i+1);
	}
	while(!(q.size() == 1)){
		x = q.front();
		q.pop();
		trash.push(x);

		y = q.front();
		q.pop();
		q.push(y);
	}
	while(!trash.empty()){
		cout << trash.front() << ' ';
		trash.pop();
	}
	while(!q.empty()){
		cout << q.front() << ' ';
		q.pop();
	}
}