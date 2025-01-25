// C++ Assignments | Strings - 2 | Week 7

// Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "PWSkills";
    string a = str;
    reverse(str.begin(), str.end());
    string b = str;
    a = a + b;
    cout << a;
}