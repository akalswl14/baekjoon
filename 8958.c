#include<stdio.h>
#include<string.h>

int n,d;


int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    char word[80] = {};
    scanf("%s",word);
    d = strlen(word);
    int cnt=0, score=0;
    for(int j= 0;j<d;j++){
      if(word[j]=='O'){
        cnt++;
        score+=cnt;
      }
      else{
        cnt=0;
      }
    }
    printf("%d\n",score );
  }
}
