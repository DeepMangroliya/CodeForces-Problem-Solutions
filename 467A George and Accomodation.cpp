#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, room = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int p, q;
		cin >> p >> q;
		if(abs(p - q) == 1) continue;
		if(p < q) room++;
	}
	
	cout << room;
	return 0;
}
