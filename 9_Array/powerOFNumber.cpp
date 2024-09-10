#include <iostream>
using namespace std;

void powerOfNumber(int num, int power)
{
    int number = num;
    while (num % power == 0)
    {
        num = num / power;
    }
    if (num == 1)
    {
        cout << number << " is in power of " << power << endl;
    }
    else
    {
        cout << number << " is't in power of " << power << endl;
    }
}

void powerOfTwo(int num)
{
    if (num > 0 && (num & (num - 1)) == 0){
        cout<<"Is in power of 2"<<endl;
    }else{
        cout<<"Isn't in power of 2"<<endl;
    }
}

int main()
{
    powerOfNumber(16, 2);
    powerOfNumber(27, 3);
    powerOfNumber(32, 4);
    return 0;
}

/*
output
16 is in power of 2
27 is in power of 3
32 is't in power of 4
*/