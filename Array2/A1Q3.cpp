// Check if the given array is sorted or not
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
    int flag=1;
    for(int i=0,j=1;j<v.size();i++,j++){
        if(v[i]>=v[j]){
            flag=0;
        }
    }
    if(flag){
      cout<<"Array is shorted";
    }else{
        cout<<"Array is unshorted";
    }
}