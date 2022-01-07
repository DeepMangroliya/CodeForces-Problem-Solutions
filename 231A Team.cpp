#include<iostream>
using namespace std;

int main(){
	int n,num,count1=0,sure=0;
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
				cin>>num;
				if(num==1) count1++;
				else continue;
		}
		if(count1>=2) sure++;
		count1=0;
	}
	
	cout<<sure;
	
	return 0;
}
