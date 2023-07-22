#include <iostream>
using namespace std ;
bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

int main () {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<=n; i++) {
        cin>>arr[i];
    }
 

  printf("%s", isSorted(arr, n) ? "True" : "False");
}