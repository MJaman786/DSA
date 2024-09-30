#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Create a priority queue of integers
    priority_queue<int> pq;

    // 1. Push: Add an element to the priority queue
    pq.push(10);
    pq.push(20);
    pq.push(30);

    // 2. Top: Access the top element of the priority queue
    cout << "Top element: " << pq.top() << endl; // Output: 30

    // 3. Pop: Remove the top element from the priority queue
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl; // Output: 20

    // 4. Empty: Check if the priority queue is empty
    cout << "Is priority queue empty? " << (pq.empty() ? "Yes" : "No") << endl; // Output: No

    // 5. Size: Get the number of elements in the priority queue
    cout << "Priority queue size: " << pq.size() << endl; // Output: 2

    // 6. Swap: Swap the contents of two priority queues
    priority_queue<int> pq2;
    pq2.push(40);
    pq2.push(50);
    pq.swap(pq2);
    cout << "Priority queue pq after swap: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl; // Output: 50 40

    // Create a priority queue (mean heap) of integers
    priority_queue<int, vector<int>, greater<int>> meanHeap;

    // Push elements into the mean heap
    meanHeap.push(10);
    meanHeap.push(20);
    meanHeap.push(30);

    cout << "Mean heap: ";
    priority_queue<int, vector<int>, greater<int>> temp = meanHeap; // Declare temp as a copy of meanHeap
    int sum = 0;
    int count = 0;
    while (!temp.empty()) {
        sum += temp.top();
        count++;
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl; // Output: 10 20 30
    cout << "Mean: " << static_cast<double>(sum) / count << endl; // Output: 20.0

    return 0;
}