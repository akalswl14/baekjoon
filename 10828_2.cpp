#include <iostream>
#include <stack>
#include <string>

using namespace std;
stack <int> stk;

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
				stk.push(num);
			}
			else{
				if(stk.empty()){
					cout << -1<<'\n';
				}
				else{
					cout << stk.top() <<'\n';
					stk.pop();
				}
			}
		}
		else if(order[0]=='s'){
			cout << stk.size()<<'\n';
		}
		else if(order[0]=='e'){
			if(stk.empty()){
				cout << 1<<'\n';
			}
			else{
				cout << 0<<'\n';
			}
		}
		else if(order[0]=='t'){
			if(stk.empty()){
					cout << -1<<'\n';
				}
			else{
				cout << stk.top()<<'\n';
			}
		}
	}
}