#include<iostream>
#include<math.h>
using namespace std;

void Binary_Decimal(int num){
    int answer = 0;
    int i=0;
    while (num!=0)
    {
        int remainder = num % 10;
        if (remainder == 1)
        {
            answer = answer + pow(2, i);            
        }
        
        num = num / 10;
        i++;
    }
    cout<<"Decimal : "<<answer;
}

void Decimal_Binary(int num){
    int answer = 0;
    int i=0;
    while (num!=0)
    {
        int remainder = num % 2;
        answer = answer + remainder * pow(10, i);
        num = num / 2;
        i++;
    }
    cout<<"Binary : "<<answer; 
}

int main(){
    // Binary_Decimal(1010);
    Decimal_Binary(2);
    return 0;
}