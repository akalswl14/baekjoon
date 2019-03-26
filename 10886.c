#include <stdio.h>

int main(){
	int N, y=0, n=0, ans;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&ans);
		if(ans==1){
			y++;
		}
		else{
			n++;
		}
	}
	if(y>n){
		printf("Junhee is cute!\n");
	}
	else{
		printf("Junhee is not cute!\n");
	}
}
