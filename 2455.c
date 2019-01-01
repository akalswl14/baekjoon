
#include <stdio.h>

int main(){
	int train[4] = {0, };
	int on = 0;
	int	off = 0;
	int max = 0;
	for(int i = 0;i < 4;i++){
		scanf("%d %d",&off,&on);
		if(i != 0){
			train[i] = train[i-1];
		}
		train[i] -= off;
		train[i] += on;
		if(max < train[i]){
			max = train[i];
		}
	}
	printf("%d\n", max);
	
	return 0;
}
