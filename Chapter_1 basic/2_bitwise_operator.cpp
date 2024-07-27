#include <iostream>
using namespace std;

void number(int num){
    int count=0;
    while(num!=0){
        if(num&1){
            count++;
        }
        num = num >> 1;
    }
    cout<<"Number of 1's in given BinaryNumber : "<<count;
}

void productANDsum(int num){
    int product=1;
    int sum=0;
    int remainder;
    while(num>0){
        remainder = num % 10;
        product = product * remainder;
        sum = sum + remainder;
        
        num = num / 10;
    }
    cout<<"\nProduct : "<<product;
    cout<<"\tSum : "<<sum<<endl;
}

void fibonacii(int range){
    int a=0;
    int b=1;
    cout<<"Series : ";
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=0; i<=range; i++){
        int next = a + b;
        cout<<next<<" ";
        a = b;
        b = next;
    }
}

void decimal_binary(int num){
    int remainder;
    int answer=0;
    while (num!=0)
    {
        remainder = num % 2;
        answer = answer * 10 + remainder;
        num = num / 2;  
    }

    cout << "Binary representation: " << answer <<endl;
    
}

int main(){
    // number(000000101);
    // Number of 1's in given BinaryNumber : 2 

    // productANDsum(414);
    // Product : 16    Sum : 9

    // fibonacii(10);
    // Series : 0 1 1 2 3 5 8 13 21 34 55 89 144   

    decimal_binary(10);

    return 0;   
}