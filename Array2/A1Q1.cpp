// Count the number of elements strictly greater than x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(5);
    cout<<"Enter the elements of array : ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter the number :";
    int x;
    cin>>x;
    cout<<"The elements which are greater tha "<<x<< " : ";
      for(int i=0;i<v.size();i++){
        if(v[i]>x){
            cout<<v[i]<<" ";
        }
        
    }
}