
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> words{"zocd","gjkl","hzqk","hzgq","gjkl"};
    
    const string morseCode[26] = {".-","-...","-.-.","-..",".","..-.",
                                  "--.","....","..",".---","-.-",".-..",
                                  "--","-.","---",".--.","--.-",".-.",
                                  "...","-","..-","...-",".--","-..-",
                                  "-.--","--.."};

    vector<string> transformed;
    string strTemp = "";

    for (int i = 0; i < words.size();i++) {
        
        strTemp = "";
        for (auto ch : words[i]) 
            strTemp += morseCode[ch-'a'];

        if (transformed.size() == 0)
            transformed.push_back(strTemp);

        else {

            for (int i = 0; i < transformed.size();i++) {

                if (strTemp != transformed[i] && i == transformed.size()-1)
                    transformed.push_back(strTemp);

                else if (strTemp == transformed[i])
                    break;
            }
        }
    }

    for(auto s:transformed)
        cout << s << endl;

    return 0;
}