#include <iostream>
using namespace std ;
int main () {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
   int day;
   cin>>day;
   switch (day)
   {
   case 1:
    cout<<"Monday";
    break;
   
   case 2:
    cout<<"Tuesday";
    break;
   
   case 3:
    cout<<"Wednesday";
    break;
   
   case 4:
    cout<<"Thursday";
    break;
   
   case 5:
    cout<<"Friday";
    break;
   
   case 6:
    cout<<"Sat";
    break;
   
   case 7:
    cout<<"Sun";
    break;
   
   default:
   cout<<"Invalid";
    break;
   }
   return 0;
}