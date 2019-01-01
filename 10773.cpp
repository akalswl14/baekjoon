#include <stdio.h>
#include <stack>

using namespace std;

int main(){
	stack<int> s;
	int k;
	int x;
	int sum=0;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&x);
		if(x==0){
				s.pop();//만약 empty일경우 따로 처리해야하는가?
		}
		else{
			s.push(x);
		}
	}
	while(!s.empty()){
		sum += s.top();
		s.pop();
	}
	printf("%d\n",sum);
}