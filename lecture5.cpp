#include<iostream>
using namespace std;

int main(){
//     int a = 4;
//     int b = 6;

//     cout << (a&b) << endl;
//     cout << (a|b) << endl;
//     cout << (~a) << endl;
//     cout << (a^b) << endl;

//     cout << (17>>1) << endl; 
//     cout << (17<<1) << endl;

// for (int a = 0, b = 1; a>=0 && b>=1; a--,b-- ){
//     cout << a << " "<< b << endl;
// }
int n;
cout <<"Enter Number :";
cin >> n;
int a = 0,b = 1;

cout << a << " "<< b << " ";
for (int i = 0; i <= n ;i++){
    int next = a+b;
    cout << next <<" ";

    a = b;
    b = next;
}
bool isPrime = 1;

for (int i = 2; i < n;i++ ){
    if( n%i == 0 ){
        isPrime = 0;
        break;
    }
}
cout << endl;
if (isPrime == 0){
    cout << "Not Prime" << endl;
}
else{
    cout << "Prime" << endl;
}
int f;
cout << f;
}

//https://leetcode.com/problems/number-of-1-bits/submissions/
//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/869931932/