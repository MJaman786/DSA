#include<iostream>
using namespace std;

void decimalTobinary(int num){
    int number = num;
    int answer = 0;
    int place = 1;
    while(num!=0){
        int remainder = num % 2;
        answer = answer + remainder * place;
        num = num / 2;
        place = place * 10;
    }
    cout<<"Binary of "<<number<<" : "<<answer<<endl;
}

int main(){
    decimalTobinary(2);
    decimalTobinary(4);
    decimalTobinary(6);
    decimalTobinary(8);
    decimalTobinary(16);
    decimalTobinary(34);
    decimalTobinary(64);
    return 0;
}
/*
/tmp/Qsvl0MAmUl.o
Binary of 2 : 10     
Binary of 4 : 100    
Binary of 6 : 110    
Binary of 8 : 1000   
Binary of 16 : 10000 
Binary of 34 : 100010
Binary of 64 : 1000000
*/ 