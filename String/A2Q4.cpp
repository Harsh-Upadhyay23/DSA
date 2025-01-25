// Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True
// Input : s = "book" , t = "hook"
// Output : False

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string s="hook";
    string t="book";

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)cout<<"true";
    else{
        cout<<"false";
    }
}