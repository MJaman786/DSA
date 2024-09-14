#include <iostream>
using namespace std;

// function to find palindrom
void palindrom_string(string str)
{
    // store main string in new variable
    string current = str;
    int start = 0;
    int end = str.length() - 1;
    while (start < end)
    {
        // as we know string is array of character
        // reverse the main string
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
    // compare both the string
    if (current == str)
    {
        cout << "The string is a palindrome" << endl;
    }
    else
    {
        cout << "The string is not a palindrome" << endl;
    }
}

int main()
{

    // take input
    string str = "Palindrom check";

    // call the function
    palindrom_string(str);

    return 0;
}