#include<iostream>
using namespace std;

int main(){
	int n, anton = 0, danik = 0;
	string s;
	
	cin >> n >> s;
	
	for(int i = 0; i < s.length(); i++){
		if(s.at(i) == 'A') anton++;
		else danik++;
	}
	if(anton > danik) cout << "Anton";
	else if(anton < danik) cout << "Danik";
	else cout << "Friendship";
}
