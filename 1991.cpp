#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

vector < vector <int> > tree(28);

void preorder(int root){
	printf("%c", root + 'A');
	if(tree[root][0] != '.' - 'A'){
		preorder(tree[root][0]);
	}
	if(tree[root][1] != '.' - 'A'){
		preorder(tree[root][1]);
	}
}

void inorder(int root){
	if(tree[root][0] != '.' - 'A'){
		inorder(tree[root][0]);
	}
	printf("%c", root + 'A');
	if(tree[root][1] != '.' - 'A'){
		inorder(tree[root][1]);
	}
}

void postorder(int root){
	if(tree[root][0] != '.' - 'A'){
		postorder(tree[root][0]);
	}
	if(tree[root][1] != '.' - 'A'){
		postorder(tree[root][1]);
	}
	printf("%c", root + 'A');
}



int main(){
    int N; scanf("%d", &N);
    for (int i = 0; i < N; ++i){
    	char parent, left, right;
    	cin >> parent >> left >> right;
	    tree[parent-'A'].push_back(left-'A');
	    tree[parent-'A'].push_back(right-'A');
	}
	preorder(0);
	printf("\n");
	inorder(0);
	printf("\n");
	postorder(0);
	printf("\n");
}