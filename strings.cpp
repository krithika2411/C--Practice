#include <iostream>
using namespace std ;
int main () {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    string s= "krithika";
    int len= s.size();
    cout<<s[0]<<"\n";
    cout<<len;
 return 0;
}