// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.
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
    int odd=0,even=0;
     for (int i = 0; i < v.size(); i++)
    {
        if(i%2==0){
            even=even+v[i];
        }else{
            odd=odd+v[i];
        }
    }
    int difference=even-odd;
    int sum=even+odd;
    cout<<"difference = "<<difference<<endl<<" sum = "<<sum;

}