// CPPProjectGP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// Task 1: Vector Operations
void Task1() {
    vector<int> NumbersList = { 0, 1, 2 };

    cout << "List: ";
    for (int i : NumbersList) {
        cout << i << " ";
    }
    cout << endl;

    NumbersList.clear();

    cout << "Size of list: " << NumbersList.size() << endl;
    if (NumbersList.empty()) {
        cout << "It's empty." << endl;
    }
}

// Task 2: Swapping Vectors
void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
}

void Task2() {
    vector<int> NumberList1 = { 0, 1, 2 };
    vector<int> NumberList2 = { 3, 4, 5 };

    swap(NumberList1, NumberList2);

    cout << "This is NumberList1 after swap: ";
    printVector(NumberList1);

    cout << "\nThis is NumberList2 after swap: ";
    printVector(NumberList2);

    cout << endl;
}

// Task 3: Queue Operations
void Task3() {
    queue<int> QueueOne;

    for (int i = 1; i <= 5; i++) {
        QueueOne.push(i);
    }

    if (!QueueOne.empty()) QueueOne.pop();
    if (!QueueOne.empty()) QueueOne.pop();

    QueueOne.push(0);

    cout << "Queue size: " << QueueOne.size() << endl;

    if (!QueueOne.empty()) {
        cout << "Front element: " << QueueOne.front() << endl;
        cout << "Back element: " << QueueOne.back() << endl;
    }

    cout << "Is the queue empty? " << (QueueOne.empty() ? "Yes" : "No") << endl;
}

int main() {
    cout << "Running Task 1:" << endl;
    Task1();

    cout << "\nRunning Task 2:" << endl;
    Task2();

    cout << "\nRunning Task 3:" << endl;
    Task3();

    return 0;
}
