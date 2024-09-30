#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // intialization of vector
    vector<int> v;

    cout << "size : " << v.size() << endl;         // tells  number of elements present
    cout << "capacity : " << v.capacity() << endl; // tells how much space or memory  is assigned
    cout << endl;

    // functions of vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // v.push_back(50);
    cout << "size : " << v.size() << endl;
    cout << "capacity : " << v.capacity() << endl;
    cout << endl;

    v.push_back(50);
    cout << "size : " << v.size() << endl;
    cout << "capacity : " << v.capacity() << endl;

    /*
        size : 0
        capacity : 0

        size : 4
        capacity : 4

        size : 5
        capacity : 8
    */
    // **Constructors**
    vector<int> v1;           // Default constructor, creates an empty vector.
    vector<int> v2(5);        // Creates a vector with 5 elements, all initialized to their default value.
    vector<int> v3(5, 10);    // Creates a vector with 5 elements, all initialized to 10.
    vector<int> v4(v2);       // Copy constructor, creates a copy of another vector.
    vector<int> v5(move(v3)); // Move constructor, creates a vector by moving the contents of another vector.

    // **Element Access**
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    cout << "at(1) : " << v1.at(1) << endl;      // Returns a reference to the element at position 1, with bounds checking.
    cout << "operator[](1) : " << v1[1] << endl; // Returns a reference to the element at position 1, without bounds checking.
    cout << "front() : " << v1.front() << endl;  // Returns a reference to the first element in the vector.
    cout << "back() : " << v1.back() << endl;    // Returns a reference to the last element in the vector.
    int *p = v1.data();                          // Returns a pointer to the first element in the vector.
    cout << "data() : " << *p << endl;

    // **Modifiers**
    v1.push_back(40);                 // Adds a new element at the end of the vector.
    v1.push_back(50);                 // Adds a new element at the end of the vector.
    v1.pop_back();                    // Removes the last element from the vector.
    v1.insert(v1.begin() + 2, 35);    // Inserts a new element at the specified position.
    v1.insert(v1.begin() + 3, 2, 25); // Inserts multiple new elements at the specified position.
    v1.erase(v1.begin() + 2);         // Removes the element at the specified position.
    v1.clear();                       // Removes all elements from the vector.

    // **Capacity**
    cout << "size() : " << v1.size() << endl;         // Returns the number of elements in the vector.
    cout << "capacity() : " << v1.capacity() << endl; // Returns the total number of elements that the vector can hold without reallocation.
    v1.reserve(10);                                   // Requests that the vector capacity be at least enough to contain n elements.
    cout << "capacity() : " << v1.capacity() << endl;
    v1.shrink_to_fit(); // Requests the vector to reduce its capacity to fit its size.
    cout << "capacity() : " << v1.capacity() << endl;

    // **Iterators**
    vector<int>::iterator it = v1.begin();   // Returns an iterator pointing to the first element in the vector.
    vector<int>::iterator it_end = v1.end(); // Returns an iterator pointing to one past the last element in the vector.
    while (it != it_end)
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    return 0;
}
