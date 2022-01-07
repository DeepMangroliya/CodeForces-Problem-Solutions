#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	while(t != 0){
		for(int i=1; i<n; i++){
			if(s.at(i-1) == 'B' && s.at(i) == 'G') {
				char temp = s.at(i-1);
				s.at(i-1) = s.at(i);
				s.at(i) = temp;
				i++;
			}
		}
		t--;
	}
	
	
	cout << s;
}

