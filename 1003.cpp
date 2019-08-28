#include <stdio.h>

int N,tem;
int a[41]={0,};
int b[41]={0,};

int fib_a(int k){
	// printf("현재 k는 %d\n", k);
	if(a[k]!=0||k<2){
		return a[k];
	}else{
		return a[k] = fib_a(k-1)+fib_a(k-2);
	}
	
}
int fib_b(int k){
	if(b[k]!=0||k<2){
		return b[k];
	}else{
		return b[k] = fib_b(k-1)+fib_b(k-2);
	}
}

int main(){
	scanf("%d",&N);
	a[0] = 1;
	b[0] = 0;
	a[1] = 0;
	b[1] = 1;
	for(int i=0;i<N;i++){
		scanf("%d",&tem);
		if(tem>=2){
			fib_a(tem);
			fib_b(tem);
		}
		printf("%d %d\n",a[tem],b[tem]);
	}
	
}
