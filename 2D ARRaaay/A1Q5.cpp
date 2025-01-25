#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number of raws and Columns : " << endl;
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter the elements of array : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int maxrow=0;
    int max=0;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
        if(sum>max){
            max=sum;
            maxrow=i;
        }

    }
    cout<<"ROW : "<<maxrow+1<<endl<<"sum : "<<max;
}