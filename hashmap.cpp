#include <iostream>
#include <map>
using namespace std ;
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
        /// it can be mapped in the same for loop as well 
     }

     //precompute
       map<int ,int>mpp;
     for (int i = 0; i < n; i++)
     {
        mpp[arr[i]]++;
     }

     //iterate in map 
     for (auto it : mpp)
     {
        cout<<it.first<<"->"<<it.second<<endl;
     }
     
     

    int q;
    cin>>q;
    while (q--)
    {
    int number;
    cin>> number;
    cout<<mpp[number]<<endl;
    }
    
}