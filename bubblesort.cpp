#include <iostream>
using namespace std ;
void bubbleSorted(int arr[], int n){
      for (int i = 0; i < n - 1; i++)
  {
    int issort=0;
    for (int j = 0; j < n - i-1; j++)
    {
            if(arr[j]>arr[j+1])
            {
                
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issort=1;
            }

        }
        if (issort == 0) {
            break;
        }
    }
//     for(int i=0; i<n; i++) {
//     cout<<arr[i]<<" ";
//    }
//    cout<<"\n";
}
int main () {
    // #ifndef ONLINE_JUDGE 
    //     freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    // #endif
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++) {
    cin>>arr[i];
   }
   bubbleSorted(arr,n);
    for(int i=0; i<n; i++) {
    cout<<arr[i]<<" ";
   }
   cout<<"\n";
   return 0;
}