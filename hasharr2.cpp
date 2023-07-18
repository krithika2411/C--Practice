#include <iostream>
using namespace std ;
int main () {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    string s;
    cin>>s;
   int hash[26]={0};
   for(int i=0; i<s.size(); i++){
      hash[s[i]-'a']++; //indexing
   }
    int q;
    cin>>q;
    while (q--)
    {
       char c;
       cin>>c;
       //fetch 
      cout<< hash[c-'a']<<endl;
    }
    
 
}