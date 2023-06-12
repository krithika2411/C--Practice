#include <bits/stdc++.h>
using namespace std ;
// print two nums and sum
int sum(int num1, int num2){
    int num3= num1+num2;
    cout<<num3;
    // return num3;
}
int main () {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int num1, num2;
    cin>>num1>>num2;
    sum(num1,num2);
    // int res = sum(num1,num2);
    // cout<< res;
   
 return 0;
}