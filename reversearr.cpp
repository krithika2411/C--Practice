#include <iostream>
using namespace std ;
void func(int i, int arr[], int n)
{
    if(i<=n/2) return;
    swap(arr[i],arr[n-i-1]);
    func(i+1);
}
int main () {
    // #ifndef ONLINE_JUDGE 
    //     freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    // #endif
    int n;
    cin<<n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin<<arr[i];
    }
    func(0);
      for(int i=0; i<n; i++){
        cout>>arr[i];
    }
    return 0;
 
}