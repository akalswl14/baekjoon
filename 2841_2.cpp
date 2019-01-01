#include <stdio.h>
#include <stack>
 
using namespace std;
 
int n, m, x, y, ans;
stack<int> s[7];
 
int main() {
  scanf("%d%d", &n, &m);
  while (n--) {
    scanf("%d%d", &x, &y);
    while (!s[x].empty() && s[x].top() > y) {
      ++ans;
      s[x].pop();
    }
    if (s[x].empty() || s[x].top() != y) {
      s[x].push(y);
      ++ans;
    }
  }
  printf("%d\n", ans);
}
