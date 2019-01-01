#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int main(){
  int N, sum = 0, a;
  scanf("%d", &N);
  vector<pair<int,pair<int, string> > > v;
  for(int i = 0; i < N; i ++){
    sum = 0;
    string num;
    cin >> num;
    a = num.size();
    for(int j = 0 ; j < a; j ++){
      if(num[j] >= '1' && num[j] <= '9'){
        sum += num[j]-'0';
      }
    }
    v.push_back(make_pair(a, make_pair(sum, num)));
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < N; i ++){
    cout << v[i].second.second;
    printf("\n");
  }
}