#include <stdio.h>

int main(){
	int N, min=0,max=0, inp;
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		scanf("%d", &inp);
		if(min==0&&max==0){
			min = inp;
			max = inp;
		}
		else if(inp<min){
			min = inp;
		}
		else if(inp>max){
			max = inp;
		}
	}
	printf("%d %d\n",min,max);
}
