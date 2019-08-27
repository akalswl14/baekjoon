#include <iostream>
#include <stdio.h>
using namespace std;

int arr[64][64];
int N;


int all(int x,int y, int l){
	int first = arr[x][y];
	for(int i=x;i<x+l;i++){
		for(int j=y;j<y+l;j++){
			if(first != arr[i][j]){
				return -1;
			}
		}
	}
	return first;
}


void box(int x,int y,int l){
	int now = l/2;
	int allrtn = all(x,y,l);
	if(l==1){//크기가 1이라면
		cout << arr[x][y];
		return;
	}else if(allrtn != -1){//검사했을때 모두 0 or 1 이라면
		cout << allrtn;
		return;
	}else{//아니면 재귀열어야지.
		cout << '(';
		box(x,y,now);
		box(x,y+now,now);
		box(x+now,y,now);
		box(x+now,y+now,now);
		cout << ')';
		return;
	}
}

int main(){
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%1d",&arr[i][j]);
		}
	}
	box(0,0,N);
	return 0;
}
