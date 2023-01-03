#include<bits/stdc++.h>
using namespace std;

int main(){
     
    //   int n;
    //   cin >> n;
      
    //   float ans = 0;
    //   int i = 0;
    //   while(n != 0){               //decimal to binary

    //     int digit = n & 1;
    //     ans = (digit * pow(10,i)) + ans;

    //     n = n >> 1;
    //     i++;

    //   } 
      
    // cout << ans << endl;

      int n;
      cin >> n;
      
      float ans = 0;
      int i = 0;
      while(n != 0){               //binary to decimal

        int digit = n % 10;
        if (digit == 1){
            ans = pow(2,i) + ans;

        }
        
        n = n / 10;
        i++;

      } 
      
    cout << ans << endl;
}