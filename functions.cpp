#include <iostream>
using namespace std ;
//Function are set of code which performssomething for you
// function are used to modularise code which
// it is used to increase readability
// function are used to use same code multiple times
 void printname(string name){
     cout<<"hey "<<name<<endl ;  
    } 
int main () {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    // void --> doesnot return anything 
   string name ;
   cin>>name;
   printname(name);
   string name1 ;
   cin>>name1;
   printname(name1);
 return 0;
}