#include<iostream>
using namespace std;

void linearSearch(int arr[], int size, int key){
    bool found = false;  // A flag to track if the element is found

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            cout << "Element found at index " << i << endl;
            found = true;  // Mark that the key was found
            break;  // Stop the loop once the element is found
        }
    }

    if (!found) {
        cout << "Element not found" << endl;  // Print if the key was never found
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 5;

    linearSearch(arr, size, key);
    return 0;
}
/*
Element found at index 4
*/ 
