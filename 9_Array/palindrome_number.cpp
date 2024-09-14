#include<iostream>
using namespace std;

void palindrome_number(int num){
    int num1 = num;
    int num2 = 0;
    while(num!=0){
        int remainder = num % 10;
        num2 = num2 * 10 + remainder;
        num = num / 10;
    }
    if(num1==num2){
        cout<<num1<<" : Is a palindrome"<<endl;
    }else{
        cout<<num1<<" : Is't a palindrome"<<endl;
    }
}

int main(){
    int num1 = 12321;
    palindrome_number(num1);
    
    int num2 = 123;
    palindrome_number(num2);
    return 0;
}
/*
/tmp/56YeAFE94W.o
12321 : Is a palindrome
123 : Is't a palindrome
*/ 