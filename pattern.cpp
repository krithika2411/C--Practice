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
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
           cout << i<<" ";
        }
        cout << endl;
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