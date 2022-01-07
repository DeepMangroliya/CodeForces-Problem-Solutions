#include<iostream>
using namespace std;

int main(){
	int n,k,count=0;
	cin>>n>>k;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		int num;
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		int z=arr[k-1];
		if(arr[i]>=z && arr[i]>0) count++;
		else break;
	}
	
	cout<<count;
}
