#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
    int l;
    int b;

    Rectangle () {
        int l=0;
        int b=0;

    } // default constructor


    Rectangle (int x, int y) {
         l=x;
        b=y;
    }

       Rectangle (Rectangle &r) {
         l=r.l;
        b=r.b;
    }
};
int main(){

   Rectangle r1;
   cout<<r1.l<<" "<<r1.b<<endl;

   Rectangle r2(6,5);
   cout<<r2.l<<" "<<r2.b<<endl;
   Rectangle r3= r2;cout<<r3.l<<endl;
    return 0;
    
}