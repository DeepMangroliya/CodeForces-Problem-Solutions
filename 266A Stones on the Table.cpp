#include<iostream>
using namespace std;

int main(){
	int n,count=0;
	cin>>n;
	
	string s;
	cin>>s;
	
	for(int i=1;i<n;i++){
//		char c1;
//		cin>>c1;
//		
//		if(c==c1) count++;
//		c=c1;
		if(s.at(i-1)==s.at(i)) count++;
	}
	
	cout<<count;
}
