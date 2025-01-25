// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "875641233";
    // char max=str[0];
    // char max2=0;
    // for(int i=0;i<str.size();i++){
    //     if(str[i]>max){
    //         max2=max;
    //         max=str[i];
    //     }
    //     if(str[i]>max2 && str[i]<max){
    //         max2=str[i];
    //     }
    // }

    // cout<<max<<endl;
    // cout<<max2<<endl;


    sort(str.begin(),str.end());
    int i=str.size()-1;
    while(str[i]==str[i-1]){
        i--;
    }
    cout<<str[i-1];

    
}
