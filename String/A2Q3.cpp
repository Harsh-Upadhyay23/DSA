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
    string str = "aabaaeeiioouu";
    vector<string> v;

    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (check(str[i]))

        {
            int a = i;
            string s = "";

            while (a < n && check(str[a]))
            {
                s = s + str[a];
                a++;
              
            }
            i = a;
              v.push_back(s);
        }
    }
    int answer=0;
    for (int i = 0; i < v.size(); i++)
    {
       int n=v[i].size();
       answer=answer+(n*(n+1))/2;
       cout<<v[i]<<" ";
    }

    cout<<answer;

}