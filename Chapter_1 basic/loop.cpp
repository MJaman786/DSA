// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void sumOfNumbers(int num)
{
    int i = 1;
    int sum = 0;
    while (i <= num)
    {
        sum = sum + i;
        i++;
    }
    cout << endl;
    cout << "Sum of numbers till " << num << " : " << sum << endl;
}
void sumOfEvenOddNumbers(int num)
{
    int i = 0;
    int Esum = 0;
    int Osum = 0;
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            Esum = Esum + i;
        }
        else
        {
            Osum = Osum + i;
        }
        i++;
    }
    cout << endl;
    cout << "Sum of Even Numbers till " << num << " : " << Esum << endl;
    cout << "Sum of Odd Numbers till " << num << " : " << Osum << endl;
}

// void isPrime(int num)
// {
//     for (int i = 2; i * i <= num; i++)
//     {
//         if (num <= 1)
//         {
//             cout << num << " is not a prime number" << endl;
//             return;
//         }
//         if (num % i == 0)
//         {
//             cout<<endl;
//             cout << num << " is not a prime number" << endl;
//             return;
//         }
//     }
//     cout<<endl;
//     cout << num;
// }

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

void findPrimesInRange(int num1, int num2)
{
    cout << "\nPrime numbers from range (" << num1 << ", " << num2 << ") : ";
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl
         << endl;
}

int main()
{
    int num = 20;
    // cout << "Enter a number : ";
    // cin >> num;

    sumOfNumbers(num);
    sumOfEvenOddNumbers(num);
    // isPrime(num);

    int start = 2;    // Example start number
    int end = 100000; // Example end number

    findPrimesInRange(start, end);
}