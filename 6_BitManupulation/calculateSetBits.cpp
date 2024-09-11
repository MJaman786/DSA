#include <iostream>
using namespace std;

void calculateSetBits(int num){
    int number = num;
    int count = 0;
    while (num > 0){
        if (num & 1 == 1){
            count++;
        }
        num = num >> 1;
    }
    cout << "Number of set bits for " <<number<<" : "<< count << endl;
}

int main(){
    
    // for 10 
    calculateSetBits(10);
    
    // for 8 
    calculateSetBits(8);
    
    // for 6 
    calculateSetBits(6);
    
    // for 7 
    calculateSetBits(7);
    
    // for 15 
    calculateSetBits(15);
    
    return 0;
}

/*
/tmp/bvJUYdapr0.o
Number of set bits for 10 : 2
Number of set bits for 8 : 1
Number of set bits for 6 : 2
Number of set bits for 7 : 3
Number of set bits for 15 : 4

*/ 