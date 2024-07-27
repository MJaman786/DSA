#include<iostream>
#include <math.h>
using namespace std;

// reverse a number
void reverseNumber(int num){
    int value = num;
    int answer = 0;
    while (num!=0)
    {
        int remainder = num % 10;
        answer = (answer * 10) + remainder;
        num = num / 10;
    }
    cout <<"Reverse of "<<value<<" : "<< answer << endl;
}

// 1's complement

void complementNumber(int num){
    int answer = 0;
    int i=1;
    // Convert Decimal To Binary
    while (num!=0)
    {
        int remainder = num % 2;
        answer = answer + remainder*i;
        num = num / 2;
        i=i*10;
    }
    cout<<"binary : "<<answer<<endl;
    // Convert to its 1's complement
    // int binary = answer;
    int complement = 0;
    int j=1;
    while (answer!=0)
    {
        int bit = answer % 10;
        if (bit==0)
        {
            complement = complement + 1 * j;
        }
        else{
            complement = complement + 0 * j;
        }        
        answer = answer / 10;
        j=j*10;
    }
    cout<<"1's Complement : "<<complement<<endl;
}

int main(){
    // reverseNumber(123);
    complementNumber(7);
    return 0;
}