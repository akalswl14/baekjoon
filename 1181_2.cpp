#include <stdio.h>
#include <iostream>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int N,l;
string s="";
vector<pair<int,string>	> v;

int main(){
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		cin >> s;
		l = s.size();
		v.push_back(make_pair(l,s));
	}
	sort(v.begin(),v.end());
	cout << v[0].second << '\n';
	string p = v[0].second;
	for(int i=1;i<N;i++){
		s = v[i].second;
		if(s.compare(p)!=0){
			cout << s << '\n';
		}
		p = v[i].second;
	}
	return 0;
}
