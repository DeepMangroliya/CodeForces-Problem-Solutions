#include<iostream>
#include<limits>
using namespace std;

int main(){
	int x[4], inmax = 0;
	
	cin >> x[0];
	int max = x[0];
	
	for(int i = 1; i < 4; i++){
		cin >> x[i];
		if(max <= x[i]){
			max = x[i];
			inmax = i;
		} 
	}
	
	for(int i = 0; i < 4; i++){
		if(i == inmax) continue;
		else{
			cout << max - x[i] << " ";
		}
	}
}
