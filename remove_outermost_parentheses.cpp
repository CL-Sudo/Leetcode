//         string res;
//         int opened = 0;
//         for (char c : S) {
//             if (c == '(' && opened++ > 0) res += c;
//             if (c == ')' && opened-- > 1) res += c;
//         }
//         return res;

#include <iostream>
using namespace std;

string remove(string s) {

    string str = "";
    int c = 0, st = 0;
    for (int i = 0; i < s.length(); i++) { 
        (s[i] == '(') ? c++ : c--;
        if (c == 0 && i-st>1) str += s.substr(st+1,i-st-1);
        if (c == 0) st = i+1;
    }
    return str;
}

int main()
{
    string p = "(()())(())";
    cout << remove(p) << endl;
    return 0;
}