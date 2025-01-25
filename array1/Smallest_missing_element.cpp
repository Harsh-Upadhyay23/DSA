#include<iostream>
using namespace std;
int main(){
    int arr[5],n=0;
    cout<<"Enter the element of array :";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int x=1;
    for(int i=0;i<5;i++){
        if(arr[i]<=0){
            continue;
        }
       if(arr[i]!=x){
      
        cout<<x<<" is missing";
        break;
       }
         x++;
        
    }
}