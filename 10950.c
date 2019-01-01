#include <stdio.h>

int plus(int A, int B){	
	int x;
	x=A+B;
	return x;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int A,B;
		scanf("%d %d",&A,&B);
		printf("%d\n",plus(A,B));
	}
}
