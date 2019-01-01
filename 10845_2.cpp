#include <iostream>
#include <queue>
#include <string>

using namespace std;
queue <int> q;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		string order;
		cin >> order;
		if(order[0]=='p'){
			if(order[1]=='u'){
				int num;
				cin >> num;
				q.push(num);
			}
			else{
				if(q.empty()){
					cout << -1<<'\n';
				}
				else{
					cout << q.front() <<'\n';
					q.pop();
				}
			}
		}
		else if(order[0]=='s'){
			cout << q.size()<<'\n';
		}
		else if(order[0]=='e'){
			if(q.empty()){
				cout << 1<<'\n';
			}
			else{
				cout << 0<<'\n';
			}
		}
		else if(order[0]=='f'){
			if(q.empty()){
					cout << -1<<'\n';
				}
			else{
				cout << q.front()<<'\n';
			}
		}
		else if(order[0]=='b'){
			if(q.empty()){
					cout << -1<<'\n';
				}
			else{
				cout << q.back()<<'\n';
			}
		}
	}
}