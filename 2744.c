#include <stdio.h>
#include <string.h>

int main(){
  char A[101];
  scanf("%s",A);
  int len;
  len = strlen(A);
  for(int i=0; i<len;i++){
    if(A[i]>='A'&&A[i]<='Z'){
      A[i] += 'a'-'A';
    }
    else{
      A[i] -= 'a'-'A';
    }
  }
  printf("%s",A);
}
