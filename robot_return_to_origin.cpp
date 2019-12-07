#include <iostream>
#include <unordered_map>
using namespace std;

bool judgeCircle(string moves) {
        
        unordered_map<char,int> count = {{'U',0},{'D',0},{'L',0},{'R',0}};
        
        for (auto c : moves)      
            count[c]++;
        
        if ( 
            (count['U'] + count['D']) % 2 != 0 || count['U'] != count['D']  || 
            (count['L'] + count['R']) % 2 != 0 || count['L'] != count['R'] 
           )
            return false;
        
        return true;
    }

int main()
{
    cout << (judgeCircle("LLUU")) ? "TRUE" : "FALSE"; 
    return 0;
}