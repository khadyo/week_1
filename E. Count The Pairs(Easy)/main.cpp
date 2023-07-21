#include <iostream>
#include <algorithm>
using namespace std ; 

int main(){
    int n,count=0,i=0,j=0; 
    cin>> n; 
    int array[n]={}; 

    for(int i=0; i<n; i++){
        cin>> array[i]; 
    }
    sort(array,array+n); 
    int min=array[0]; 
    int max=array[n-1]; 
    while(i<n-1){
       j=i+1;
      while(j<=n-1){
         if(array[i]+array[j]==min+max){
           count++;
        }
       j++;
    }
      i++;
    }
    
    cout<<count; 
    return 0; 
}