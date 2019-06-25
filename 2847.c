#include <stdio.h>

int main(){
	int N,now=0,cnt = 0,index = 0;
	scanf("%d",&N);
	int num[N];
	for(int i=0;i<N;i++){
		scanf("%d",&num[i]);
	}
	now = num[N-1]-1;
	index = N-1;
	while(index != 0){
		for(int i=N-1;i>=0;i--){
			if(num[i]>now&&index>i){
				cnt += num[i] - now;
				num[i] = now;
			}
		}
		index --;
		now = num[index]-1;
	}
	printf("%d\n",cnt);
	return 0;
}
