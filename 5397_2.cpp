#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
  int N; cin >> N;
  while(N--){
    stack <char> stk;
    stack <char> tmp;
    stack <char> rtn;
    string order;cin >> order;
    
    for(int i=0;i<order.size();i++){
      if(order[i]!='<'&&order[i]!='>'&&order[i]!='-'){
        stk.push(order[i]);
      }
      else if(order[i]=='<'){
        if(!stk.empty()){
          tmp.push(stk.top());
          stk.pop();
        }
      }
      else if(order[i]=='>'){
        if(!tmp.empty()){
          stk.push(tmp.top());
          tmp.pop();
        }
      }
      else if(order[i]=='-'){
        if(!stk.empty()){
          stk.pop();
        }
      }
    }
    while(!tmp.empty()){
      stk.push(tmp.top());
      tmp.pop();
    }
    int x = stk.size();
    for(int i=0;i<x;i++){
      rtn.push(stk.top());
      stk.pop();
    }
    for(int i=0;i<x;i++){
      cout << rtn.top();
      rtn.pop();
    }
    cout << '\n';
  }
}
