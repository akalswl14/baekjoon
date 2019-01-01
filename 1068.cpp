#include <iostream>
#include <vector>

using namespace std;

int root, rem, cnt;

vector < vector <int> > tree(52);

void order(int root){
	if(root == rem){
		return;
	}
	if(tree[root].size() == 0){
		cnt++;
	}
	if(tree[root].size() == 1 && tree[root][0] == rem){
		cnt++;
	}
	else{
		for (int i = 0; i < tree[root].size(); ++i)
		{
			order(tree[root][i]);
		}
	}
}

int main(){
	int N; cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int tmp; cin >> tmp;
		if(tmp == -1) {
			root = i;
		}
		else {
			tree[tmp].push_back(i);
		}
	}
	cin >> rem;
	order(root);
	printf("%d\n", cnt);
}