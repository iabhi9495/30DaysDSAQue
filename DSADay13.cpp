#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "MCCXIV";
    int decSum =0;int prev =0;
     int ans = 0;
    for(int i=str.length()-1;i>=0;i--)
    {
        char var = str.at(i);
        prev = ans;
        switch(var)
        {
            case 'I':
                ans =  1;
                break;
            case 'V':
                ans =  5;
                break;
            case 'X':
                ans = 10;
                break;
            case 'L':
                ans = 50;
                break;
            case 'C':
                ans = 100;
                break;
            case 'D':
                ans = 500;
                break;
            case 'M':
                ans = 1000;
                break;
        }
        if(prev > ans){
            decSum -= ans;
        }
        else
            decSum += ans;

    }
    cout<<decSum;

}
