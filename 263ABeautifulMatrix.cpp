#include<iostream>
using namespace std;

int main(){
  int s[5][5], ini = 0, inj = 0, count1 = 0, count2 = 0;
  for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
          cin >> s[i][j];
          if(s[i][j] == 1){
            ini = i; inj = j;
          }
      }
  }

  while(ini!=2){
  	if(ini<2)
     ini--;
    else
     ini++;
    count1++;
    cout << "ha";
  }
   while(inj!=2){
   	if(inj<2)
     inj--;
    else
     inj++;
     count2++;
   }
   
   cout << count1 << endl;
   cout << count2 << endl;

   cout << count1 + count2;
}

