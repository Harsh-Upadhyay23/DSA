#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s, p;
    cin >> s >> p;
    vector<int> for_s(26, 0), for_p(26, 0);
    vector<int> answer;
    int n = s.size();
    int m = p.size();
    if (m > n)
    {
        cout << "no anwer exits";
        return 0;
    }
    for (int i = 0; i < m; i++)
    {
        for_p[p[i] - 'a']++;
    }
    int i = 0;
    for (; i < m; i++)
    {
        for_s[s[i] - 'a']++;
    }
    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (for_s[i] != for_p[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        answer.push_back(0);
    }
    while (i < n)
    {
        for_s[s[i - m] - 'a']--;
        for_s[s[i] - 'a']++;
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (for_s[i] != for_p[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            answer.push_back(i-m+1);
        }
        i++;
    }
    cout<<"Answer :\n";
    for(auto x:answer)cout<<x<<" ";
}