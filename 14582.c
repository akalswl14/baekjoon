#include <stdio.h>

int U[9],S[9],win=0,sumU=0,sumS=0;

int main(){
	for(int i=0;i<9;i++){
		scanf("%d",&U[i]);
	}
	for(int i=0;i<9;i++){
		scanf("%d",&S[i]);
	}
	for(int i=0;i<9;i++){
		sumU += U[i];
		if(sumU>sumS){
			win=1;
		}
		sumS += S[i];
	}
	if(win==1){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
}
