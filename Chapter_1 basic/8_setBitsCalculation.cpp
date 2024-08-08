#include<iostream>
#include<math.h>
using namespace std;

// -------------------- count set bits ---------------------
int decimal_To_binary(int value)
{
    int answer = 0;
    int i = 1;
    while (value != 0)
    {
        int remainder = value % 2;
        answer = answer + remainder * i;
        value = value / 2;
        i = i * 10;
    }
    // cout << "Binary : " << answer << endl;
    return answer;
}

void binary_To_decimal(int value)
{
    int answer = 0;
    int i = 0;
    while (value != 0)
    {
        int remainder = value % 10;
        if (remainder == 1)
        {
            answer = answer + pow(2, i);
        }
        value = value / 10;
        i++;
    }
    cout<<"Decimal : "<<answer<<endl;
}

int count(int value){
    int count = 0;
    while (value!=0)
    {
        int remainder = value % 10;
        if (remainder==1)
        {
            count++;
        }
        value = value / 10;
    }
    return count;
}

void setBits()
{
    int a, b;
    cout<<"Enter num1 : ";
    cin>>a;
    cout<<"Enter num2 : ";
    cin>>b;
    int num1 = decimal_To_binary(a);
    int num2 = decimal_To_binary(b);

    int setBitnum1 = count(num1);
    int setBitnum2 = count(num2);

    int result = setBitnum1 + setBitnum2;
    cout<<"Binary form of "<<a<<" , "<<b<<" : "<<endl;
    cout<<a<<" : "<<num1<<" | "<<b<<" : "<<num2<<endl;
    cout<<"Total setBits : "<<result<<endl;
}

int main(){
    setBits();

    // Message to display and wait for enter
    cout << "Press Enter to continue...";
    cin.ignore(); // Ignore previous newline character
    cin.get(); // Wait for user to press enter

    return 0;
}
