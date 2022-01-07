#include<iostream>
using namespace std;

int main(){
	int n, n1, n2;
	cin >> n >> n1;
	int group = n;
	
	for(int i=1; i<n; ++i){
		cin >> n2;
		if(n1 == n2)
			group--; 
		n1 = n2;
	}
	
	cout << group;
}
