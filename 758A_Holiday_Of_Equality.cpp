#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int max = a[n - 1];
    for(int i = 0; i < n - 1; i++){
        sum += max - a[i];
    }
    cout << sum;
}
