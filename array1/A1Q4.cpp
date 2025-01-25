#include<iostream>
using namespace std;
int main(){
    int arr[5],n=0;
    cout<<"Enter the element of array :";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                n=1;
                
            }
        }
    }
    if(n){
        cout<<"Duplicate element ";
    }else{
        cout<<"No duplicate element";
    }
}