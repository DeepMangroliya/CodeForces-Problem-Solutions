#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	
	int flag=-2;
	
	for(int i=0; i<s1.length(); i++){
		if(s1.at(i) < s2.at(i)) {
			flag = -1;
			break;
		}
			
		else if(s1.at(i) > s2.at(i)) {
			flag = 1;
			break;
		}
			
		else{
			flag = 0;
		}
	}
	
	if(flag == -1) cout<<"-1";
	if(flag == 1)  cout<<"1";
	if(flag == 0)  cout<<"0";
}
