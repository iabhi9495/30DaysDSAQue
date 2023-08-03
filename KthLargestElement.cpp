#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int largestElement(int arr[],int pos,int size)
{
    sort(arr,arr+size);
    return arr[size-pos];

}
int main()
{
    int size,pos;
    cout<<"Enter the size of an array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Enter an position u want to find the largest element : ";
    cin>>pos;
    cout<<pos<<"th largest element is : "<<largestElement(arr,pos,size);
}
