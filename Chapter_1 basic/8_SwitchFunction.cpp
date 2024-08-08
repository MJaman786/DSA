#include <iostream>
#include <math.h>
using namespace std;

void calculator()
{
    int a, b;
    char value;
    while (value != 0)
    {
        cout << "   Enter value of a : ";
        cin >> a;

        cout << "   Enter value of b : ";
        cin >> b;

        cout << "   Enter type of operation : ";
        cin >> value;

        int answer = 0;
        switch (value)
        {
        case '+':
            answer = a + b;
            cout << "Answer : " << answer << endl
                 << endl;
            break;

        case '-':
            answer = a - b;
            cout << "Answer : " << answer << endl
                 << endl;
            break;

        case '*':
            answer = a * b;
            cout << "Answer : " << answer << endl
                 << endl;
            break;

        case '/':
            answer = a / b;
            cout << "Answer : " << answer << endl
                 << endl;
            break;

        default:
            cout << "Enter valid operation [ +, -, *, / ]\n\n";
            break;
        }
    }
}

void rupees(int num)
{
    int hundrades = 0, fifty = 0, thirty = 0, twinty = 0, one = 0;
    switch (1)
    {
    case 1:
        hundrades = num / 100;
        num = num % 100;
    case 2:
        fifty = num / 50;
        num = num % 50;
    case 3:
        thirty = num / 30;
        num = num % 30;
    case 4:
        twinty = num / 20;
        num = num % 20;
    case 5:
        one = num;
    }
    cout << "We required " << endl;
    cout << "Hundrades : " << hundrades << endl;
    cout << "Fifty : " << fifty << endl;
    cout << "Thirty : " << thirty << endl;
    cout << "Twinty : " << twinty << endl;
    cout << "One : " << one << endl;
}

// power of number
void power(int num1, int num2)
{
    int result = 1;
    for (int i = 1; i <= num2; i++)
    {
        result = result * num1;
    }

    cout << "Power : " << result << endl;
}

// odd - even
void odd_even(int num)
{
    if (num & 1)
    {
        cout << "Is-Odd" << endl;
    }
    else
    {
        cout << "Is-Even" << endl;
    }
}

// prime number
int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void primeNumber(int num)
{
    if (isPrime(num))
    {
        cout << num << " is a Prime number" << endl;
    }
    else
    {
        cout << num << " is not a Prime number" << endl;
    }
}

// factorial of number
void factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    cout << "Factorial of " << num << " is " << result << endl;
}

// nCr =    n!
//      -----------
//       r!(n-r)!

int fact(int value)
{
    int result = 1;
    for (int i = 1; i <= value; i++)
    {
        result = result * i;
    }
    return result;
}
void nCr(int n, int r)
{
    // n!
    int nFactorial = fact(n);

    // r!
    int rFactorial = fact(r);

    // (n-r)!
    int n_rFactorial = fact(n - r);

    // print result
    cout << endl;
    cout << "n : " << n << "\tr : " << r << endl;
    int result = nFactorial / (rFactorial * n_rFactorial);
    cout << "Result : " << result << endl;
}

void printCounting(int value)
{
    for (int i = 1; i <= value; i++)
    {
        cout << i << " ";
    }
}

int IsPrime(int value)
{
    for (int i = 2; i < value; i++)
    {
        if (value % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void PrimeNumber(int num1, int num2)
{
    for (int i = num1; i <= num2; i++)
    {
        if (IsPrime(i) == 1)
        {
            cout << i << " ";
        }
    }
}
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
        /* code */
        int remainder = value % 10;
        if (remainder==1)
        {
            count++;
        }
        value = value / 10;
    }
    return count;
}
void setBits(int a, int b)
{
    int num1 = decimal_To_binary(a);
    int num2 = decimal_To_binary(b);

    int setBitnum1 = count(num1);
    int setBitnum2 = count(num2);

    int result = setBitnum1 + setBitnum2;
    cout<<"Binary form of "<<a<<" | "<<b<<" = "<<endl;
    cout<<a<<" : "<<num1<<" | "<<b<<" : "<<num2<<endl;
    cout<<"Total setBits : "<<result<<endl;
}

int main()
{
    // calculator
    // calculator();

    // rupees
    // rupees(1330);

    // power
    // power(4, 2);

    // odd-even
    // odd_even(10);

    // prime
    // primeNumber(11);

    // factorial
    // factorial(10);

    // nCr
    // nCr(8, 2);

    // printCounting
    // printCounting(10);

    // PrimeNumber(2, 13);

    // decimal_To_binary(12);
    // int result = decimal_To_binary(12);
    // cout << "Binary : " << result << endl;
    // binary_To_decimal(1100);

    // setBits
    // cout<<count(1111);
    setBits(7,1);
    return 0;
}