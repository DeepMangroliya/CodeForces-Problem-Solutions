#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int a, b;
		int count = 0;
		cin >> a >> b;
		
		if(a % b == 0) cout << "0\n";
		else cout << b - a % b << "\n";  
		
		cout << count << endl;
	}
}
