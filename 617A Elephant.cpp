#include<iostream>
using namespace std;

int main(){
	int x, count=0;
	cin >> x;
	
	while (x != 0){
		if (x >= 5){
			x -= 5;
			count++;
		} 
		else if (x >= 4){
			x -= 4;
			count++;
		} 
		else if (x >= 3){
			x -= 3;
			count++;
		} 
		else if (x >= 2){
			x -= 2;
			count++;
		} 
		else if (x >= 1){
			x -= 1;
			count++;
		} 
	}
	
	cout<<count;
}

// 			if (d<5)
//            System.out.println(1);
//        else if (d%5==0)
//            System.out.println(d/5);
//        else
//            System.out.println((d/5)+1);
