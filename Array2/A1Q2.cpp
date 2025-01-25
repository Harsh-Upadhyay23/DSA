// WAP to find the largest three elements in the array.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "Enter the size of array : ";
    int size;
    cin >> size;
    vector<int> v(size);
    cout << "Enter the elements of array : ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int first=v[0],second=v[0],third=v[0];
    for(int i=0;i<v.size();i++){
       if(first<v[i]){
        third=second;
        second=first;
        first=v[i];
       }
       if(second<v[i] && v[i]!=first){
        second=v[i];
       }
        if(third<v[i] && v[i]!=first && v[i]!=second){
        third=v[i];
       }

    }
    cout<<"first is :"<<first<<endl<<"second Is : "<<second<<endl<<"Third is : "<<third;
}