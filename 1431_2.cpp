#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector <pair<pair<int, int>, string> > v;

int main(){
	int N;
	cin >> N;
	for(int i =0;i<N;i++){
		string inp;
		cin >> inp;
		int sum=0;
		for(int j=0;j<inp.size();j++){
			if(inp[j]<='9'&&inp[j]>='0'){
				sum += inp[j] -'0';
			}
		}
		v.push_back(make_pair(make_pair(inp.size(),sum),inp));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<N;i++){
		cout << v[i].second << '\n';
	}
}