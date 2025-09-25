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

    int arr[100]; // fixed capacity (so we have room for insertions)

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

    // Insert at specific position
    int pos;
    cout << "\nEnter position to insert (1-based index): ";// 
    cin >> pos;
    cout << "Enter element to insert at position " << pos << ": ";
    cin >> x;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    n++;
    printarr(arr, n);

    // 2. Deletion Operation
    cout << "\nDeletion operation start now" << endl;

    // Delete last element
    n--; // just reduce size
    cout << "After deleting last element: ";
    printarr(arr, n);

    // Delete element at specific position
    cout << "\nEnter position to delete (1-based index): ";
    cin >> pos;
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "After deleting at position " << pos << ": ";
    printarr(arr, n);

    // Delete first element
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "After deleting first element: ";
    printarr(arr, n);

    return 0;
}
