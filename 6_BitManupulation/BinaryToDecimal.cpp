#include<iostream>
using namespace std;

void binaryTOdecimal(int num){
    int number = num;
    int answer = 0;
    int place = 1;
    while(num!=0){
        int remainder = num % 10;
        if(remainder==1){
            answer = answer + remainder * place;
        }
        num = num / 10;
        place = place * 2;
    }
    cout<<"Decimal of "<<number<<" : "<<answer<<endl;
}

int main(){
    binaryTOdecimal(10);
    binaryTOdecimal(100);
    binaryTOdecimal(110);
    binaryTOdecimal(1000);
    return 0;
}

/*
/tmp/1cjd4Nd5Io.o
Decimal of 10 : 2
Decimal of 100 : 4
Decimal of 110 : 6
Decimal of 1000 : 8
*/ 