#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s = " I Love Programming";
    int a=s.length()-1;
    int b=s.length()-1;

    for(int i=s.length()-1;i>=0;i--){
        b--;
        if(s[i] == ' '){
            cout<<s.substr(b+1,a-b);
            s.erase(b+1,a-b);

        }
    }
}
