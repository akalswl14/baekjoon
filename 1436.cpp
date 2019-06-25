#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
	int N,cnt = 0,num=666;
	scanf("%d",&N);
	string s = "666";
	while(N>cnt){
		if(s.find("666") != string::npos){
			cnt++;
			if(N==cnt){
				printf("%d\n",num);
				return 0;
			}
		}
		num++;
		s = to_string(num);
	}
}
