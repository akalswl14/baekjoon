#include <iostream>
#include <queue>

using namespace std;
queue <int> q;

int main(){
	int N;cin >> N;
	for(int i=0;i<N;i++){
		string inp; cin >> inp;
		int open=0;
		int close=0;
		for(int j =0;j<inp.size();j++){
			if(open < close){
				break;
			}
			if(inp[j]=='('){
				open ++;
			}
			else{
				close++;
			}
		}
		if(open != close){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}