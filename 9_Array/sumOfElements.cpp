#include<iostream>
using namespace std;

int sumOfElements(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = sumOfElements(arr, size);
    cout << "Sum of elements in the array is: " << sum << endl;
    return 0;
}
/*
output
Sum of elements in the array is: 15
*/ 