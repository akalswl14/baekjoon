#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main(){
	string s1,s2,s3,s4;
	vector<string> v1;
	vector<string> v2;
	cin >> s1 >> s2;
	for(int i=0;i<50;i++){
		s3 += s1;
		v1.push_back(s3);
		s4 += s2;
		v2.push_back(s4);
	}
	for(int i=0;i<50;i++){
		for(int j=0;j<50;j++){
			if(v1[i]==v2[j]){
				printf("1");
				return 0;
			}
		}
	}
	printf("0");
	return 0;
}
