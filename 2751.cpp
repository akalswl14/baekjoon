#include <stdio.h>
#include <algorithm>

using namespace std;
int main(){
   int n,a;
   scanf("%d",&n);
   int arr[n] = {};
   for(int i=0;i<n;i++){
      scanf("%d",&a);
      arr[i] = a;
   }
   sort(arr,arr+n);
   for(int i=0;i<n;i++){
      printf("%d\n",arr[i]);
   }

}