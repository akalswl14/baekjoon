
#include <stdio.h>

int main(){
	int N=0;
	int paper[101][101]={0,};
	int row = 0;
	int col = 0;
	int rtn = 0;
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		scanf(" %d %d", &row,&col);
		for(int j=row;j<row+10;j++){
			for(int k=col;k<col+10;k++){
				paper[j][k]=1;
			}
		}
	}
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			if(paper[i][j]==1){
				rtn++;
			}
		}
	}
	printf("%d\n",rtn);
}
