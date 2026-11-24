
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    if(s.size() != t.size())
        return false;

    unordered_map<char, int> mp;

    for(char c : s)
    {
        mp[c]++;
    }

    for(char c : t)
    {
        mp[c]--;
    }

    for(auto x : mp)
    {
        if(x.second != 0)
            return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s ,t;
    cin>>s>>t;


    if(isAnagram(s, t))
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}
