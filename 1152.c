#include <stdio.h>
#include <string.h>

int main(){
  char A[1000001];
  gets(A);
  int len;
  len = strlen(A);
  int ct =0;
  for(int i=0; i<len;i++){
    if(i!=0){
      if(A[i] == ' '){
        ct += 1; 
      }
    }
    if(i==len-1){
      if(A[i]!=' '){
        ct += 1;

      }
    }
  }
  printf("%d\n",ct);
}