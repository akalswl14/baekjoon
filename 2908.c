#include <stdio.h>

int reverse(int x){
	int ans=0;
	int a;
	while(x !=0){
		a= x%10;
		x/=10;
		ans=ans*10+a;
	}
	return ans;
}

int main(){
	int A,B;
	scanf("%d %d",&A,&B);
	if(reverse(A)>reverse(B)){
		printf("%d\n",reverse(A));
	}
	else{
		printf("%d\n",reverse(B));
	}
}
