#include<iostream>
using namespace std;

int main(){
	
	int n, flag=0;
	cin >> n;
	
	for(int i = 1; i <= n; ++i){
		int n1;
		cin >> n1;
		
		if(n1 == 1){
			cout << "HARD";
			exit(0);
		}
	}
	
	cout << "EASY";
	
	return 0;
}
