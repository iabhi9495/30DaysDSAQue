#include <iostream>
#include <string>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0) {
        return;
    }
    cout << s.at(s.length() - 1);
    reverse(s.substr(0, s.length() - 1));

}

int main()
{
    string s = "codejam";
    reverse(s); 
}
