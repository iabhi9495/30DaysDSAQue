#include<iostream>
using namespace std;

int main()
{
    string str = "racecar";

    for(int i=0;i<str.length();i++){
        bool isRepeated = false;
        for(int j=i+1;j<str.length();j++){

            if(str.at(i) == str.at(j)){
                isRepeated = true;
                break;
            }

        }
        if(!isRepeated){
            cout<<str.at(i);
            return 0;
        }

    }

    return -1;
}
