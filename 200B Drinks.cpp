#include<iostream>
using namespace std;

int main(){
	int n;
	double sum = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int orange;
		cin >> orange;
		
		sum  += orange/100.0;
	}
	
	printf("%0.12f", sum/n*100);
}
