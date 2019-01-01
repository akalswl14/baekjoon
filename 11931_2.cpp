#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin >> N;
	vector <int> inp;
	for(int i=0;i<N;i++){
		int x;
		cin >> x;
		inp.push_back(-x);
	}
	sort(inp.begin(),inp.end());
	for(int i=0;i<N;i++){
		cout << -inp[i]<<'\n';
	}
}