#include<iostream>
using namespace std;
void alternateSwap(int arr[], int size){
    int start = 0;
    int end = start + 1;

    for (int i = 0; i < size/2; i++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start += 2;
        end += 2;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    cout<<"After : ";
    alternateSwap(arr, size);
    return 0;
}
/*
Before : 1 2 3 4 5 6 7 8 9 10
After : 2 1 4 3 6 5 8 7 10 9
*/ 