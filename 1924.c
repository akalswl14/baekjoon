#include <stdio.h>

int main(){
  int date[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int m=0,d=0,cnt=0;
  scanf("%d %d",&m,&d );
  for(int i=1;i<m;i++){
    cnt+=date[i];
  }
  cnt+=d;
  int k=cnt%7;
  if(k==1){
    printf("MON");
  }
  else if(k==2){
    printf("TUE");
  }
  else if(k==3){
    printf("WED");
  }
  else if(k==4){
    printf("THU");
  }
  else if(k==5){
    printf("FRI");
  }
  else if(k==6){
    printf("SAT");
  }
  else if(k==0){
    printf("SUN");
  }

}
