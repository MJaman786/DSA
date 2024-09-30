#include <iostream>
#include <list>

using namespace std;

void displayList(list<int> &lst) {
    for (int val : lst) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    // Initialize a list with elements
    list<int> myList = {10, 20, 30, 40, 50};

    // 1. Display initial list
    cout << "Initial list: ";
    displayList(myList);

    // 2. push_front() - Insert at the beginning
    myList.push_front(5);
    cout << "After push_front(5): ";
    displayList(myList);

    // 3. push_back() - Insert at the end
    myList.push_back(60);
    cout << "After push_back(60): ";
    displayList(myList);

    // 4. pop_front() - Remove the first element
    myList.pop_front();
    cout << "After pop_front(): ";
    displayList(myList);

    // 5. pop_back() - Remove the last element
    myList.pop_back();
    cout << "After pop_back(): ";
    displayList(myList);

    // 6. size() - Get the size of the list
    cout << "Size of the list: " << myList.size() << endl;

    // 7. front() - Access the first element
    cout << "First element: " << myList.front() << endl;

    // 8. back() - Access the last element
    cout << "Last element: " << myList.back() << endl;

    // 9. empty() - Check if the list is empty
    cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << endl;

    // 10. insert() - Insert before a specific position
    auto it = myList.begin();
    advance(it, 2); // move iterator to the 3rd position (0-based index)
    myList.insert(it, 25);
    cout << "After insert(25) at 3rd position: ";
    displayList(myList);

    // 11. erase() - Remove an element at a specific position
    it = myList.begin();
    advance(it, 1); // move iterator to the 2nd position
    myList.erase(it);
    cout << "After erase() at 2nd position: ";
    displayList(myList);

    // 12. remove() - Remove all elements with a specific value
    myList.remove(40);
    cout << "After remove(40): ";
    displayList(myList);

    // 13. reverse() - Reverse the list
    myList.reverse();
    cout << "After reverse(): ";
    displayList(myList);

    // 14. sort() - Sort the list
    myList.sort();
    cout << "After sort(): ";
    displayList(myList);

    // 15. clear() - Remove all elements
    myList.clear();
    cout << "After clear(), size: " << myList.size() << endl;

    return 0;
}
