#include<iostream>
using namespace std;
void arrayArrangement(int arr[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            count++;
        }
    }

    int pos=0;
    int arr1[7]={};
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(pos<count){
                arr1[pos]=arr[i];
                pos++;
            }
        }
        else{
            arr1[count] = arr[i];
            count++;
        }

    }
    int size = sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }

}
int main()
{

    int arr[] = {4,8,-1,3,-9,5,-6};
    int n=sizeof(arr)/sizeof(arr[0]);
    arrayArrangement(arr,n);
}





