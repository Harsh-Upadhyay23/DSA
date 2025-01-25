#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,1,1,9,1,1},max2,max=INT8_MIN;
    
    for(int i=0;i<6;i++){
        
        if(max<arr[i]){
            max2=max;
            max=arr[i];
        }
        if(max2<arr[i]&&arr[i]!=max){
            max2=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<max2;
}