// Input a string and return the number of substrings that contain only vowels.
// Input : str = "abjkoe"
// Output : 4
// Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
// Input : str = "hgdhpw"
// Output : 0
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int check(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
    return 0;
}

int main()
{
    string str = "abjkoe";
    vector<string> v;

    int n = str.size();
    int count=0;
    int answer=0;
    for (int i = 0; i < n; i++)
    {
        if (check(str[i]))count++;
        else{
            answer=answer+(count*(count+1))/2;
            count=0;
        }
        if(str[i+1]=='\0'){
            answer=answer+(count*(count+1))/2;
            break;
        }
    }
    cout<<"Answer :"<<answer;
}