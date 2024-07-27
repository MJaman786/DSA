#include<iostream>
#include <cmath>
using namespace std;
// D -> B
void decimalToBinary_1(int num) {
    int answer = 0, place = 1;
    while (num > 0) {
        int remainder = num % 2;
        answer += remainder * place;
        num /= 2;
        place *= 10;
    }
    cout << "Binary: " << answer << endl;
}

void decimalToBinary_2(int num) {
    int answer = 0, place = 1;
    while (num > 0) {
        int digit = num & 1;
        answer = answer + digit * place;
        num = num >> 1;
        place = place * 10;
    }
    cout << "Binary: " << answer << endl;
}

void decimalToBinary_3(int num){
    int arr[10];
    int i = 0;
    while (num!=0)
    {
        int remiander = num % 2;
        num = num / 2;
        arr[i] = remiander;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;    
}

int input(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

// B -> D

void BinaryToDecial_1(int num){
    int answer = 0;
    int i=0;
    while (num!=0)
    {
        int ans = num % 10;
        if(ans==1){
            answer = answer + pow(2, i);
        }
        num = num / 10;
        i++;
    }
    cout<<"Decimal : "<<answer;
}

void BinaryToDecial_2(int num){
    int arr[10];
    int answer = 0;
    int i=0;
    while (num!=0)
    {
        arr[i] = num % 10;
        num = num / 10;
        i++;
    }
    for (int j = i; j >= 0 ; j--)
    {
        if(arr[j]==1){
            answer = answer + pow(2, j);
        }
    }
    
    cout<<"Decimal : "<<answer;
}

void Binary_D(int num){
    int answer = 0;
    int i=0;
    while (num!=0)
    {
        int bit = num & 1;
        if (bit==1)
        {
            answer = answer + pow(2, i);
        }
        num = num >> 1;
        i++;
    }
    cout<<"Decimal : "<<answer;    
}

int main(){
    // decimalToBinary_1(7);
    // decimalToBinary_2(7);
    // decimalToBinary_3(7);
    // BinaryToDecial_1(1010);
    // BinaryToDecial_2(10010);
    Binary_D(1010);
    return 0;
}