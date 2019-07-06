#include <stdio.h>

int main(){
	int L,rtn;
	scanf("%d",&L);
	rtn = L/5;
	if(L%5>0){
		rtn++;
	}
	printf("%d\n", rtn);
	return 0;
}
