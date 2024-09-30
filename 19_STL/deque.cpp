#include <iostream>
#include <deque>

using namespace std;

void printElements(deque<int>& myDeque) {
    for (int i = 0; i < myDeque.size(); i++) {
        cout << myDeque[i] << " ";
    }
    cout << endl;
}

int main() {
    // Create a deque
    deque<int> myDeque;

    // 1. push_back() - Add an element at the end of the deque
    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_back(30);

    cout << "Deque after push_back(): ";
    for (int i = 0; i < myDeque.size(); i++) {
        cout << myDeque[i] << " ";
    }
    cout << endl;

    // 2. push_front() - Add an element at the front of the deque
    myDeque.push_front(5);

    cout << "Deque after push_front(): ";
    for (int i = 0; i < myDeque.size(); i++) {
        cout << myDeque[i] << " ";
    }
    cout << endl;

    // 3. pop_back() - Remove an element from the end of the deque
    myDeque.pop_back();

    cout << "Deque after pop_back(): ";
    for (int i = 0; i < myDeque.size(); i++) {
        cout << myDeque[i] << " ";
    }
    cout << endl;

    // 4. pop_front() - Remove an element from the front of the deque
    myDeque.pop_front();

    cout << "Deque after pop_front(): ";
    for (int i = 0; i < myDeque.size(); i++) {
        cout << myDeque[i] << " ";
    }
    cout << endl;

    // 5. front() - Access the first element of the deque
    cout << "Front element: " << myDeque.front() << endl;

    // 6. back() - Access the last element of the deque
    cout << "Back element: " << myDeque.back() << endl;

    // 7. at() - Access an element at a specific position
    cout << "Element at index 1: " << myDeque.at(1) << endl;

    // 8. size() - Get the number of elements in the deque
    cout << "Size of deque: " << myDeque.size() << endl;

    // 9. empty() - Check if the deque is empty
    if (myDeque.empty()) {
        cout << "Deque is empty" << endl;
    } else {
        cout << "Deque is not empty" << endl;
    }

    // 10. clear() - Remove all elements from the deque
    // myDeque.clear();

    cout << "Deque after clear(): ";
    if (myDeque.empty()) {
        cout << "Deque is empty" << endl;
    } else {
        for (int i = 0; i < myDeque.size(); i++) {
            cout << myDeque[i] << " ";
        }
    }
    cout << endl;

    // 11.  erase() - Remove an element at a specific position
    deque<int> mydeque;
    mydeque.push_back(10);
    mydeque.push_back(20);
    mydeque.push_back(30);
    mydeque.push_back(40);
    mydeque.push_back(50);
    cout<<"Before Erasing : ";
    printElements(mydeque);
    
    cout<<"After Erasing : ";
    mydeque.erase(mydeque.begin(), mydeque.begin()+2);
    printElements(mydeque);

    return 0;
}