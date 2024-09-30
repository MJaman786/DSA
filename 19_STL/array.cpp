#include <iostream>
#include <array>

using namespace std;

int main()
{

    array<int, 5> arr = {1, 2, 3, 4, 5};
    // array functions
    cout << "Size of Array      : " << arr.size() << endl;
    cout << "Element at index 2 : " << arr.at(2) << endl;
    cout << "First Element      : " << arr.front() << endl;
    cout << "Last Element       : " << arr.back() << endl;
    cout << "Max size of Array  : " << arr.max_size() << endl;
    cout << "Is Empty or not    : " << arr.empty() << endl;
    return 0;
}

/*
Size of Array      : 5
Element at index 2 : 3
First Element      : 1
Last Element       : 5
Max size of Array  : 5
Is Empty or not    : 0
*/ 