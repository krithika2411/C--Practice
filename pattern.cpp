#include <iostream>
using namespace std ;

// void print1(int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//            cout << " * ";
//         }
//         cout << endl;
//     }
    
// }

void print1(int n){
    for(int i=0;i<n;i++){
            for(int j=1;j<n-i;j++){
                cout<<" ";
            }
            for (int j=1;j<i*2;j++){
                cout<<"* ";
            } 
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for (int j=0;j<2*n-2*i-1;j++){
                cout<<"* ";
            }
             for(int j=0;j<i;j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }
    

int main () {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    // int t;
    // cin>>t;
    // for ( int i = 0; i<t; i++)
    // {
     int n;
     cin>>n;
     print1(n);
    // }
    
   
}