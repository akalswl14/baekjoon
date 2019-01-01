
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int N = 0;
	scanf("%d",&N);
	for(int i = 0;i < N;i++){
		char car[4] = {};
		int num = 0;
		int rtn = 0;
		for(int j = 0;j < 3;j++){
			scanf(" %c",&car[j]);
			rtn += (car[j] - 65) * pow( 26 , 2-j );
				// rtn-=(car[j]-48);
		}
		scanf(" %d",&num);
		rtn = abs(rtn+num);
		if(rtn <= 100){
			printf("nice\n",rtn);
		}
		else{
			printf("not nice\n",rtn);
		}

	}
}
