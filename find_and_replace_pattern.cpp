#include <iostream>
#include <vector>
#include <map>

using namespace std;

string t (string w) {
    
    map<char,int> m;
    for (char c : w) if (!m.count(c)) m[c] = m.size(); 
    for (int i = 0; i < w.length(); i++) w[i] = m[w[i]] + 'a';
    
    return w;
}

vector<string> findAndReplacePattern(vector<string>& words, string p) {

    vector<string> rst;
    for (auto w : words) 
        if (t(w) == t(p)) rst.push_back(w);
    
    return rst;
}

int main()
{
    vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
    string p = "xyz";

    for (auto str : findAndReplacePattern(words,p))
        cout << str << endl;

    return 0;
}