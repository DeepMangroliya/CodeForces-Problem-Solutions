#include<iostream>
using namespace std;
//
// int main(){
//     string s;
//     cin >> s;
//     int  flag = 0;
//     for(int i = 0; i < s.length(); i++){
//         int j = i + 6, count = 0 , count1 = 0;
//
//         while(j--){
//             if(s[i] == s[j]) count++;
//             if(count == count1)
//                 break;
//             count1 = count;
//         }
//         if(count == 7){
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 1) cout << "YES";
//     else cout << "NO";
// }

int main(){
    string s;
    cin >> s;
    string s1 = "1111111";
    string s2 = "0000000";
    if(s.find(s1) != -1 || s.find(s2) != -1) cout << "YES";
    else cout << "NO";
}
