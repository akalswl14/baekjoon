#include <stdio.h>

int main(){
	int alphabet[27]={0,};//a = 97
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		char s[30];
		scanf("%s",s);
		char first = s[0];
		alphabet[first-97]++;
	}
	int cnt = 0;
	for(int i=0;i<26;i++){
		if(alphabet[i]>=5){
			printf("%c",i+97);
			cnt ++;
		}
	}
	if(cnt == 0){
		printf("PREDAJA\n");
	}
}
