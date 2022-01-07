#include<iostream>
using namespace std;

int main(){
	int lim,bob,year=0;
	cin>>lim>>bob;
	
	while(lim<=bob){
		lim *= 3;
		bob *= 2;
		year++;
	} 
	
	cout<<year;
}
