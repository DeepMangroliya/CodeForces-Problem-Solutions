//#include<iostream>
//using namespace std;
//
//int main(){
//	string s1, s2;
//	cin >> s1 >> s2;
//	
//	for(int i =0; i<s1.length(); i++){
//		if(s1.at(i) != s2.at(i)) s1.at(i) = '1';
//		else s1.at(i) = '0';
//	}
//	cout << s1;
//	return 0;
//}

#include<iostream>
using namespace std;

int main(){
	int n1, n2, count = 0;
	cin >> n1 >> n2;
	
	int num = n1;
	
	while(num != 0){
		num/=10;
		count++;
	}
	
	int a[count] = {};
	
	for(int i = count-1; i >= 0; i--){
		
		int last1 = n1 % 10;
		int last2 = n2 % 10;
		if(last1 != last2) a[i] = 1;
		else a[i] = 0; 
		n1 /= 10;
		n2 /= 10;
	}
	
	for(int i = 0; i < count; i++){
		cout << a[i];
	}
}
