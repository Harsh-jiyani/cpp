#include <iostream>
#include <list>

using namespace std;

void displayList(const list<int>& myList) {
    for (int num : myList) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    list<int> myList;

    // Adding elements
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(5); // Adding at the front

    cout << "List elements after adding: ";
    displayList(myList);

    // Removing an element
    myList.remove(20);
    cout << "List after removing 20: ";
    displayList(myList);

    // Sorting the list
    myList.sort();
    cout << "Sorted list: ";
    displayList(myList);

    // Reversing the list
    myList.reverse();
    cout << "Reversed list: ";
    displayList(myList);

    return 0;
}
