// maximum minimum in array
#include <iostream>
#include <climits>
using namespace std;

// type 1
void min_max_number_1(int number)
{
    int minDigit = INT_MAX;
    int maxDigit = INT_MIN;
    while (number != 0)
    {
        int remainder = number % 10;
        if (remainder > maxDigit)
        {
            maxDigit = remainder;
        }
        if (remainder < minDigit)
        {
            minDigit = remainder;
        }
        number = number / 10;
    }
    cout << "-> type 1 " << endl;
    cout << "Minimum digit : " << minDigit << endl;
    cout << "Maximum digit : " << maxDigit << endl;
}

// type 2
pair<int, int> min_max_number_2(int number)
{
    int minDigit = INT_MAX;
    int maxDigit = INT_MIN;

    while (number != 0)
    {
        int remainder = number % 10;
        if (remainder > maxDigit)
        {
            maxDigit = remainder;
        }
        if (remainder < minDigit)
        {
            minDigit = remainder;
        }
        number = number / 10;
    }

    return make_pair(minDigit, maxDigit);
}

// type 3 passing through reference
void min_max_sum(int number, int &minDigit, int &maxDigit, int &sum)
{
    minDigit = INT_MAX;
    maxDigit = INT_MIN;
    sum = 0;

    while (number != 0)
    {
        int remainder = number % 10;
        if (remainder > maxDigit)
        {
            maxDigit = remainder;
        }
        if (remainder < minDigit)
        {
            minDigit = remainder;
        }
        sum += remainder;
        number = number / 10;
    }
}

// TYPE 4 for arrays
void min_max_array(int arr[], int size)
{
    int minimum = INT_MAX;
    int maximum = INT_MIN;

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        maximum = max(maximum, arr[i]);
        // if (arr[i] > maximum)
        // {
        //     maximum = arr[i];
        // }
        minimum = min(minimum, arr[i]);
        // if (arr[i] < minimum)
        // {
        //     minimum = arr[i];
        // }
    }
    cout << "-> type 4 " << endl;
    cout << "Minimum digit: " << minimum << endl;
    cout << "Maximum digit: " << maximum << endl;
}

// " scope of array "
void updateVariable(int num)
{
    num = 20;
}

void updateArray(int arr[], int size)
{
    cout << "\nInside the updateArray Function" << endl;
    cout << "updating index 0 : 90" << endl;
    arr[0] = 90;
}

// " sum of elements in an array"
int sumofArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

// "power of 2"
bool isPowerOfTwo_1(int n)
{
    if (n <= 0)
    {
        return false;
    }
    return (n & (n - 1)) == 0;
}
// alternative
bool isPowerOfTwo_2(int n)
{
    if (n <= 0)
    {
        return false;
    }
    // checks if n is divisible by 2
    while (n % 2 == 0)
    {
        n /= 2;
    }
    return n == 1;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // type1
    min_max_number_1(number);

    // type2
    pair<int, int> result = min_max_number_2(number);
    cout << "-> type 2 " << endl;
    cout << "Minimum digit: " << result.first << endl;
    cout << "Maximum digit: " << result.second << endl;

    // type 3
    int minDigit, maxDigit, sum;
    min_max_sum(number, minDigit, maxDigit, sum);
    cout << "-> type 3 " << endl;
    cout << "Minimum digit: " << minDigit << endl;
    cout << "Maximum digit: " << maxDigit << endl;
    cout << "Sum of digits: " << sum << endl;

    // type 4
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
    min_max_array(arr, size);

    // " scope of array "
    int num = 12;
    updateVariable(num);
    cout << num;

    // array updation
    cout << "\n\nInside the main function" << endl;
    cout << "Before updation : ";
    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    updateArray(arr, 3);
    cout << "After updation : ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    // "sum of elements of array"
    int sumArray[5] = {12, -12, 13, -13, 21};
    cout << "sum of Elements : " << sumofArray(sumArray, 5);

    // " power of 2 "
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo_2(num))
    {
        cout << num << " is a power of 2." << endl;
    }
    else
    {
        cout << num << " is not a power of 2." << endl;
    }

    return 0;
}
/*
output
Enter a number: 12345
-> type 1
Minimum digit : 1
Maximum digit : 5
-> type 2
Minimum digit: 1
Maximum digit: 5
-> type 3
Minimum digit: 1
Maximum digit: 5
Sum of digits: 15

-> type 4
Enter array elements: 1 2 3 4 5
Minimum digit: 1
Maximum digit: 5

// scope of array (array values get updated when we pass it to a function)

12

Inside the main function
Before updation : 1 2 3

Inside the updateArray Function
updating index 0 : 90
After updation : 90 2 3

sum of Elements : 21

Enter a number: 10
10 is not a power of 2.

Enter a number: 8
8 is a power of 2.

=== Code Execution Successful ===

*/