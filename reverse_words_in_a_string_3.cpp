#include <iostream>
#include <sstream>

using namespace std;

string reverseWords(string s) {
        
        istringstream ss(s);
        string str, rev = "";

        if (s == "") return s;
        while (ss >> str) {

            if (rev == "") {
                for (int i = str.length()-1; i >=0; i--)
                    rev += str[i];
            }
            else {
                rev += " ";
                for (int i = str.length()-1; i >=0; i--)
                    rev += str[i];
            }          
        }
        return rev;
    }

int main()
{
    cout << reverseWords("Let's take LeetCode contest");

    return 0;
}