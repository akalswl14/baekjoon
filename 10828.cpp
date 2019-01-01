#include <stdio.h>
#include <stack>//stack header를 쓴다.

using namespace std;//이름을 짧게 부르기 위해

int main(){
  stack<int> s;//<>안에 자료형을 쓴다. s라는 이름으로 지음.
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    char order[8]={};//명령을 문자열로 입력받음.
    scanf("%s",order);
    if(order[0]=='p'&&order[1]=='u'){
      //push
      int x;
      scanf("%d",&x);
      s.push(x);//.은 앞에 있는 스택에 어떤 작업을 하겠다.
    }
    else if(order[0]=='p'&&order[1]=='o'){
      //pop
      if(s.empty()){
        printf("-1\n");
      }
      else{
        printf("%d\n",s.top());
        s.pop();
      }

    }
    else if(order[0]=='s'){
      //size
      printf("%lu\n",s.size());//%d여도 됨.
    }
    else if(order[0]=='e'){
      //empty
      if(s.empty()){
        printf("1\n");
      }
      else{
        printf("0\n");
      }
    }
    else if(order[0]=='t'){
      if(s.empty()){
        printf("-1\n");
      }
      else{
        printf("%d\n",s.top());
      }
    }
  }

}
