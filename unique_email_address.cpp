#include <iostream>
#include <vector>
#include <set>

using namespace std;
int numUniqueEmails(vector<string>& emails) {  
    
    string temp = "";
        set<string> tr;
        for (int i = 0; i < emails.size(); i++) {
            for (auto str : emails[i]) {
                if (str == '+' || str == '@') break;       
                else if (str == '.') continue;         
                else temp += str;          
            }
            tr.insert(temp += emails[i].substr(emails[i].find('@')));
            temp = "";
        }  
        return tr.size();
}

int main()
{
    vector<string> str {"test.email+alex@leetcode.com", "test.email@leetcode.com"};
    
    cout << numUniqueEmails(str);

    return 0;
}