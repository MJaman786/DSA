#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s; // Create a stack of integers

    // 1. Push: Add an element to the top of the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // 2. Top: Access the top element of the stack
    cout << "Top element: " << s.top() << endl; // Output: 30

    // 3. Pop: Remove the top element from the stack
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Output: 20

    // 4. Empty: Check if the stack is empty
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // Output: No

    // 5. Size: Get the number of elements in the stack
    cout << "Stack size: " << s.size() << endl; // Output: 2

    // 6. Swap: Swap the contents of two stacks
    stack<int> s2;
    s2.push(40);
    s2.push(50);
    s.swap(s2);
    cout << "Stack s after swap: ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl; // Output: 50 40

    return 0;
}