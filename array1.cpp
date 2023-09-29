#include<bits/stdc++.h>
using namespace std;

long long int	 fibonacci(long long int	 N){
   
   // Base Condition.
   if(N <= 1)
   {
       return N;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   long long int	 last = fibonacci(N-1);
long long int	 slast = fibonacci(N-2);
   
   return last + slast;

}

int main(){
  
  // Here, let’s take the value of N to be 4.
 long long int	 N ;
  cin>>N;
  cout<<fibonacci(N)<<endl;
  return 0;

}
