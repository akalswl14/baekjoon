
#include <stdio.h>

int main(){
	int L = 0;
	int R = 0;
	int A = 0;
	int rtn = 0;
	scanf("%d %d %d",&L,&R,&A);
	while(A != 0 && ( L! = R || A! = 1)){
		if(L > R){
			R++;
			A--;
		}
		else if(L < R){
			L++;
			A--;
		}
		else{
			if(A >= 2){
				L++;
				R++;
				A -= 2;
			}
		}
	}
	if(L >= R){
		rtn = 2*R;
	}
	else{
		rtn = 2*L;
	}
	printf("%d\n", rtn);
}
