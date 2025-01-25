// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
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
    display(v);
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            v[i] = 10 + v[i];
        }
        else
        {
           
             v[i] = 2 * v[i];
        }
    }
    display(v);
}