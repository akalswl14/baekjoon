#include <iostream>
#include <utility> // for pair
#include <string>
#include <vector>
#include <algorithm> // for sort

using namespace std;

int main(){
   int n, age;
  scanf("%d",&n);
   string name;
   vector <pair<pair<int,int>,string> > v;
   for(int i=0;i<n;i++){
      cin >> age >> name;
      v.push_back(make_pair(make_pair(age,i),name));
   }
   sort(v.begin(),v.end());
   for(int i =0; i<n;i++){
    cout << v[i].first.first << " " << v[i].second << "\n";
  }
}