#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	vector<string> v;
	for(int i=0;i<s.size();i++){
		v.push_back(s.substr(i));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<s.size();i++){
		cout << v[i] << '\n';
	}
}
