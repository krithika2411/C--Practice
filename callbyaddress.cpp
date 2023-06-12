#include <iostream>
using namespace std ;
void doSomething(int &num){
        cout <<num<<endl;
        num+=1;
        cout <<num<<endl;
    }
int main () {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int num=10;
    doSomething(num);
    cout<<num<<endl;

 return 0;
}

