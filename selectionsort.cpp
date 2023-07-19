#include<bits/stdc++.h>
using namespace std ;
void selectionSort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int mini=i;
        for (int j = i; j <= n-1; j++)
        {
            if (arr[j]<arr[mini])
            {
                mini=j;
            }
            
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
        
}
// cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main () {
    // #ifndef ONLINE_JUDGE 
    //     freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    // #endif
    int n;
    cin>>n;
    int arr[n];
      
      // cout << "Before selection sort: " << "\n";
      for ( int i = 0; i < n; i++)
      {
         cin>>arr[i];
      }
     
      selectionSort(arr, n);
      //     for ( int i = 0; i < n; i++)
      // {
      //    cout<<arr[i]<<" ";
      // }
      // cout<<"\n";
      return 0;
 
}