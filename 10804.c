#include <stdio.h>

int main(){
	int arr[21];
	int tmp[21];
	int x,y;
	for(int i=1;i<=20;i++){
		arr[i]=i;
	}
	for(int i=0;i<10;i++){
		scanf("%d %d",&x,&y);
		for(int j=x;j<=y;j++){
			tmp[j]=arr[j];
		}
		for(int j=x;j<=y;j++){
			arr[j] = tmp[x+y-j];
		}
		for(int j=0;j<=21;j++){
			tmp[j] = 0;
		}
	}
	for(int i=1;i<=20;i++){
		printf("%d ",arr[i]);
	}
}
