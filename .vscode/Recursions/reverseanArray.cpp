#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int left, int right) {
    if (left >= right) return;
    swap(arr[left], arr[right]);
    reverseArray(arr, left + 1, right - 1);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before reverse:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, 0, n - 1);

    cout << "Array after reverse:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
