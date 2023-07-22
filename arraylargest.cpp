#include<bits/stdc++.h>
using namespace std;
 int sortarr(vector<int> &arr){
     sort(arr.begin(),arr.end());
     return arr[arr.size()-1];
 }

 
int main() {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr1.push_back(a);
        
    }
    //  sort(arr1.begin(),arr1.end());
    // for(int i=0; i<n; i++){
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<endl;
    cout<<"The Largest element in the array is: "<<sortarr(arr1);
 
   return 0;

}