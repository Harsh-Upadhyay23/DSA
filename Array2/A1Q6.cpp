// Find the unique number in a given Array where all the elements are being repeated twice with one 
// value being unique.
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
    for(int i=0,;i<v.size();i++){
        int y=0;
        for(int j=i+1;j<v.size();j++)
        if(v[i]==v[j]){
            cout<<v[j-1]<<endl;
            y=1;
            break;
        }
        
      if(y) {
        break;
      }
    }
    }