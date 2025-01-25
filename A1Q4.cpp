#include<iostream>
using namespace std;
int count(int n){
    int c=0;
    for(int i=1;n!=0;i++){
        n=n/10;
        c++;
    }
    return c;
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<count(n)<<" "<<count(n)*count(n);
}