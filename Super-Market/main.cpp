#include<iostream>
#include <algorithm>
#include<vector>
using namespace std ; 
int main(){
     int n,k;
     double a,b; 
     double minimum=__DBL_MAX__;
     cin>> n >> k; 
    for(int i=0; i<n; i++){
        cin>> a >> b; 
        minimum=min(a/b,minimum);
        }
   printf("%.8lf\n",minimum*k);
    return 0; 
}