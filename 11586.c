
#include <stdio.h>

int main(){
	//숫자 커질수록 화남 123
	//1 그대로 2 좌우 반전 3 상하 반전
	int N;
	char face[100][100]={};
	int k;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",face[i]);
	}
	scanf("%d",&k);
	if(k==1){
		for(int i=0;i<N;i++){
			printf("%s\n", face[i]);
		}
	}
	else if(k==2){
		for(int i=0;i<N;i++){
			for(int j=N-1;j>=0;j--){
				printf("%c",face[i][j]);
			}
			printf("\n");
		}
	}
	else if(k==3){
		for(int i=N-1;i>=0;i--){
			printf("%s\n",face[i] );
		}
	}

}