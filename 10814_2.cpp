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
		int x;
		string name;
		cin >> x;
		cin >> name;
		v.push_back(make_pair(make_pair(x,i),name));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<N;i++){
		cout << v[i].first.first << ' '<< v[i].second << '\n';
	}
}