#include <iostream>
#include <string>
#include <stack>

using namespace  std;
int main(int argc, char const *argv[])
{
	stack<int> s;
	int pipe = 0, rtn=0;
	string arr;
	cin >> arr;
	for(int i=0;i<arr.size(); i++){
		if(arr[i]=='('){
			s.push(i);
		}
		else{
			if(arr[i-1]=='('){//s.top()+1 == i
				s.pop();
				rtn+=s.size();
			}
			else{
				s.pop();
				rtn++;
			}
		}
		// printf("At %d, pipe: %d & rtn: %d\n", i, pipe, rtn );
	}
	// printf("%d\n", rtn);
	cout << rtn << endl;
	return 0;
}