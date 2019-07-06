#include <stdio.h>

int main(){
	int rtn;
	double A,B,C,rtn1,rtn2;
	scanf("%lf %lf %lf",&A,&B,&C);
	rtn1 = B/C*A;
	rtn2 = A/B*C;
	if(rtn1>rtn2){
		rtn = (int) rtn1;
	}else{
		rtn = (int) rtn2;
	}
	printf("%d\n", rtn);
	return 0;
}
