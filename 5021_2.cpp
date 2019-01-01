#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
	int t;
	cin >> t;
	for(int i =0;i<t;i++){
		bool rtn = true;
		vector <string>  v;
		int n; cin >> n;
		for(int j=0;j<n;j++){
			string num;
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(),v.end());
		for(int j=0;j<n-1;j++){
			string x = v[j];
			string y = v[j+1];
			if(x == y.substr(0,x.size())){
				rtn = false;
				break;
			}
		}

		if(rtn == true){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}