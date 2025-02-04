#include<iostream>
using namespace std;
int findduplicate(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
     int expectedSum = (n * (n - 1)) / 2;
    return sum-expectedSum;
}
int main(){
    int arr[]={1,2,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<findduplicate(arr,n);
    return 0;
    
}