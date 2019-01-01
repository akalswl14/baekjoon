#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin >> N;
	vector <pair<int,int> > v;
	for(int i=0;i<N;i++){
		pair<int,int> p;
		cin >> p.second;
		cin >> p.first;
		v.push_back(p);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<N;i++){
		cout << v[i].second <<' '<< v[i].first << '\n';
	}
}