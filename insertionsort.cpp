#include <iostream>
using namespace std ;
void insertionsort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main () {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++) {
    cin>>arr[i];
   }
  insertionsort(arr,n);
    for(int i=0; i<n; i++) {
    cout<<arr[i]<<" ";
   }
   cout<<"\n";
   return 0;
}