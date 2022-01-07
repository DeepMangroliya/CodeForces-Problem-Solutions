#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		long n, count = 0;
		cin >> n;
		
		if(n == 1 || n == 2) cout << "0\n";
		else cout << (n - 1) /2 << "\n";
	}
}
