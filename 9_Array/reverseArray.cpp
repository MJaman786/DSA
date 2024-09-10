#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0, end = size - 1;

    // type:1
    // A single for loop to swap elements from start to end
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start and end pointers
        start++;
        end--;
    }

    // type:2
    /*
    while (start<end)
    {
        // Swap the elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers towards the center
        start++;
        end--;
    }
    */
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After : ";
    reverseArray(arr, size);

    return 0;
}

/*
Before : 1 2 3 4 5 
After : 5 4 3 2 1
*/ 