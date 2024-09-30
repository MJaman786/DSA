#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q; // Create a queue of integers

    // 1. Push: Add an element to the back of the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // 2. Front: Access the front element of the queue
    cout << "Front element: " << q.front() << endl; // Output: 10

    // 3. Back: Access the back element of the queue
    cout << "Back element: " << q.back() << endl; // Output: 30

    // 4. Pop: Remove the front element from the queue
    q.pop();
    cout << "Front element after pop: " << q.front() << endl; // Output: 20

    // 5. Empty: Check if the queue is empty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Output: No

    // 6. Size: Get the number of elements in the queue
    cout << "Queue size: " << q.size() << endl; // Output: 2

    // 7. Swap: Swap the contents of two queues
    queue<int> q2;
    q2.push(40);
    q2.push(50);
    q.swap(q2);
    cout << "Queue q after swap: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl; // Output: 50 40

    return 0;
}