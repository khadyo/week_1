#include<iostream>
#include<algorithm>
using namespace std ; 

int main (){

  int a,b,c,m=0;
  cin>> a >> b >> c; 
  int arr[3]={a,b,c}; 
  sort(arr,arr+3);
  while(arr[0]+arr[1]<=arr[2]){
    if(arr[0]<arr[1]){
        arr[0]++;
        m++;
    }
    else{
        arr[1]++;
        m++;
    }
  }
  cout<< m; 
  return 0; 
}
// accepted this solution with 15ms 