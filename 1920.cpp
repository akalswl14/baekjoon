#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N;
int M;
vector<int> v;
int tem;

void bs(int x, int y, int key){
	int mid = (x+y)/2;
	if(x>y){
		printf("0\n");
		return;
	}else if(v[mid]==key){
		printf("1\n");
		return;
	}else if(v[mid]>key){//key가 더 클때
		bs(x,mid-1,key);
		return;
	}else{
		bs(mid+1,y,key);
		return;
	}
}
int main(){
	scanf("%d",&N);
	for(int i = 0;i<N;i++){
		scanf("%d",&tem);
		v.push_back(tem);
	}
	sort(v.begin(),v.end());
	scanf("%d",&M);
	for(int i = 0;i<M;i++){
		scanf("%d",&tem);
		bs(0,N-1,tem);
	}
	return 0;

}
