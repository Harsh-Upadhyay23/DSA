#include<iostream>
using namespace std;
int odd(int n){
    if(n%2!=0){
        return 1;
    }
    return 0;
}
int main(){
    int a,b;
    cout<<"Enter two number :";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(odd(i))
        cout<<i<<" ";
    }
    return 0;

}