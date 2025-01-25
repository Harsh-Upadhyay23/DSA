// Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <vector>
// #include <sstream>
// using namespace std;

// int main()
// {
//     string str = "decode dsa with pw";

//     // reverse(str.begin(), str.end());
//     stringstream ss(str);
//     vector<string> v,u;
//     string s;
//     while (ss >> s)
//     {
//         v.push_back(s);
//         u.push_back(s);
//     }
//     int n = v.size();
//     int maxindex=0;
//     string max="";
//      for (int i = 0; i < v.size(); i++)
//     {
//         sort(v[i].begin(), v[i].end());
//         reverse(v[i].begin(),v[i].end());
//         if(max<v[i]){
//             max=v[i];
//             maxindex=i;
//         }

//     }

//     cout<<u[maxindex];

// }
#include <bits/stdc++.h>
using namespace std;
int main() {
string str ;
getline(cin , str); //method to input a string with spaces
int n = str.size();
string mx = "", word = "";
for (int i = 0; i < n; i++) {
if (str[i] == ' ') {
mx = max(mx, word);
word = "";
} else {
word += str[i];
}
}
mx = max(mx, word);
cout << mx << '\n';
}