#include<iostream>
using namespace std;

int main(){
	int n, k, count = 0 ,i = 1; 
	cin >> n >> k;
	
	int total = 240, time = k;
	
	while(time < total && n > count){
		time += 5 * i; 
		count++;
		i++;
		if(time > total){
			count--;
		}
	}
	cout << count;
}
//
//#include<iostream>
//using namespace std;
//
//int main(){
//	int k, n;
//	cin >> n >> k;
//	
//	int time = k, i;
//	
//	for( i = 1; i <= n; i++){
//		time += 5 * i;
//		if(time > 240) break;
//	}
//	
//	cout << i - 1;
//} 
