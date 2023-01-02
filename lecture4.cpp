#include <iostream>
using namespace std;

int main() {

  int i = 1;
  int n;
  cin >> n;

  while(i <= n){
    int j = 1;
    while(j <= i){
      cout << i-j+1 << " ";
      j++;
    }
    cout << endl;
    i++;
  }
  // int count = 1;
  // while(i <= n){
  //   int j = 1;
  //   while(j <= i){
  //     cout << count << " ";
  //     count++;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }
  // while(i <= n){
  //   int j = i;
   
  //   while(j < 2*i){
  //     cout << j << " ";
    
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }
}