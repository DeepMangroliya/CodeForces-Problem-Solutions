#include<iostream>
using namespace std;

int main(){
	long long n,count = 0;
	cin >> n;
	
	while(n != 0){
		int last = n % 10;
		if(last == 4 || last == 7){
			count++;
		} 
		n /= 10;
	}
	if(count == 4 || count ==7) cout << "YES";
	else cout << "NO";
}
