#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, capacity = 0, max = INT_MIN;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		int a, b;
		cin >> a >> b;
		
		if(i != n){
			capacity += b;
			capacity -= a;
			if(max < capacity) max = capacity;
		}
		else{
			capacity -= a;
		}
	}
	
	cout<<max;
}
