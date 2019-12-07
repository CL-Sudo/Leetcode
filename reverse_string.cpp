#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char>& s) {

    int j = s.size();
    for (int i = 0; i < s.size()/2; i++) {
        j--;
        printf("%d %d\n", i,j);
        s[i] -= s[j];
        s[j] += s[i];
        s[i] = -1*(s[i] - s[j]); 
    }             
}

int main()
{
    vector<char> v {'H','e','l','l','h'};

    reverseString(v);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}