#include <iostream>
using namespace std ;
int main () {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
   int arr[3][5];
   arr[1][3]=10;
   cout<<arr[1][5];
   return 0;
}