#include<iostream>
using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	int flag = 0 ;
	
	for(int i = 0; i < s.length(); i++){
		if(s.at(i) == t.at( t.length() - 1 - i)) continue;
		else{
			flag=1;
			break;
		}
	}
	if(flag == 1) cout << "NO";
	else cout << "YES";
}
