#include <iostream>
#include <deque>
#include <list>
#include <queue>

void dequeExample() {
    // std::deque is a double-ended queue that allows efficient insertion and deletion
    std::deque<int> myDeque;

    // Create (Insert elements)
    myDeque.push_back(10); // Inserts 10 at the back
    myDeque.push_back(20); // Inserts 20 at the back
    myDeque.push_front(5); // Inserts 5 at the front

    // Read (Access elements)
    std::cout << "Elements in the deque: ";
    for (const int& num : myDeque) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Update (Modify elements)
    myDeque[1] = 15; // Modify the second element to 15

    // Delete (Erase elements)
    myDeque.pop_back(); // Removes the last element
    myDeque.pop_front(); // Removes the first element

    std::cout << "Updated elements in the deque: ";
    for (const int& num : myDeque) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void listExample() {
    // std::list is a doubly linked list that allows fast insertion and deletion anywhere in the list
    std::list<std::string> myList;

    // Create (Insert elements)
    myList.push_back("apple"); // Inserts "apple" at the back
    myList.push_back("banana"); // Inserts "banana" at the back
    myList.push_front("grapes"); // Inserts "grapes" at the front

    // Read (Access elements)
    std::cout << "Elements in the list: ";
    for (const std::string& fruit : myList) {
        std::cout << fruit << " ";
    }
    std::cout << std::endl;

    // Update (No direct update for lists, but can use iterators)
    auto it = std::find(myList.begin(), myList.end(), "banana");
    if (it != myList.end()) {
        *it = "orange"; // Modify "banana" to "orange"
    }

    // Delete (Erase elements)
    myList.pop_front(); // Removes the first element

    std::cout << "Updated elements in the list: ";
    for (const std::string& fruit : myList) {
        std::cout << fruit << " ";
    }
    std::cout << std::endl;
}

void queueExample() {
    // std::queue is a container adapter that follows the FIFO (First-In-First-Out) principle
    std::queue<std::string> myQueue;

    // Create (Enqueue elements)
    myQueue.push("apple"); // Enqueue "apple"
    myQueue.push("banana"); // Enqueue "banana"
    myQueue.push("orange"); // Enqueue "orange"

    // Read (Access the front element)
    std::cout << "Front of the queue: " << myQueue.front() << std::endl;

    // Update (No direct update for queues)

    // Delete (Dequeue an element)
    myQueue.pop(); // Dequeue the front element

    // Read (Print all elements)
    std::cout << "Updated elements in the queue: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;
}

void priorityQueueExample() {
    // std::priority_queue is a container adapter that follows the priority-based ordering
    std::priority_queue<int> myPriorityQueue;

    // Create (Enqueue elements)
    myPriorityQueue.push(30); // Enqueue 30
    myPriorityQueue.push(10); // Enqueue 10
    myPriorityQueue.push(20); // Enqueue 20

    // Read (Access the top element)
    std::cout << "Top of the priority queue: " << myPriorityQueue.top() << std::endl;

    // Update (No direct update for priority queues)

    // Delete (Dequeue the top element)
    myPriorityQueue.pop(); // Dequeue the top element

    // Read (Print all elements)
    std::cout << "Updated elements in the priority queue: ";
    while (!myPriorityQueue.empty()) {
        std::cout << myPriorityQueue.top() << " ";
        myPriorityQueue.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "--- Deque Example ---" << std::endl;
    dequeExample();

    std::cout << "\n--- List Example ---" << std::endl;
    listExample();

    std::cout << "\n--- Queue Example ---" << std::endl;
    queueExample();

    std::cout << "\n--- Priority Queue Example ---" << std::endl;
    priorityQueueExample();

    return 0;
}
