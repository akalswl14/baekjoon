#include <stdio.h>
#include <stack>
#include <string.h>

using namespace std;

int main(){
	char stk[100001]="";
	stack <char> left;
	stack <char> right;
	int n;
	scanf("%s\n",stk);
	for(int i=0;i<strlen(stk);i++){
		left.push(stk[i]);
	}
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		char arr;
		scanf("%c",arr);
		if(arr=='P'){
			scanf("%c",arr);
			left.push(arr);
		}
		else if(arr=='L'&&!left.empty()){
			right.push(left.top());
			left.pop();
		}
		else if(arr=='R'&&!right.empty()){
			left.push(right.top());
			right.pop();
		}
		else{
			if(!left.empty()){//D일때
				left.pop();
			}
		}
		printf("%d\n",i);
	}
	while(!left.empty()){
		right.push(left.top());
		left.pop();
	}
	while(!right.empty()){
		printf("%c", right.top());
		right.pop();
	}
	printf("\n");
	return 0;
}