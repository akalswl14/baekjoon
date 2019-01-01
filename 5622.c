#include <stdio.h>
#include <string.h>

int main(){
  char alp[16]={};
  int cnt=0;
  scanf("%s",alp);
  for(int i=0;i<strlen(alp);i++){
    if(alp[i]=='A'||alp[i]=='B'||alp[i]=='C'){
      cnt+=3;
    }
    else if(alp[i]=='D'||alp[i]=='E'||alp[i]=='F'){
      cnt+=4;
    }
    else if(alp[i]=='G'||alp[i]=='H'||alp[i]=='I'){
      cnt+=5;
    }
    else if(alp[i]=='J'||alp[i]=='K'||alp[i]=='L'){
      cnt+=6;
    }
    else if(alp[i]=='M'||alp[i]=='N'||alp[i]=='O'){
      cnt+=7;
    }
    else if(alp[i]=='P'||alp[i]=='Q'||alp[i]=='R'||alp[i]=='S'){
      cnt+=8;
    }
    else if(alp[i]=='T'||alp[i]=='U'||alp[i]=='V'){
      cnt+=9;
    }
    else if(alp[i]=='W'||alp[i]=='X'||alp[i]=='Y'||alp[i]=='Z'){
      cnt+=10;
    }
  }
printf("%d\n",cnt);
}
