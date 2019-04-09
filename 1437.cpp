#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	vector<char> v;
	for(int i=0;i<s.size();i++){
		v.push_back(s[i]);
	}
	sort(v.begin(),v.end());
	for(int i=s.size()-1;i>=0;i--){
		cout << v[i];
	}
}
