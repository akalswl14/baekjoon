#include<stdio.h>
int cnt, n;
int main() {
	while (scanf("%d", &n) != EOF) {
		if (n > 0) cnt++;
	}
	printf("%d", cnt);
}