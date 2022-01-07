#include<iostream>
using namespace std;

int main(){
	int n,k=1;
	cin >> n;
	
	int a[n];
	
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	
	for(int i = 0; i < n; ++i){
		for(int j = 1; j <= n; ++j){
			if(a[j-1] == k){
				cout << j << " ";
				k++;
				break;
			}	
		}
	}
	
	return 0;
}
