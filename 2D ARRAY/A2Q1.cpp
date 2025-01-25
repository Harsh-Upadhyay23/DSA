#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the number of raws and Columns  of first matrix : " << endl;
    cin >> m >> n;
    int a[m][n];
    cout << "Enter the elements of array : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j ||  i+j==m-1){
               cout<<a[i][j];
            }
            else{
                cout<<" ";
                
            }
        }
        cout<<endl;
    }
    
    
    
    }