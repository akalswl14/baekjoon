#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int tree[1024];
int num =1;

void inorder(int root){
	if(root > num){
		return;
	}
	inorder(2*root);
	cin >> tree[root];
	inorder(2*root +1);
}

void print_inorder(int n){
	if(n > num){
		return ;
	}
	for(int i=0;i<n;i++){
		printf("%d ", tree[n+i] );
	}
	printf("\n");
	print_inorder(2*n);
}

int main(){
	int N; cin >> N;
	num = pow(2,N)-1;
	inorder(1);
	print_inorder(1);
	return 0;
}