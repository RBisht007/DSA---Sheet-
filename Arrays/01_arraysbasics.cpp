#include <iostream>
using namespace std;

void printarr(int arr[], int n) {
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100]; // fixed capacity

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 1. Insertion Operation
    // Insert at last
    int x;
    cout << "\nEnter element to be inserted at last: ";
    cin >> x;
    arr[n] = x; // place at end
    n++;
    printarr(arr, n);

    // Insert at specific position (0-based index)
    int pos;
    cout << "\nEnter position to insert (0-based index): ";
    cin >> pos;
    cout << "Enter element to insert at position " << pos << ": ";
    cin >> x;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    n++;
    printarr(arr, n);

    // 2. Deletion Operation
    cout << "\nDeletion operation start now" << endl;

    // Delete last element
    n--; // just reduce size
    cout << "After deleting last element: ";
    printarr(arr, n);

    // Delete element at specific position (0-based index)
    cout << "\nEnter position to delete (0-based index): ";
    cin >> pos;
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "After deleting at position " << pos << ": ";
    printarr(arr, n);

    // Delete first element (index 0)
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "After deleting first element: ";
    printarr(arr, n);


    // 3. Searching Operation
    int key;
    cout << "\nEnter element to search: ";
    cin >> key;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element " << key << " found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element " << key << " not found in the array." << endl;
    }

    

    return 0;
}
