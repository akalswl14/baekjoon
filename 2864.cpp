#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

string A,B,minA,minB;
int maxsum = 0,minsum=0;

int main(){
	cin >> A >> B;
	minA = A;
	minB = B;
	replace(A.begin(),A.end(),'5','6');
	replace(minA.begin(),minA.end(),'6','5');
	replace(B.begin(),B.end(),'5','6');
	replace(minB.begin(),minB.end(),'6','5');
	maxsum = stoi(A)+stoi(B);
	minsum = stoi(minA)+stoi(minB);
	printf("%d %d\n",minsum,maxsum );
}
