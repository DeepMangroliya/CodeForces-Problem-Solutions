#include<iostream>
using namespace std;

int main(){
	int n, sum = 0;
	cin >> n;
	
	string a[5] = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron"};
	
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		for(int j = 0; j < 5; j++){
			if(!s.compare(a[j])){
				if(j == 0) sum += 4;
				if(j == 1) sum += 6;
				if(j == 2) sum += 8;
				if(j == 3) sum += 12;
				if(j == 4) sum += 20;
			} 
		}
		
	}
	
	cout << sum;
}
