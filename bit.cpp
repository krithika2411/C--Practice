// find unique number from the given array 

#include <iostream>
using namespace std ;
int uniquenum(int arr[], int n ){
 int xornum=0;
 for( int i=0; i<n; i++ ){
 xornum= xornum^arr[i];
 }
 return (xornum);

}
int main () {
    // #ifndef ONLINE_JUDGE 
    //     freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    //  #endif
     int arr[]={1,2,3,4,1,2,3};
     cout<<uniquenum(arr, 8);
     
     return 0;
}

