#include <iostream>

using namespace std;

bool isLongPressedName(string name, string typed) {    
    
    int i = 0;
    for (int j = 0; j < typed.length(); j++) {

        if (name[i] == typed.length() && i < name.length())
            i++;
        
        else if (j == 0)
            return false;
    }
    return i == name.length();
}   

int main()
{
    if (isLongPressedName("blex","aaleexx"))
        cout << "true";

    else  
        cout << "false";
    
    return 0;
}


