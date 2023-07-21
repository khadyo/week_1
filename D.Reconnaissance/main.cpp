#include<iostream>
#include<algorithm>
using namespace std; 

int main(){
    
    int n,d,count=0; 
    cin>> n >> d; 
    int arr[n]={}; 

    for(int i=0; i<n; i++){
      cin>> arr[i]; 
    }
    sort(arr,arr+n); 
    for(int i=0; i<n-1;i++){
        for(int  j=1; j<n; j++){
            if(arr[j]-arr[i]<=d){
                count++; 
            }
        }
    }
    cout<<count*2; 
    return 0; 
}