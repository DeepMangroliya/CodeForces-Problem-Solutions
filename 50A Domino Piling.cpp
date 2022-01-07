#include<iostream>
using namespace std;

int main(){
	int M, N, dominos=0;
	cin >> M >> N;
	
	int total = M * N;
	
	while(total>0){
		if(total%2==1){
			total--;
		}
		else{
			total-=2;
			dominos++;
		}
	}
	
	cout<<dominos;
}
