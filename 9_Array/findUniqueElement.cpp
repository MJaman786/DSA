#include<iostream>
using namespace std;

void uniqueElement_1(int arr[], int size){
    int unique = 0;
    for(int i=0; i<size; i++){
        unique = unique ^ arr[i];
    }    
    cout<<"unique element : "<<unique;
}

void uniqueElemet_2(int arr[], int size){
    // sort the array first
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    // Step 2: Compare array elements with adjacent elements to find the unique one
    for (int i = 0; i < size; i++) {
        // Check for boundary conditions and unique elements
        if ((i == 0 && arr[i] != arr[i + 1]) ||  // First element, only check next
            (i == size - 1 && arr[i] != arr[i - 1]) ||  // Last element, only check previous
            (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])) {  // Middle elements, check both sides
            cout << "Unique element: " << arr[i] << endl;
            break;
        }
    }
}

int main(){
    int arr[]={1, 2, 3, 4, 5, 1, 2, 3, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    uniqueElemet_2(arr, size);
    return 0;
}
/*
unique element : 5
*/ 

/*
#include<iostream>
using namespace std;

void findNumber(long num){
    int countFrequency[10]={0};
    while(num!=0){
        int remainder = num % 10;
        countFrequency[remainder]++;
        num = num / 10;
    }
    cout << "Frequency of each digit (0-9): ";
    for(int i=0; i<10; i++){
        cout<<countFrequency[i]<<" ";
    }
    cout<<endl;
    cout<<"Unique Number : ";
    for(int i=0; i<10; i++){
        if(countFrequency[i]==1){
            cout<<i<<" ";
        }
    }
}

int main(){
    findNumber(1234566543210);
    return 0;
}

// output
/tmp/op2aGwMCYH.o
Frequency of each digit (0-9): 1 2 2 2 2 2 2 0 0 0 
Unique Number : 0 

=== Code Execution Successful === 
*/ 