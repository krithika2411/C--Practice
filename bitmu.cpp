#include <iostream>
using namespace std ;

int getBit(int n, int pos){
    return((n&(1<<pos))!=0);
}


int setBit(int n, int pos){
    return(n|(1<<pos));
}
int clearBit(int n, int pos){
     int mask = ~(1<<pos);
     return ( n & mask);
}
int updateBit (int n, int pos, int value){
  int mask =~(1<<pos);
  n=n&mask;
  return (n | (value << pos));
}

int main () {
    // #ifndef ONLINE_JUDGE 
    //     freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    // #endif
    // cout<<getBit(5,2)<<endl;
    // cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1, 1)<<endl;
    return 0;
}