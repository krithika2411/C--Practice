#include <iostream>
#include<bits/stdc++.h>
using namespace std ;

class fruit{
    public:
    string name;
    string color;
    int num;

};
int main () {
    
    fruit mango;
    mango.name="Mango";
    mango.color="yellow";
    cout<<mango.name<<"---"<<mango.color<<endl;


    fruit *apple= new fruit();
    apple->name="apple";
    apple->color="red";
    cout<<apple->name<<"----"<<apple->color<<endl;


    return 0;
 
}