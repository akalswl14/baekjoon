#include <iostream>
#include <string>

using namespace std;

int main(){
	int N;
	string word;
	cin >> N;
	for(int i =0;i<N;i++){
		cin >> word;
		cout << word[0] << word[word.size()-1] << '\n';
	}
}