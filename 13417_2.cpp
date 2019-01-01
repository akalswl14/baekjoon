#include <iostream>
#include <string>

using namespace std;

int main(){
	int T;
	string word;
	cin >> T;
	for(int i =0;i<T;i++){
		int N;cin>>N;
		string inp = "";
		for(int j=0;j<N;j++){
			string tmp; cin >> tmp;
			if(inp + tmp < tmp + inp){
				inp = inp + tmp;
			}
			else{
				inp = tmp + inp;
			}
		}
		cout << inp << '\n';	
	}
}