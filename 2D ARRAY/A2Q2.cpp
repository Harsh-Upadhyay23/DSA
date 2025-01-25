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
    // Transpose
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    
    // reverse the element of each colmon
    for(int j=0;j<n;j++){
        int i=0;
        int k=m-1;
        while(i<k){
            int temp=a[i][j];
            a[i][j]=a[k][j];
            a[k][j]=temp;
            i++;
            k--;
        }
    }
   
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout<<endl;
    }

    }