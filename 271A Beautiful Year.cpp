#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	while(true){
		n++;
		int d = n % 10;
		int c = n/10 % 10;
		int b = n/100 % 10;
		int a = n/1000 % 10;
		
		if(a != b && a != c && a != d && b != c && b != d && c != d )
		break;
	}
	cout << n;
}
