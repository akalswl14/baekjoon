#include <stdio.h>

int gcd (int n1, int n2){
	if (n2%n1 == 0 ) {
		return n1;
	}
		else  gcd(n2%n1, n1);
	}

int main (void) {
	int as, am;
	int bs, bm;
	int gcd_n;
	int rs, rm;
	
	scanf ("%d %d", &as, &am);
	scanf ("%d %d", &bs, &bm);
	
	gcd_n =  gcd (am, bm);
	
	rm = am*bm / gcd_n;
	rs = rm/am*as +  rm/bm*bs;
	
	gcd_n = gcd (rm, rs);
	
	printf ("%d %d\n", rs/gcd_n , rm/gcd_n );
	
	return 0;
}
