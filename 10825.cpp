#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
	int N;
	scanf("%d",&N);
	vector<pair<pair<pair<int,int>,int>,string> > v;
	for(int i=0;i<N;i++){
		int a, b, c;
		string name;
		cin >> name >> a >> b >> c;
		v.push_back(make_pair(make_pair(make_pair(100-a,b),100-c),name));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<N;i++){
		cout << v[i].second << '\n';
	}
}
